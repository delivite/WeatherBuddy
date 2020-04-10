#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkReply>
#include <unordered_map>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onFinished(QNetworkReply *reply);

    void onImageDownloadFinished(QNetworkReply *rep);

    void on_get_weather_button_clicked();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QNetworkAccessManager *image_manager;

    std::unordered_map<QString, long> city_store;
    std::unordered_map<QString, QString> country_store;
    long get_city_key(QString city, QString country);
    void get_city_list(QString filename);
    void get_country_list(QString filename);
    void parse_weather_data(const QString &data);
    void set_weather_icon(const QString &url);
    void request_weather_data(const long &city_id);
    void populate_combo();
};
#endif // MAINWINDOW_H
