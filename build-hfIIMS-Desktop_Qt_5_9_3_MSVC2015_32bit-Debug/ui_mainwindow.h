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
    QFrame *control_panel;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_10;
    QFrame *frame_7;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_11;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_9;
    hfMainTitle *main_title;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    hfTemperature *temperature;
    hfWetDisplay *wet;
    hfNoiseDisplay *noise;
    QSpacerItem *verticalSpacer;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QWidget *heartrate;
    QWidget *oxygen;

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
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_6);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_5 = new QLabel(frame_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(frame_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 1);

        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_5->addWidget(frame_6);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        horizontalLayout_5->addWidget(label_10);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);
        horizontalLayout_5->setStretch(2, 1);

        gridLayout_4->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(frame);

        frame_7 = new QFrame(control_panel);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_7);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(frame_7);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_8);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        label_7 = new QLabel(frame_8);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(frame_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        verticalLayout_4->addWidget(label_8);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 2);
        verticalLayout_4->setStretch(2, 2);
        verticalLayout_4->setStretch(3, 1);

        verticalLayout_3->addLayout(verticalLayout_4);


        horizontalLayout_6->addWidget(frame_8);

        label_11 = new QLabel(frame_7);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_6->addWidget(label_11);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);
        horizontalLayout_6->setStretch(2, 1);

        gridLayout_5->addLayout(horizontalLayout_6, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(frame_7);

        frame_9 = new QFrame(control_panel);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_9);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frame_9);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(frame_9);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        label_9 = new QLabel(frame_9);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        horizontalLayout->addWidget(label_9);


        horizontalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_7->addWidget(frame_9);

        horizontalLayout_7->setStretch(0, 4);
        horizontalLayout_7->setStretch(1, 4);
        horizontalLayout_7->setStretch(2, 4);

        gridLayout->addWidget(control_panel, 1, 0, 1, 1);

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

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

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

        gridLayout->setRowStretch(0, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        hfMainWindow->setCentralWidget(centralWidget);

        retranslateUi(hfMainWindow);

        QMetaObject::connectSlotsByName(hfMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *hfMainWindow)
    {
        hfMainWindow->setWindowTitle(QApplication::translate("hfMainWindow", "MainWindow", Q_NULLPTR));
        label_3->setText(QString());
        label_5->setText(QApplication::translate("hfMainWindow", "\346\234\254\346\254\241\350\256\255\347\273\203\344\272\272\346\225\260:", Q_NULLPTR));
        label_6->setText(QApplication::translate("hfMainWindow", "\344\270\212\346\254\241\350\256\255\347\273\203\344\272\272\346\225\260: 100", Q_NULLPTR));
        label_10->setText(QApplication::translate("hfMainWindow", "100", Q_NULLPTR));
        label_4->setText(QString());
        label_7->setText(QApplication::translate("hfMainWindow", "\346\234\254\346\254\241\350\256\255\347\273\203\345\277\203\347\216\207\345\274\202\345\270\270\344\272\272\346\225\260:", Q_NULLPTR));
        label_8->setText(QApplication::translate("hfMainWindow", "\344\270\212\346\254\241\350\256\255\347\273\203\345\277\203\347\216\207\345\274\202\345\270\270\344\272\272\346\225\260: 100", Q_NULLPTR));
        label_11->setText(QApplication::translate("hfMainWindow", "100", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("hfMainWindow", "\351\243\216\346\265\252\347\255\211\347\272\247\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("hfMainWindow", "1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hfMainWindow: public Ui_hfMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
