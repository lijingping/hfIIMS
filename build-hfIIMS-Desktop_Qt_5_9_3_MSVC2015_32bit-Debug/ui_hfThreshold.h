/********************************************************************************
** Form generated from reading UI file 'hfThreshold.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HFTHRESHOLD_H
#define UI_HFTHRESHOLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hfThreshold
{
public:
    QFrame *threshold_frame;
    QLabel *threshold_title;
    QLabel *threshold_title_2;
    QLabel *threshold_unit;
    QLabel *threshold_title_4;
    QLineEdit *threshold_lineEdit;

    void setupUi(QWidget *hfThreshold)
    {
        if (hfThreshold->objectName().isEmpty())
            hfThreshold->setObjectName(QStringLiteral("hfThreshold"));
        hfThreshold->resize(135, 116);
        threshold_frame = new QFrame(hfThreshold);
        threshold_frame->setObjectName(QStringLiteral("threshold_frame"));
        threshold_frame->setGeometry(QRect(0, 0, 135, 116));
        threshold_frame->setStyleSheet(QStringLiteral("border-image: url(:/img/threshold.png);"));
        threshold_frame->setFrameShape(QFrame::StyledPanel);
        threshold_frame->setFrameShadow(QFrame::Raised);
        threshold_title = new QLabel(hfThreshold);
        threshold_title->setObjectName(QStringLiteral("threshold_title"));
        threshold_title->setGeometry(QRect(10, 15, 80, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        threshold_title->setFont(font);
        threshold_title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
""));
        threshold_title->setOpenExternalLinks(false);
        threshold_title_2 = new QLabel(hfThreshold);
        threshold_title_2->setObjectName(QStringLiteral("threshold_title_2"));
        threshold_title_2->setGeometry(QRect(10, 50, 80, 20));
        threshold_title_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        threshold_unit = new QLabel(hfThreshold);
        threshold_unit->setObjectName(QStringLiteral("threshold_unit"));
        threshold_unit->setGeometry(QRect(70, 50, 80, 20));
        threshold_unit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        threshold_title_4 = new QLabel(hfThreshold);
        threshold_title_4->setObjectName(QStringLiteral("threshold_title_4"));
        threshold_title_4->setGeometry(QRect(10, 75, 80, 20));
        threshold_title_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        threshold_lineEdit = new QLineEdit(hfThreshold);
        threshold_lineEdit->setObjectName(QStringLiteral("threshold_lineEdit"));
        threshold_lineEdit->setGeometry(QRect(70, 75, 50, 20));
        threshold_lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border:0px;\n"
"font: 10pt \"\346\226\271\346\255\243\345\223\201\345\260\232\347\273\206\351\273\221\347\256\200\344\275\223\";"));

        retranslateUi(hfThreshold);

        QMetaObject::connectSlotsByName(hfThreshold);
    } // setupUi

    void retranslateUi(QWidget *hfThreshold)
    {
        hfThreshold->setWindowTitle(QApplication::translate("hfThreshold", "Form", Q_NULLPTR));
        threshold_title->setText(QApplication::translate("hfThreshold", "\350\256\276\347\275\256", Q_NULLPTR));
        threshold_title_2->setText(QApplication::translate("hfThreshold", "\351\230\210\345\200\274\345\215\225\344\275\215", Q_NULLPTR));
        threshold_unit->setText(QApplication::translate("hfThreshold", "\342\204\203", Q_NULLPTR));
        threshold_title_4->setText(QApplication::translate("hfThreshold", "\351\230\210\345\200\274\345\215\225\344\275\215", Q_NULLPTR));
        threshold_lineEdit->setText(QApplication::translate("hfThreshold", "20", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hfThreshold: public Ui_hfThreshold {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFTHRESHOLD_H
