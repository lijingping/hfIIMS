/********************************************************************************
** Form generated from reading UI file 'hfHeartRate.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HFHEARTRATE_H
#define UI_HFHEARTRATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_hfHeartRate
{
public:
    QLabel *user_name;
    QLabel *rate_value;
    QLabel *heart_rate_bpm;
    QLabel *heart_rate_alert;
    QFrame *heart_rate_mask;
    QFrame *heart_rate_frame;
    QtCharts::QChartView *heart_rate_chartView;

    void setupUi(QFrame *hfHeartRate)
    {
        if (hfHeartRate->objectName().isEmpty())
            hfHeartRate->setObjectName(QStringLiteral("hfHeartRate"));
        hfHeartRate->resize(160, 98);
        hfHeartRate->setStyleSheet(QStringLiteral(""));
        hfHeartRate->setFrameShape(QFrame::StyledPanel);
        hfHeartRate->setFrameShadow(QFrame::Raised);
        user_name = new QLabel(hfHeartRate);
        user_name->setObjectName(QStringLiteral("user_name"));
        user_name->setGeometry(QRect(10, 2, 160, 12));
        user_name->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"color:rgb(255, 255, 255);"));
        rate_value = new QLabel(hfHeartRate);
        rate_value->setObjectName(QStringLiteral("rate_value"));
        rate_value->setGeometry(QRect(90, 20, 54, 35));
        rate_value->setStyleSheet(QString::fromUtf8("color:rgb(231, 97, 99);\n"
"font: 20pt \"\346\226\271\346\255\243\345\223\201\345\260\232\347\273\206\351\273\221\347\256\200\344\275\223\";"));
        rate_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        heart_rate_bpm = new QLabel(hfHeartRate);
        heart_rate_bpm->setObjectName(QStringLiteral("heart_rate_bpm"));
        heart_rate_bpm->setGeometry(QRect(90, 60, 50, 20));
        heart_rate_bpm->setLayoutDirection(Qt::LeftToRight);
        heart_rate_bpm->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"color:rgb(255, 255, 255);"));
        heart_rate_bpm->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        heart_rate_alert = new QLabel(hfHeartRate);
        heart_rate_alert->setObjectName(QStringLiteral("heart_rate_alert"));
        heart_rate_alert->setGeometry(QRect(50, 30, 53, 40));
        heart_rate_alert->setStyleSheet(QStringLiteral("border-image: url(:/img/heart_rate_alert.png);"));
        heart_rate_mask = new QFrame(hfHeartRate);
        heart_rate_mask->setObjectName(QStringLiteral("heart_rate_mask"));
        heart_rate_mask->setGeometry(QRect(0, 0, 160, 98));
        heart_rate_mask->setStyleSheet(QStringLiteral("border-image: url(:/img/heart_rate_mask.png);"));
        heart_rate_mask->setFrameShape(QFrame::StyledPanel);
        heart_rate_mask->setFrameShadow(QFrame::Raised);
        heart_rate_frame = new QFrame(hfHeartRate);
        heart_rate_frame->setObjectName(QStringLiteral("heart_rate_frame"));
        heart_rate_frame->setGeometry(QRect(0, 0, 160, 98));
        heart_rate_frame->setStyleSheet(QStringLiteral("border-image: url(:/img/heart_rate_frame.png);"));
        heart_rate_frame->setFrameShape(QFrame::StyledPanel);
        heart_rate_frame->setFrameShadow(QFrame::Raised);
        heart_rate_chartView = new QtCharts::QChartView(hfHeartRate);
        heart_rate_chartView->setObjectName(QStringLiteral("heart_rate_chartView"));
        heart_rate_chartView->setGeometry(QRect(0, 20, 160, 58));
        heart_rate_frame->raise();
        user_name->raise();
        heart_rate_chartView->raise();
        heart_rate_bpm->raise();
        rate_value->raise();
        heart_rate_alert->raise();
        heart_rate_mask->raise();

        retranslateUi(hfHeartRate);

        QMetaObject::connectSlotsByName(hfHeartRate);
    } // setupUi

    void retranslateUi(QFrame *hfHeartRate)
    {
        hfHeartRate->setWindowTitle(QApplication::translate("hfHeartRate", "Frame", Q_NULLPTR));
        user_name->setText(QApplication::translate("hfHeartRate", "User Name", Q_NULLPTR));
        rate_value->setText(QApplication::translate("hfHeartRate", "180", Q_NULLPTR));
        heart_rate_bpm->setText(QApplication::translate("hfHeartRate", "BPM", Q_NULLPTR));
        heart_rate_alert->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class hfHeartRate: public Ui_hfHeartRate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFHEARTRATE_H
