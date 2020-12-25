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
    hfMainTitle *main_title;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    hfTemperature *temperature;
    hfWetDisplay *wet;
    hfNoiseDisplay *noise;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QWidget *heartrate;
    QWidget *oxygen;
    QFrame *control_panel;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *people_icon;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *current_people;
    QLabel *last_people;
    QSpacerItem *verticalSpacer_2;
    QLabel *people_label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *heart_icon;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_5;
    QLabel *heart_label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *waves_icon;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *waves_title;
    QLabel *waves_arrow;
    QSpacerItem *horizontalSpacer;
    QLabel *waves_label;

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
        main_title = new hfMainTitle(centralWidget);
        main_title->setObjectName(QStringLiteral("main_title"));
        main_title->setEnabled(true);
        main_title->setMaximumSize(QSize(16777215, 108));

        gridLayout->addWidget(main_title, 0, 0, 1, 1);

        frame_10 = new QFrame(centralWidget);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setEnabled(true);
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_10);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        temperature = new hfTemperature(frame_10);
        temperature->setObjectName(QStringLiteral("temperature"));

        horizontalLayout_8->addWidget(temperature);

        wet = new hfWetDisplay(frame_10);
        wet->setObjectName(QStringLiteral("wet"));

        horizontalLayout_8->addWidget(wet);

        noise = new hfNoiseDisplay(frame_10);
        noise->setObjectName(QStringLiteral("noise"));

        horizontalLayout_8->addWidget(noise);

        horizontalLayout_8->setStretch(0, 3);
        horizontalLayout_8->setStretch(1, 3);
        horizontalLayout_8->setStretch(2, 5);

        horizontalLayout_9->addLayout(horizontalLayout_8);


        gridLayout->addWidget(frame_10, 2, 0, 1, 1);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        heartrate = new QWidget(frame_2);
        heartrate->setObjectName(QStringLiteral("heartrate"));

        horizontalLayout_4->addWidget(heartrate);

        oxygen = new QWidget(frame_2);
        oxygen->setObjectName(QStringLiteral("oxygen"));

        horizontalLayout_4->addWidget(oxygen);

        horizontalLayout_4->setStretch(0, 6);
        horizontalLayout_4->setStretch(1, 5);

        gridLayout->addWidget(frame_2, 3, 0, 1, 1);

        control_panel = new QFrame(centralWidget);
        control_panel->setObjectName(QStringLiteral("control_panel"));
        control_panel->setFrameShape(QFrame::StyledPanel);
        control_panel->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(control_panel);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        frame = new QFrame(control_panel);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMaximumSize(QSize(16777215, 160));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        people_icon = new QLabel(frame);
        people_icon->setObjectName(QStringLiteral("people_icon"));
        people_icon->setMinimumSize(QSize(112, 0));
        people_icon->setMaximumSize(QSize(112, 112));

        horizontalLayout->addWidget(people_icon);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        current_people = new QLabel(frame);
        current_people->setObjectName(QStringLiteral("current_people"));
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

        last_people = new QLabel(frame);
        last_people->setObjectName(QStringLiteral("last_people"));
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

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 1);

        horizontalLayout->addLayout(verticalLayout);

        people_label = new QLabel(frame);
        people_label->setObjectName(QStringLiteral("people_label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\223\201\345\260\232\347\273\206\351\273\221\347\256\200\344\275\223"));
        font2.setPointSize(70);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        people_label->setFont(font2);
        people_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 70pt \"\346\226\271\346\255\243\345\223\201\345\260\232\347\273\206\351\273\221\347\256\200\344\275\223\";"));

        horizontalLayout->addWidget(people_label);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        heart_icon = new QLabel(frame);
        heart_icon->setObjectName(QStringLiteral("heart_icon"));
        heart_icon->setMinimumSize(QSize(112, 0));
        heart_icon->setMaximumSize(QSize(112, 112));

        horizontalLayout_2->addWidget(heart_icon);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 20pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
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

        heart_label = new QLabel(frame);
        heart_label->setObjectName(QStringLiteral("heart_label"));
        heart_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 70pt \"\346\226\271\346\255\243\345\223\201\345\260\232\347\273\206\351\273\221\347\256\200\344\275\223\";"));

        horizontalLayout_2->addWidget(heart_label);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        waves_icon = new QLabel(frame);
        waves_icon->setObjectName(QStringLiteral("waves_icon"));
        waves_icon->setMinimumSize(QSize(112, 112));
        waves_icon->setMaximumSize(QSize(112, 16777215));

        horizontalLayout_3->addWidget(waves_icon);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        waves_title = new QLabel(frame);
        waves_title->setObjectName(QStringLiteral("waves_title"));
        waves_title->setFont(font1);
        waves_title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));

        horizontalLayout_6->addWidget(waves_title);

        waves_arrow = new QLabel(frame);
        waves_arrow->setObjectName(QStringLiteral("waves_arrow"));
        waves_arrow->setMinimumSize(QSize(17, 11));
        waves_arrow->setMaximumSize(QSize(17, 11));

        horizontalLayout_6->addWidget(waves_arrow);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_6);

        waves_label = new QLabel(frame);
        waves_label->setObjectName(QStringLiteral("waves_label"));
        waves_label->setFont(font2);
        waves_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 70pt \"\346\226\271\346\255\243\345\223\201\345\260\232\347\273\206\351\273\221\347\256\200\344\275\223\";"));

        verticalLayout_2->addWidget(waves_label);


        horizontalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        gridLayout_4->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        horizontalLayout_7->addWidget(frame);


        gridLayout->addWidget(control_panel, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        hfMainWindow->setCentralWidget(centralWidget);

        retranslateUi(hfMainWindow);

        QMetaObject::connectSlotsByName(hfMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *hfMainWindow)
    {
        hfMainWindow->setWindowTitle(QApplication::translate("hfMainWindow", "MainWindow", Q_NULLPTR));
        people_icon->setText(QString());
        current_people->setText(QApplication::translate("hfMainWindow", "\346\234\254\346\254\241\350\256\255\347\273\203\344\272\272\346\225\260:", Q_NULLPTR));
        last_people->setText(QApplication::translate("hfMainWindow", "\344\270\212\346\254\241\350\256\255\347\273\203\344\272\272\346\225\260: 100", Q_NULLPTR));
        people_label->setText(QApplication::translate("hfMainWindow", "100", Q_NULLPTR));
        heart_icon->setText(QString());
        label_7->setText(QApplication::translate("hfMainWindow", "\346\234\254\346\254\241\350\256\255\347\273\203\345\277\203\347\216\207\345\274\202\345\270\270\344\272\272\346\225\260:", Q_NULLPTR));
        label_8->setText(QApplication::translate("hfMainWindow", "\344\270\212\346\254\241\350\256\255\347\273\203\345\277\203\347\216\207\345\274\202\345\270\270\344\272\272\346\225\260: 100", Q_NULLPTR));
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
