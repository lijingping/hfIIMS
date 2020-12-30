/********************************************************************************
** Form generated from reading UI file 'hfLogo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HFLOGO_H
#define UI_HFLOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hfLogo
{
public:
    QFrame *logo_frame;
    QPushButton *logo_touch_pushButton;
    QLabel *logo_title;
    QLabel *logo_input_frame;
    QLabel *logo_input_frame_2;
    QFrame *logo_user_frame;
    QFrame *logo_password_frame;
    QLabel *oxygen_value_title;
    QLineEdit *logo_password;
    QLineEdit *logo_username;
    QLabel *oxygen_value_title_2;
    QPushButton *logo_modify;
    QPushButton *logo_pushButton;

    void setupUi(QWidget *hfLogo)
    {
        if (hfLogo->objectName().isEmpty())
            hfLogo->setObjectName(QStringLiteral("hfLogo"));
        hfLogo->resize(1920, 1080);
        hfLogo->setMinimumSize(QSize(1920, 1080));
        hfLogo->setStyleSheet(QStringLiteral(""));
        logo_frame = new QFrame(hfLogo);
        logo_frame->setObjectName(QStringLiteral("logo_frame"));
        logo_frame->setGeometry(QRect(621, 304, 678, 472));
        logo_frame->setStyleSheet(QStringLiteral("image: url(:/logo/logo_bg.png);"));
        logo_frame->setFrameShape(QFrame::StyledPanel);
        logo_frame->setFrameShadow(QFrame::Raised);
        logo_touch_pushButton = new QPushButton(hfLogo);
        logo_touch_pushButton->setObjectName(QStringLiteral("logo_touch_pushButton"));
        logo_touch_pushButton->setGeometry(QRect(0, 0, 1920, 1080));
        logo_touch_pushButton->setMinimumSize(QSize(1920, 1080));
        logo_touch_pushButton->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 180);"));
        logo_title = new QLabel(hfLogo);
        logo_title->setObjectName(QStringLiteral("logo_title"));
        logo_title->setGeometry(QRect(850, 340, 200, 60));
        logo_title->setStyleSheet(QString::fromUtf8("font: 30pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"color:rgb(255, 255, 255)"));
        logo_title->setAlignment(Qt::AlignCenter);
        logo_input_frame = new QLabel(hfLogo);
        logo_input_frame->setObjectName(QStringLiteral("logo_input_frame"));
        logo_input_frame->setGeometry(QRect(740, 450, 427, 59));
        logo_input_frame->setStyleSheet(QStringLiteral("border-image: url(:/logo/logo_input_frame.png);"));
        logo_input_frame_2 = new QLabel(hfLogo);
        logo_input_frame_2->setObjectName(QStringLiteral("logo_input_frame_2"));
        logo_input_frame_2->setGeometry(QRect(740, 550, 427, 59));
        logo_input_frame_2->setStyleSheet(QStringLiteral("border-image: url(:/logo/logo_input_frame.png);"));
        logo_user_frame = new QFrame(hfLogo);
        logo_user_frame->setObjectName(QStringLiteral("logo_user_frame"));
        logo_user_frame->setGeometry(QRect(760, 460, 38, 36));
        logo_user_frame->setStyleSheet(QStringLiteral("image: url(:/logo/logo_name.png);"));
        logo_user_frame->setFrameShape(QFrame::StyledPanel);
        logo_user_frame->setFrameShadow(QFrame::Raised);
        logo_password_frame = new QFrame(hfLogo);
        logo_password_frame->setObjectName(QStringLiteral("logo_password_frame"));
        logo_password_frame->setGeometry(QRect(760, 560, 28, 40));
        logo_password_frame->setStyleSheet(QStringLiteral("image: url(:/logo/logo_password.png);"));
        logo_password_frame->setFrameShape(QFrame::StyledPanel);
        logo_password_frame->setFrameShadow(QFrame::Raised);
        oxygen_value_title = new QLabel(hfLogo);
        oxygen_value_title->setObjectName(QStringLiteral("oxygen_value_title"));
        oxygen_value_title->setGeometry(QRect(820, 570, 80, 20));
        oxygen_value_title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        logo_password = new QLineEdit(hfLogo);
        logo_password->setObjectName(QStringLiteral("logo_password"));
        logo_password->setGeometry(QRect(890, 558, 260, 40));
        logo_password->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border:0px;"));
        logo_password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        logo_password->setEchoMode(QLineEdit::Password);
        logo_username = new QLineEdit(hfLogo);
        logo_username->setObjectName(QStringLiteral("logo_username"));
        logo_username->setGeometry(QRect(890, 458, 260, 40));
        logo_username->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border:0px;\n"
""));
        oxygen_value_title_2 = new QLabel(hfLogo);
        oxygen_value_title_2->setObjectName(QStringLiteral("oxygen_value_title_2"));
        oxygen_value_title_2->setGeometry(QRect(810, 470, 80, 20));
        oxygen_value_title_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        logo_modify = new QPushButton(hfLogo);
        logo_modify->setObjectName(QStringLiteral("logo_modify"));
        logo_modify->setGeometry(QRect(1015, 670, 142, 34));
        logo_modify->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"border-image: url(:/logo/logo_btn.png);\n"
"color: rgb(255, 255, 255);"));
        logo_pushButton = new QPushButton(hfLogo);
        logo_pushButton->setObjectName(QStringLiteral("logo_pushButton"));
        logo_pushButton->setGeometry(QRect(750, 670, 142, 34));
        logo_pushButton->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"border-image: url(:/logo/logo_btn.png);\n"
"color: rgb(255, 255, 255);"));
        logo_touch_pushButton->raise();
        logo_frame->raise();
        logo_title->raise();
        logo_input_frame->raise();
        logo_input_frame_2->raise();
        logo_user_frame->raise();
        logo_password_frame->raise();
        oxygen_value_title->raise();
        logo_password->raise();
        logo_username->raise();
        oxygen_value_title_2->raise();
        logo_modify->raise();
        logo_pushButton->raise();

        retranslateUi(hfLogo);

        QMetaObject::connectSlotsByName(hfLogo);
    } // setupUi

    void retranslateUi(QWidget *hfLogo)
    {
        hfLogo->setWindowTitle(QApplication::translate("hfLogo", "Form", Q_NULLPTR));
        logo_touch_pushButton->setText(QString());
        logo_title->setText(QApplication::translate("hfLogo", "\347\231\273\345\205\245", Q_NULLPTR));
        logo_input_frame->setText(QString());
        logo_input_frame_2->setText(QString());
        oxygen_value_title->setText(QApplication::translate("hfLogo", "\345\257\206\347\240\201", Q_NULLPTR));
        logo_password->setText(QApplication::translate("hfLogo", "gsgsdgsgsg", Q_NULLPTR));
        logo_username->setText(QString());
        oxygen_value_title_2->setText(QApplication::translate("hfLogo", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        logo_modify->setText(QApplication::translate("hfLogo", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        logo_pushButton->setText(QApplication::translate("hfLogo", "\347\231\273\345\205\245/\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hfLogo: public Ui_hfLogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFLOGO_H
