#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QStringList>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QPixmap>
#include <QUrl>
#include <QNetworkAccessManager>
#include <QNetworkRequest>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    get_city_list("city_data.csv");
    get_country_list("countrycodes.csv");
    populate_combo();
}

MainWindow::~MainWindow()
{
    delete manager;
    delete image_manager;
    delete ui;
}

void MainWindow::onFinished(QNetworkReply *reply)
{
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }

    QString answer = reply->readAll();

    parse_weather_data(answer);

    reply->deleteLater();
}

void MainWindow::onImageDownloadFinished(QNetworkReply *reply)
{
    QPixmap pm;
    pm.loadFromData(reply->readAll());
    //ui->label->setPixmap(pm);
    ui->icon_label->setPixmap(pm.scaled(100,100,Qt::KeepAspectRatio));

    reply->deleteLater();
}

long MainWindow::get_city_key(QString city, QString country)
{
    long city_key = city_store[city+country_store[country]];
    return city_key;
}

void MainWindow::get_city_list(QString filename)
{
    long city_id = 0;
    QString city, country, city_key;;

    QFile file(filename);
    QTextStream stream(&file);

    if(file.open(QFile::ReadOnly)){

        while (!stream.atEnd()){
            const QStringList data_line { stream.readLine().split(';') };

            city_id = data_line[0].toLong();
            city = data_line[1];
            country = data_line[2];

            city_key = city + country;
            city_store[city_key] = city_id;
        }
        file.close();
    }else
        qDebug("Unable to open file");
}

void MainWindow::get_country_list(QString filename)
{

    QString country, country_code;

    QFile file(filename);
    QTextStream stream(&file);

    if(file.open(QFile::ReadOnly)){

        while (!stream.atEnd()){
            const QStringList data_line { stream.readLine().split(';') };

            country = data_line[0];
            country_code = data_line[1];

            country_store[country] = country_code;
        }
        file.close();
    }else
        qDebug("Unable to open file");
}

void MainWindow::parse_weather_data(const QString &data)
{
    ui->city_label->setText("City: " + ui->city_edit->text());
    ui->country_label->setText("Country: " + ui->country_combo->currentText());
    ui->date_label->setText("Date: " + QDate::currentDate().toString("dddd d-MM-yyyy"));
    ui->time_label->setText("Time: " + QTime::currentTime().toString("hh:mm"));

    qDebug() << data << "\n";

    //Convert Json into QJasonDocument
    QJsonDocument sd = QJsonDocument::fromJson(data.toUtf8());
    QJsonObject sett2 = sd.object();

    //Get a particular block of json document by name
    QJsonValue value = sett2.value(QString("main"));
    QJsonObject item = value.toObject();

    //Get an item under the parsed block and convert to appropriate type
    QJsonValue value_temp = item["temp"];
    ui->temp_label->setText("Temperature: " + QString::number(value_temp.toDouble()) + " degrees");

    QJsonValue value_feels_like = item["feels_like"];
    ui->feels_label->setText("Feels Like: " + QString::number(value_feels_like.toDouble()) + " degrees");

    QJsonValue value_humidity = item["humidity"];
    ui->humidity_label->setText("Humidity: " + QString::number(value_humidity.toInt()));

    //Get a block of item that is an array and convert to array
    QJsonArray jsonArray = sett2["weather"].toArray();

    foreach (const QJsonValue & value, jsonArray) {
        QJsonObject obj = value.toObject();
        QString url = "http://openweathermap.org/img/wn/"+obj["icon"].toString()+"@2x.png";
        set_weather_icon(url);

        ui->weather_label->setText("Weather: " + obj["description"].toString());
    }
}

void MainWindow::set_weather_icon(const QString &url)
{
    image_manager = new QNetworkAccessManager(this);
    connect(image_manager, &QNetworkAccessManager::finished, this, &MainWindow::onImageDownloadFinished);
    QNetworkRequest image_request;
    image_request.setUrl(QUrl(url));
    image_manager->get(image_request);
}

void MainWindow::request_weather_data(const long &city_id)
{
    manager = new QNetworkAccessManager(this);
    QString url = "http://api.openweathermap.org/data/2.5/weather?id=" + QString::number(city_id) + "&units=metric&APPID=e4a3e6f55b73f7e34e231800f525d1ce";
    connect(manager, &QNetworkAccessManager::finished, this, &MainWindow::onFinished);
    QNetworkRequest request;
    request.setUrl(QUrl(url));
    manager->get(request);
}


void MainWindow::on_get_weather_button_clicked()
{
    QString city = ui->city_edit->text();
    QString country = ui->country_combo->currentText();

    request_weather_data(get_city_key("Berlin", "Germany"));
}

void MainWindow::populate_combo()
{
    for (auto each : country_store){
        ui->country_combo->addItem(each.first);
    }
}
