/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "hfVolumeSet.h"
#include "hfheartrate.h"
#include "hfnoisedisplay.h"
#include "hftemperature.h"
#include "hfwetdisplay.h"
#include "maintitle.h"

QT_BEGIN_NAMESPACE

class Ui_hfMainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QFrame *oxygen_frame;
    QLabel *oxygen_icon;
    QLabel *oxygen_alert;
    QLabel *oxygen_title;
    QLabel *oxygen_point;
    QLabel *oxygen_normal;
    QLabel *oxygen_value0;
    QLabel *oxygen_lowest;
    QLabel *oxygen_dal;
    QLabel *oxygen_hal;
    QLabel *oxygen_heightest;
    QLabel *oxygen_value17;
    QLabel *oxygen_value23;
    QLabel *oxygen_value35;
    QLabel *oxygen_percent;
    QLabel *oxygen_alert_label1;
    QLabel *oxygen_alert_label2;
    QLabel *oxygen_alert_icon1;
    QLabel *oxygen_alert_icon2;
    QLabel *oxygen_value_2;
    QFrame *oxygen_value_frame;
    QLabel *oxygen_value_title;
    QLabel *oxygen_value;
    QFrame *heart_rate_frame;
    QLabel *heart_rate_icon;
    QLabel *heart_rate_title;
    QLabel *heart_rate_desc1;
    hfHeartRate *frame_6;
    hfHeartRate *frame_7;
    hfHeartRate *frame_8;
    hfHeartRate *frame_9;
    hfHeartRate *frame_11;
    hfHeartRate *frame_12;
    hfHeartRate *frame_13;
    hfHeartRate *frame_14;
    hfHeartRate *frame_15;
    hfHeartRate *frame_16;
    QLabel *heart_rate_set;
    QLabel *heart_rate_alert;
    QLabel *heart_rate_desc2;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QFrame *temperature_frame;
    QHBoxLayout *horizontalLayout_15;
    hfTemperature *temperature;
    QFrame *wet_frame;
    QHBoxLayout *horizontalLayout_14;
    hfWetDisplay *wet;
    QFrame *noise_frame;
    QHBoxLayout *horizontalLayout_16;
    hfNoiseDisplay *noise;
    QFrame *volume_set_frame;
    QHBoxLayout *horizontalLayout_17;
    hfVolumeSet *volume_set;
    hfMainTitle *main_title;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_13;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *people_icon;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *current_people;
    QLabel *last_people;
    QSpacerItem *verticalSpacer_2;
    QLabel *people_label;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *heart_icon;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_5;
    QLabel *heart_label;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_3;
    QLabel *waves_icon;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *waves_title;
    QLabel *waves_arrow;
    QSpacerItem *horizontalSpacer;
    QLabel *waves_label;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QMainWindow *hfMainWindow)
    {
        if (hfMainWindow->objectName().isEmpty())
            hfMainWindow->setObjectName(QStringLiteral("hfMainWindow"));
        hfMainWindow->resize(1920, 1080);
        hfMainWindow->setMinimumSize(QSize(1920, 1080));
        hfMainWindow->setMaximumSize(QSize(1920, 1080));
        centralWidget = new QWidget(hfMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setMaximumSize(QSize(16777215, 390));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        oxygen_frame = new QFrame(frame_2);
        oxygen_frame->setObjectName(QStringLiteral("oxygen_frame"));
        oxygen_frame->setMinimumSize(QSize(913, 0));
        oxygen_frame->setFrameShape(QFrame::StyledPanel);
        oxygen_frame->setFrameShadow(QFrame::Raised);
        oxygen_icon = new QLabel(oxygen_frame);
        oxygen_icon->setObjectName(QStringLiteral("oxygen_icon"));
        oxygen_icon->setGeometry(QRect(10, 20, 43, 43));
        oxygen_alert = new QLabel(oxygen_frame);
        oxygen_alert->setObjectName(QStringLiteral("oxygen_alert"));
        oxygen_alert->setGeometry(QRect(850, 20, 73, 47));
        oxygen_title = new QLabel(oxygen_frame);
        oxygen_title->setObjectName(QStringLiteral("oxygen_title"));
        oxygen_title->setGeometry(QRect(60, 30, 220, 24));
        oxygen_title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 20pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        oxygen_point = new QLabel(oxygen_frame);
        oxygen_point->setObjectName(QStringLiteral("oxygen_point"));
        oxygen_point->setGeometry(QRect(170, 80, 323, 220));
        oxygen_normal = new QLabel(oxygen_frame);
        oxygen_normal->setObjectName(QStringLiteral("oxygen_normal"));
        oxygen_normal->setGeometry(QRect(280, 50, 100, 20));
        oxygen_normal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\345\256\213\344\275\223\";"));
        oxygen_normal->setAlignment(Qt::AlignCenter);
        oxygen_value0 = new QLabel(oxygen_frame);
        oxygen_value0->setObjectName(QStringLiteral("oxygen_value0"));
        oxygen_value0->setGeometry(QRect(240, 280, 100, 20));
        oxygen_value0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        oxygen_lowest = new QLabel(oxygen_frame);
        oxygen_lowest->setObjectName(QStringLiteral("oxygen_lowest"));
        oxygen_lowest->setGeometry(QRect(70, 280, 100, 20));
        oxygen_lowest->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\345\256\213\344\275\223\";"));
        oxygen_dal = new QLabel(oxygen_frame);
        oxygen_dal->setObjectName(QStringLiteral("oxygen_dal"));
        oxygen_dal->setGeometry(QRect(130, 180, 100, 20));
        oxygen_dal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\345\256\213\344\275\223\";"));
        oxygen_hal = new QLabel(oxygen_frame);
        oxygen_hal->setObjectName(QStringLiteral("oxygen_hal"));
        oxygen_hal->setGeometry(QRect(510, 180, 100, 20));
        oxygen_hal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\345\256\213\344\275\223\";"));
        oxygen_heightest = new QLabel(oxygen_frame);
        oxygen_heightest->setObjectName(QStringLiteral("oxygen_heightest"));
        oxygen_heightest->setGeometry(QRect(510, 280, 120, 20));
        oxygen_heightest->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\345\256\213\344\275\223\";"));
        oxygen_value17 = new QLabel(oxygen_frame);
        oxygen_value17->setObjectName(QStringLiteral("oxygen_value17"));
        oxygen_value17->setGeometry(QRect(240, 210, 100, 20));
        oxygen_value17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        oxygen_value23 = new QLabel(oxygen_frame);
        oxygen_value23->setObjectName(QStringLiteral("oxygen_value23"));
        oxygen_value23->setGeometry(QRect(380, 210, 100, 20));
        oxygen_value23->setLayoutDirection(Qt::RightToLeft);
        oxygen_value23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        oxygen_value35 = new QLabel(oxygen_frame);
        oxygen_value35->setObjectName(QStringLiteral("oxygen_value35"));
        oxygen_value35->setGeometry(QRect(380, 280, 100, 20));
        oxygen_value35->setLayoutDirection(Qt::RightToLeft);
        oxygen_value35->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        oxygen_percent = new QLabel(oxygen_frame);
        oxygen_percent->setObjectName(QStringLiteral("oxygen_percent"));
        oxygen_percent->setGeometry(QRect(280, 280, 100, 20));
        oxygen_percent->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        oxygen_percent->setAlignment(Qt::AlignCenter);
        oxygen_alert_label1 = new QLabel(oxygen_frame);
        oxygen_alert_label1->setObjectName(QStringLiteral("oxygen_alert_label1"));
        oxygen_alert_label1->setGeometry(QRect(660, 100, 250, 20));
        oxygen_alert_label1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\345\256\213\344\275\223\";"));
        oxygen_alert_label2 = new QLabel(oxygen_frame);
        oxygen_alert_label2->setObjectName(QStringLiteral("oxygen_alert_label2"));
        oxygen_alert_label2->setGeometry(QRect(660, 170, 250, 20));
        oxygen_alert_label2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\345\256\213\344\275\223\";"));
        oxygen_alert_icon1 = new QLabel(oxygen_frame);
        oxygen_alert_icon1->setObjectName(QStringLiteral("oxygen_alert_icon1"));
        oxygen_alert_icon1->setGeometry(QRect(630, 100, 14, 14));
        oxygen_alert_icon2 = new QLabel(oxygen_frame);
        oxygen_alert_icon2->setObjectName(QStringLiteral("oxygen_alert_icon2"));
        oxygen_alert_icon2->setGeometry(QRect(630, 170, 14, 14));
        oxygen_value_2 = new QLabel(oxygen_frame);
        oxygen_value_2->setObjectName(QStringLiteral("oxygen_value_2"));
        oxygen_value_2->setGeometry(QRect(180, 320, 300, 20));
        oxygen_value_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\345\256\213\344\275\223\";"));
        oxygen_value_2->setAlignment(Qt::AlignCenter);
        oxygen_value_frame = new QFrame(oxygen_frame);
        oxygen_value_frame->setObjectName(QStringLiteral("oxygen_value_frame"));
        oxygen_value_frame->setGeometry(QRect(640, 220, 297, 57));
        oxygen_value_frame->setFrameShape(QFrame::StyledPanel);
        oxygen_value_frame->setFrameShadow(QFrame::Raised);
        oxygen_value_title = new QLabel(oxygen_value_frame);
        oxygen_value_title->setObjectName(QStringLiteral("oxygen_value_title"));
        oxygen_value_title->setGeometry(QRect(20, 20, 150, 20));
        oxygen_value_title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\345\256\213\344\275\223\";"));
        oxygen_value = new QLabel(oxygen_value_frame);
        oxygen_value->setObjectName(QStringLiteral("oxygen_value"));
        oxygen_value->setGeometry(QRect(170, 20, 120, 20));
        oxygen_value->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_4->addWidget(oxygen_frame);

        heart_rate_frame = new QFrame(frame_2);
        heart_rate_frame->setObjectName(QStringLiteral("heart_rate_frame"));
        heart_rate_frame->setMinimumSize(QSize(913, 0));
        heart_rate_frame->setFrameShape(QFrame::StyledPanel);
        heart_rate_frame->setFrameShadow(QFrame::Raised);
        heart_rate_icon = new QLabel(heart_rate_frame);
        heart_rate_icon->setObjectName(QStringLiteral("heart_rate_icon"));
        heart_rate_icon->setGeometry(QRect(10, 20, 43, 43));
        heart_rate_title = new QLabel(heart_rate_frame);
        heart_rate_title->setObjectName(QStringLiteral("heart_rate_title"));
        heart_rate_title->setGeometry(QRect(60, 30, 220, 24));
        heart_rate_title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 20pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        heart_rate_desc1 = new QLabel(heart_rate_frame);
        heart_rate_desc1->setObjectName(QStringLiteral("heart_rate_desc1"));
        heart_rate_desc1->setGeometry(QRect(170, 90, 250, 20));
        heart_rate_desc1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\256\213\344\275\223\";"));
        frame_6 = new hfHeartRate(heart_rate_frame);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(47, 130, 160, 98));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_7 = new hfHeartRate(heart_rate_frame);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(47, 250, 160, 98));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_8 = new hfHeartRate(heart_rate_frame);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(220, 130, 160, 98));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_9 = new hfHeartRate(heart_rate_frame);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setGeometry(QRect(220, 250, 160, 98));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        frame_11 = new hfHeartRate(heart_rate_frame);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setGeometry(QRect(390, 130, 160, 98));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        frame_12 = new hfHeartRate(heart_rate_frame);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setGeometry(QRect(390, 250, 160, 98));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        frame_13 = new hfHeartRate(heart_rate_frame);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setGeometry(QRect(570, 130, 160, 98));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        frame_14 = new hfHeartRate(heart_rate_frame);
        frame_14->setObjectName(QStringLiteral("frame_14"));
        frame_14->setGeometry(QRect(570, 250, 160, 98));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        frame_15 = new hfHeartRate(heart_rate_frame);
        frame_15->setObjectName(QStringLiteral("frame_15"));
        frame_15->setGeometry(QRect(760, 130, 160, 98));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        frame_16 = new hfHeartRate(heart_rate_frame);
        frame_16->setObjectName(QStringLiteral("frame_16"));
        frame_16->setGeometry(QRect(760, 250, 160, 98));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        heart_rate_set = new QLabel(heart_rate_frame);
        heart_rate_set->setObjectName(QStringLiteral("heart_rate_set"));
        heart_rate_set->setGeometry(QRect(880, 30, 35, 33));
        heart_rate_set->setMinimumSize(QSize(35, 33));
        heart_rate_set->setMaximumSize(QSize(35, 33));
        heart_rate_alert = new QLabel(heart_rate_frame);
        heart_rate_alert->setObjectName(QStringLiteral("heart_rate_alert"));
        heart_rate_alert->setGeometry(QRect(750, 90, 23, 20));
        heart_rate_desc2 = new QLabel(heart_rate_frame);
        heart_rate_desc2->setObjectName(QStringLiteral("heart_rate_desc2"));
        heart_rate_desc2->setGeometry(QRect(780, 90, 200, 20));
        heart_rate_desc2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_4->addWidget(heart_rate_frame);


        gridLayout->addWidget(frame_2, 4, 0, 1, 1);

        frame_10 = new QFrame(centralWidget);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setEnabled(true);
        frame_10->setMinimumSize(QSize(0, 0));
        frame_10->setMaximumSize(QSize(16777215, 334));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_10);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(15, -1, 15, -1);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(24);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        temperature_frame = new QFrame(frame_10);
        temperature_frame->setObjectName(QStringLiteral("temperature_frame"));
        temperature_frame->setMinimumSize(QSize(466, 0));
        temperature_frame->setMaximumSize(QSize(16777215, 645));
        temperature_frame->setFrameShape(QFrame::StyledPanel);
        temperature_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_15 = new QHBoxLayout(temperature_frame);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        temperature = new hfTemperature(temperature_frame);
        temperature->setObjectName(QStringLiteral("temperature"));

        horizontalLayout_15->addWidget(temperature);


        horizontalLayout_8->addWidget(temperature_frame);

        wet_frame = new QFrame(frame_10);
        wet_frame->setObjectName(QStringLiteral("wet_frame"));
        wet_frame->setMinimumSize(QSize(466, 0));
        wet_frame->setMaximumSize(QSize(16777215, 645));
        wet_frame->setFrameShape(QFrame::StyledPanel);
        wet_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_14 = new QHBoxLayout(wet_frame);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        wet = new hfWetDisplay(wet_frame);
        wet->setObjectName(QStringLiteral("wet"));

        horizontalLayout_14->addWidget(wet);


        horizontalLayout_8->addWidget(wet_frame);

        noise_frame = new QFrame(frame_10);
        noise_frame->setObjectName(QStringLiteral("noise_frame"));
        noise_frame->setMinimumSize(QSize(466, 0));
        noise_frame->setMaximumSize(QSize(16777215, 645));
        noise_frame->setFrameShape(QFrame::StyledPanel);
        noise_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_16 = new QHBoxLayout(noise_frame);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        noise = new hfNoiseDisplay(noise_frame);
        noise->setObjectName(QStringLiteral("noise"));

        horizontalLayout_16->addWidget(noise);


        horizontalLayout_8->addWidget(noise_frame);

        volume_set_frame = new QFrame(frame_10);
        volume_set_frame->setObjectName(QStringLiteral("volume_set_frame"));
        volume_set_frame->setMinimumSize(QSize(466, 0));
        volume_set_frame->setMaximumSize(QSize(16777215, 645));
        volume_set_frame->setFrameShape(QFrame::StyledPanel);
        volume_set_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(volume_set_frame);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        volume_set = new hfVolumeSet(volume_set_frame);
        volume_set->setObjectName(QStringLiteral("volume_set"));
        volume_set->setFrameShape(QFrame::StyledPanel);
        volume_set->setFrameShadow(QFrame::Raised);

        horizontalLayout_17->addWidget(volume_set);


        horizontalLayout_8->addWidget(volume_set_frame);


        horizontalLayout_7->addLayout(horizontalLayout_8);


        gridLayout->addWidget(frame_10, 3, 0, 1, 1);

        main_title = new hfMainTitle(centralWidget);
        main_title->setObjectName(QStringLiteral("main_title"));
        main_title->setEnabled(true);
        main_title->setMaximumSize(QSize(16777215, 108));

        gridLayout->addWidget(main_title, 0, 0, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMaximumSize(QSize(16777215, 160));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(15, 9, 15, 9);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(670, 0));
        frame_3->setMaximumSize(QSize(16777215, 16777215));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        people_icon = new QLabel(frame_3);
        people_icon->setObjectName(QStringLiteral("people_icon"));
        people_icon->setMinimumSize(QSize(112, 0));
        people_icon->setMaximumSize(QSize(112, 112));

        horizontalLayout->addWidget(people_icon);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        current_people = new QLabel(frame_3);
        current_people->setObjectName(QStringLiteral("current_people"));
        current_people->setMaximumSize(QSize(16777215, 24));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        current_people->setFont(font);
        current_people->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 20pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));

        verticalLayout->addWidget(current_people);

        last_people = new QLabel(frame_3);
        last_people->setObjectName(QStringLiteral("last_people"));
        last_people->setMaximumSize(QSize(16777215, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        last_people->setFont(font1);
        last_people->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));

        verticalLayout->addWidget(last_people);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 1);

        horizontalLayout->addLayout(verticalLayout);

        people_label = new QLabel(frame_3);
        people_label->setObjectName(QStringLiteral("people_label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\223\201\345\260\232\347\273\206\351\273\221\347\256\200\344\275\223"));
        font2.setPointSize(50);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        people_label->setFont(font2);
        people_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 50pt \"\346\226\271\346\255\243\345\223\201\345\260\232\347\273\206\351\273\221\347\256\200\344\275\223\";"));

        horizontalLayout->addWidget(people_label);


        horizontalLayout_5->addLayout(horizontalLayout);


        horizontalLayout_13->addWidget(frame_3);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setMinimumSize(QSize(0, 0));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_4);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        heart_icon = new QLabel(frame_4);
        heart_icon->setObjectName(QStringLiteral("heart_icon"));
        heart_icon->setMinimumSize(QSize(112, 0));
        heart_icon->setMaximumSize(QSize(112, 112));

        horizontalLayout_2->addWidget(heart_icon);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        label_7 = new QLabel(frame_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(16777215, 24));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 20pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(frame_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(16777215, 16));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));

        verticalLayout_4->addWidget(label_8);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 2);
        verticalLayout_4->setStretch(2, 2);
        verticalLayout_4->setStretch(3, 1);

        horizontalLayout_2->addLayout(verticalLayout_4);

        heart_label = new QLabel(frame_4);
        heart_label->setObjectName(QStringLiteral("heart_label"));
        heart_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 50pt \"\346\226\271\346\255\243\345\223\201\345\260\232\347\273\206\351\273\221\347\256\200\344\275\223\";"));

        horizontalLayout_2->addWidget(heart_label);


        horizontalLayout_12->addLayout(horizontalLayout_2);


        horizontalLayout_13->addWidget(frame_4);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setMinimumSize(QSize(0, 0));
        frame_5->setMaximumSize(QSize(600, 16777215));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_5);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        waves_icon = new QLabel(frame_5);
        waves_icon->setObjectName(QStringLiteral("waves_icon"));
        waves_icon->setMinimumSize(QSize(112, 112));
        waves_icon->setMaximumSize(QSize(112, 16777215));

        horizontalLayout_3->addWidget(waves_icon);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        waves_title = new QLabel(frame_5);
        waves_title->setObjectName(QStringLiteral("waves_title"));
        waves_title->setFont(font1);
        waves_title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));

        horizontalLayout_6->addWidget(waves_title);

        waves_arrow = new QLabel(frame_5);
        waves_arrow->setObjectName(QStringLiteral("waves_arrow"));
        waves_arrow->setMinimumSize(QSize(17, 11));
        waves_arrow->setMaximumSize(QSize(17, 11));

        horizontalLayout_6->addWidget(waves_arrow);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_6);

        waves_label = new QLabel(frame_5);
        waves_label->setObjectName(QStringLiteral("waves_label"));
        waves_label->setFont(font2);
        waves_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 50pt \"\346\226\271\346\255\243\345\223\201\345\260\232\347\273\206\351\273\221\347\256\200\344\275\223\";"));

        verticalLayout_2->addWidget(waves_label);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        horizontalLayout_11->addLayout(horizontalLayout_3);


        horizontalLayout_13->addWidget(frame_5);


        horizontalLayout_10->addLayout(horizontalLayout_13);


        gridLayout->addWidget(frame, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        hfMainWindow->setCentralWidget(centralWidget);

        retranslateUi(hfMainWindow);

        QMetaObject::connectSlotsByName(hfMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *hfMainWindow)
    {
        hfMainWindow->setWindowTitle(QApplication::translate("hfMainWindow", "MainWindow", Q_NULLPTR));
        oxygen_icon->setText(QString());
        oxygen_alert->setText(QString());
        oxygen_title->setText(QApplication::translate("hfMainWindow", "\346\260\247\346\265\223\345\272\246\346\212\245\350\255\246\351\230\210\345\200\274", Q_NULLPTR));
        oxygen_point->setText(QString());
        oxygen_normal->setText(QApplication::translate("hfMainWindow", "Normal", Q_NULLPTR));
        oxygen_value0->setText(QApplication::translate("hfMainWindow", "0%", Q_NULLPTR));
        oxygen_lowest->setText(QApplication::translate("hfMainWindow", "Lowest", Q_NULLPTR));
        oxygen_dal->setText(QApplication::translate("hfMainWindow", "DAL", Q_NULLPTR));
        oxygen_hal->setText(QApplication::translate("hfMainWindow", "HAL", Q_NULLPTR));
        oxygen_heightest->setText(QApplication::translate("hfMainWindow", "Heightest", Q_NULLPTR));
        oxygen_value17->setText(QApplication::translate("hfMainWindow", "17.5%", Q_NULLPTR));
        oxygen_value23->setText(QApplication::translate("hfMainWindow", "23.5%", Q_NULLPTR));
        oxygen_value35->setText(QApplication::translate("hfMainWindow", "35%", Q_NULLPTR));
        oxygen_percent->setText(QApplication::translate("hfMainWindow", "20.9%", Q_NULLPTR));
        oxygen_alert_label1->setText(QApplication::translate("hfMainWindow", "DAL<19.5%\346\212\245\350\255\246\345\200\274", Q_NULLPTR));
        oxygen_alert_label2->setText(QApplication::translate("hfMainWindow", "HAL>23.5%\346\212\245\350\255\246\345\200\274", Q_NULLPTR));
        oxygen_alert_icon1->setText(QString());
        oxygen_alert_icon2->setText(QString());
        oxygen_value_2->setText(QApplication::translate("hfMainWindow", "Healthy Embodiment", Q_NULLPTR));
        oxygen_value_title->setText(QApplication::translate("hfMainWindow", "\346\260\247\346\265\223\345\272\246\351\230\210\345\200\274:", Q_NULLPTR));
        oxygen_value->setText(QApplication::translate("hfMainWindow", "20", Q_NULLPTR));
        heart_rate_icon->setText(QString());
        heart_rate_title->setText(QApplication::translate("hfMainWindow", "\345\277\203\347\216\207\347\233\221\346\265\213\345\233\276", Q_NULLPTR));
        heart_rate_desc1->setText(QApplication::translate("hfMainWindow", "ECG data /BPM", Q_NULLPTR));
        heart_rate_set->setText(QString());
        heart_rate_alert->setText(QString());
        heart_rate_desc2->setText(QApplication::translate("hfMainWindow", "\344\270\272\345\274\202\345\270\270\347\212\266\346\200\201\345\277\203\347\216\207", Q_NULLPTR));
        people_icon->setText(QString());
        current_people->setText(QApplication::translate("hfMainWindow", "    \346\234\254\346\254\241\350\256\255\347\273\203\344\272\272\346\225\260:", Q_NULLPTR));
        last_people->setText(QApplication::translate("hfMainWindow", "        \344\270\212\346\254\241\350\256\255\347\273\203\344\272\272\346\225\260: 100", Q_NULLPTR));
        people_label->setText(QApplication::translate("hfMainWindow", "100", Q_NULLPTR));
        heart_icon->setText(QString());
        label_7->setText(QApplication::translate("hfMainWindow", "    \346\234\254\346\254\241\350\256\255\347\273\203\345\277\203\347\216\207\345\274\202\345\270\270\344\272\272\346\225\260:  ", Q_NULLPTR));
        label_8->setText(QApplication::translate("hfMainWindow", "       \344\270\212\346\254\241\350\256\255\347\273\203\345\277\203\347\216\207\345\274\202\345\270\270\344\272\272\346\225\260: 100", Q_NULLPTR));
        heart_label->setText(QApplication::translate("hfMainWindow", "1", Q_NULLPTR));
        waves_icon->setText(QString());
        waves_title->setText(QApplication::translate("hfMainWindow", "\351\243\216\346\265\252\347\255\211\347\272\247\357\274\232", Q_NULLPTR));
        waves_arrow->setText(QString());
        waves_label->setText(QApplication::translate("hfMainWindow", "1 2 3 4 5 6", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hfMainWindow: public Ui_hfMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
