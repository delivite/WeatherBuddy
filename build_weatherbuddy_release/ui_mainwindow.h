/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *city_edit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QComboBox *country_combo;
    QPushButton *get_weather_button;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *weather_label;
    QLabel *icon_label;
    QLabel *temp_label;
    QLabel *feels_label;
    QLabel *humidity_label;
    QLabel *date_label;
    QLabel *time_label;
    QLabel *city_label;
    QLabel *country_label;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/10d@2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        city_edit = new QLineEdit(centralwidget);
        city_edit->setObjectName(QString::fromUtf8("city_edit"));
        city_edit->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(city_edit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        country_combo = new QComboBox(centralwidget);
        country_combo->setObjectName(QString::fromUtf8("country_combo"));
        country_combo->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(country_combo);

        get_weather_button = new QPushButton(centralwidget);
        get_weather_button->setObjectName(QString::fromUtf8("get_weather_button"));

        horizontalLayout->addWidget(get_weather_button);


        verticalLayout->addLayout(horizontalLayout);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 450));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        weather_label = new QLabel(frame_2);
        weather_label->setObjectName(QString::fromUtf8("weather_label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        weather_label->setFont(font);

        horizontalLayout_4->addWidget(weather_label);

        icon_label = new QLabel(frame_2);
        icon_label->setObjectName(QString::fromUtf8("icon_label"));

        horizontalLayout_4->addWidget(icon_label);


        verticalLayout_2->addLayout(horizontalLayout_4);

        temp_label = new QLabel(frame_2);
        temp_label->setObjectName(QString::fromUtf8("temp_label"));

        verticalLayout_2->addWidget(temp_label);

        feels_label = new QLabel(frame_2);
        feels_label->setObjectName(QString::fromUtf8("feels_label"));

        verticalLayout_2->addWidget(feels_label);

        humidity_label = new QLabel(frame_2);
        humidity_label->setObjectName(QString::fromUtf8("humidity_label"));

        verticalLayout_2->addWidget(humidity_label);

        date_label = new QLabel(frame_2);
        date_label->setObjectName(QString::fromUtf8("date_label"));

        verticalLayout_2->addWidget(date_label);

        time_label = new QLabel(frame_2);
        time_label->setObjectName(QString::fromUtf8("time_label"));

        verticalLayout_2->addWidget(time_label);

        city_label = new QLabel(frame_2);
        city_label->setObjectName(QString::fromUtf8("city_label"));

        verticalLayout_2->addWidget(city_label);

        country_label = new QLabel(frame_2);
        country_label->setObjectName(QString::fromUtf8("country_label"));

        verticalLayout_2->addWidget(country_label);


        verticalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout_3->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(0, 500));
        frame_3->setMaximumSize(QSize(400, 16777215));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/ads.jpg")));
        label_4->setScaledContents(true);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(frame_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout->addWidget(frame);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "InstantWeather - Weather Data", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "City", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Country", nullptr));
        get_weather_button->setText(QCoreApplication::translate("MainWindow", "Get Weather", nullptr));
        weather_label->setText(QString());
        icon_label->setText(QString());
        temp_label->setText(QString());
        feels_label->setText(QString());
        humidity_label->setText(QString());
        date_label->setText(QCoreApplication::translate("MainWindow", "Today: ", nullptr));
        time_label->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        city_label->setText(QCoreApplication::translate("MainWindow", "City: ", nullptr));
        country_label->setText(QCoreApplication::translate("MainWindow", "Country", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
