/********************************************************************************
** Form generated from reading UI file 'hfModifyUser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HFMODIFYUSER_H
#define UI_HFMODIFYUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hfModifyUser
{
public:
    QLabel *modify_title_2;
    QLineEdit *modify_username;
    QFrame *modify_frame;
    QLabel *modify_title_3;
    QLineEdit *modify_age;
    QLabel *modify_title_4;
    QLineEdit *modify_work;
    QLabel *modify_title_5;
    QLineEdit *modify_phone;
    QLabel *modify_title_6;
    QTextEdit *modify_desc_textEdit;
    QPushButton *modify_save;

    void setupUi(QWidget *hfModifyUser)
    {
        if (hfModifyUser->objectName().isEmpty())
            hfModifyUser->setObjectName(QStringLiteral("hfModifyUser"));
        hfModifyUser->resize(233, 295);
        hfModifyUser->setStyleSheet(QStringLiteral(""));
        modify_title_2 = new QLabel(hfModifyUser);
        modify_title_2->setObjectName(QStringLiteral("modify_title_2"));
        modify_title_2->setGeometry(QRect(20, 40, 80, 20));
        modify_title_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        modify_username = new QLineEdit(hfModifyUser);
        modify_username->setObjectName(QStringLiteral("modify_username"));
        modify_username->setGeometry(QRect(90, 40, 260, 21));
        modify_username->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border:0px;\n"
""));
        modify_frame = new QFrame(hfModifyUser);
        modify_frame->setObjectName(QStringLiteral("modify_frame"));
        modify_frame->setGeometry(QRect(0, 0, 233, 295));
        modify_frame->setStyleSheet(QStringLiteral("image: url(:/img/user_frame.png);"));
        modify_frame->setFrameShape(QFrame::StyledPanel);
        modify_frame->setFrameShadow(QFrame::Raised);
        modify_title_3 = new QLabel(hfModifyUser);
        modify_title_3->setObjectName(QStringLiteral("modify_title_3"));
        modify_title_3->setGeometry(QRect(20, 67, 80, 20));
        modify_title_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        modify_age = new QLineEdit(hfModifyUser);
        modify_age->setObjectName(QStringLiteral("modify_age"));
        modify_age->setGeometry(QRect(70, 67, 300, 20));
        modify_age->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border:0px;\n"
""));
        modify_title_4 = new QLabel(hfModifyUser);
        modify_title_4->setObjectName(QStringLiteral("modify_title_4"));
        modify_title_4->setGeometry(QRect(20, 94, 80, 20));
        modify_title_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        modify_work = new QLineEdit(hfModifyUser);
        modify_work->setObjectName(QStringLiteral("modify_work"));
        modify_work->setGeometry(QRect(70, 94, 300, 20));
        modify_work->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border:0px;\n"
""));
        modify_title_5 = new QLabel(hfModifyUser);
        modify_title_5->setObjectName(QStringLiteral("modify_title_5"));
        modify_title_5->setGeometry(QRect(20, 121, 80, 20));
        modify_title_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        modify_phone = new QLineEdit(hfModifyUser);
        modify_phone->setObjectName(QStringLiteral("modify_phone"));
        modify_phone->setGeometry(QRect(90, 121, 260, 20));
        modify_phone->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border:0px;\n"
""));
        modify_title_6 = new QLabel(hfModifyUser);
        modify_title_6->setObjectName(QStringLiteral("modify_title_6"));
        modify_title_6->setGeometry(QRect(20, 146, 80, 20));
        modify_title_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        modify_desc_textEdit = new QTextEdit(hfModifyUser);
        modify_desc_textEdit->setObjectName(QStringLiteral("modify_desc_textEdit"));
        modify_desc_textEdit->setGeometry(QRect(17, 170, 200, 65));
        modify_desc_textEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"border-image: url(:/img/user_desc.png);"));
        modify_save = new QPushButton(hfModifyUser);
        modify_save->setObjectName(QStringLiteral("modify_save"));
        modify_save->setGeometry(QRect(60, 240, 110, 34));
        modify_save->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"border-image: url(:/logo/logo_btn.png);\n"
"color: rgb(255, 255, 255);"));
        modify_frame->raise();
        modify_title_2->raise();
        modify_username->raise();
        modify_title_3->raise();
        modify_age->raise();
        modify_title_4->raise();
        modify_work->raise();
        modify_title_5->raise();
        modify_phone->raise();
        modify_title_6->raise();
        modify_desc_textEdit->raise();
        modify_save->raise();

        retranslateUi(hfModifyUser);

        QMetaObject::connectSlotsByName(hfModifyUser);
    } // setupUi

    void retranslateUi(QWidget *hfModifyUser)
    {
        hfModifyUser->setWindowTitle(QApplication::translate("hfModifyUser", "Form", Q_NULLPTR));
        modify_title_2->setText(QApplication::translate("hfModifyUser", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        modify_username->setText(QString());
        modify_title_3->setText(QApplication::translate("hfModifyUser", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        modify_age->setText(QString());
        modify_title_4->setText(QApplication::translate("hfModifyUser", "\350\201\214\344\270\232\357\274\232", Q_NULLPTR));
        modify_work->setText(QString());
        modify_title_5->setText(QApplication::translate("hfModifyUser", "\350\201\224\347\263\273\346\226\271\345\274\217\357\274\232", Q_NULLPTR));
        modify_phone->setText(QString());
        modify_title_6->setText(QApplication::translate("hfModifyUser", "\344\270\252\344\272\272\344\273\213\347\273\215\357\274\232", Q_NULLPTR));
        modify_save->setText(QApplication::translate("hfModifyUser", "\344\277\235\345\255\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hfModifyUser: public Ui_hfModifyUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFMODIFYUSER_H
