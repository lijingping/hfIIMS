/********************************************************************************
** Form generated from reading UI file 'hftemperature.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HFTEMPERATURE_H
#define UI_HFTEMPERATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_hfTemperature
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *temperature_icon;
    QLabel *label_hint_temperature;
    QLabel *set;
    QLabel *temperature_desc;
    QLabel *temperature_unit;
    QSpacerItem *verticalSpacer;
    QLabel *temperature_time;

    void setupUi(QFrame *hfTemperature)
    {
        if (hfTemperature->objectName().isEmpty())
            hfTemperature->setObjectName(QStringLiteral("hfTemperature"));
        hfTemperature->resize(637, 474);
        hfTemperature->setFrameShape(QFrame::StyledPanel);
        hfTemperature->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(hfTemperature);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        temperature_icon = new QLabel(hfTemperature);
        temperature_icon->setObjectName(QStringLiteral("temperature_icon"));
        temperature_icon->setMinimumSize(QSize(28, 50));
        temperature_icon->setMaximumSize(QSize(28, 50));
        temperature_icon->setStyleSheet(QStringLiteral("image: url(:/img/temperature.png);"));

        horizontalLayout->addWidget(temperature_icon);

        label_hint_temperature = new QLabel(hfTemperature);
        label_hint_temperature->setObjectName(QStringLiteral("label_hint_temperature"));
        label_hint_temperature->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223"));
        font.setPointSize(20);
        label_hint_temperature->setFont(font);
        label_hint_temperature->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 20pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));

        horizontalLayout->addWidget(label_hint_temperature);

        set = new QLabel(hfTemperature);
        set->setObjectName(QStringLiteral("set"));
        set->setMinimumSize(QSize(35, 33));
        set->setMaximumSize(QSize(35, 33));
        set->setStyleSheet(QStringLiteral("image: url(:/img/set.png);"));

        horizontalLayout->addWidget(set);


        verticalLayout_2->addLayout(horizontalLayout);

        temperature_desc = new QLabel(hfTemperature);
        temperature_desc->setObjectName(QStringLiteral("temperature_desc"));
        temperature_desc->setMaximumSize(QSize(16777215, 16777215));
        temperature_desc->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        temperature_desc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(temperature_desc);

        temperature_unit = new QLabel(hfTemperature);
        temperature_unit->setObjectName(QStringLiteral("temperature_unit"));
        temperature_unit->setStyleSheet(QString::fromUtf8("font: 10pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"color: rgb(91, 90, 117);"));

        verticalLayout_2->addWidget(temperature_unit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        temperature_time = new QLabel(hfTemperature);
        temperature_time->setObjectName(QStringLiteral("temperature_time"));
        temperature_time->setStyleSheet(QString::fromUtf8("font: 10pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"color: rgb(91, 90, 117);"));
        temperature_time->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(temperature_time);


        retranslateUi(hfTemperature);

        QMetaObject::connectSlotsByName(hfTemperature);
    } // setupUi

    void retranslateUi(QFrame *hfTemperature)
    {
        hfTemperature->setWindowTitle(QApplication::translate("hfTemperature", "Frame", Q_NULLPTR));
        temperature_icon->setText(QString());
        label_hint_temperature->setText(QApplication::translate("hfTemperature", "\346\270\251\345\272\246\346\233\262\347\272\277\345\233\276", Q_NULLPTR));
        set->setText(QString());
        temperature_desc->setText(QApplication::translate("hfTemperature", "\342\204\203/Min.    ", Q_NULLPTR));
        temperature_unit->setText(QApplication::translate("hfTemperature", "       \346\221\204\346\260\217\345\272\246\357\274\210C\357\274\211", Q_NULLPTR));
        temperature_time->setText(QApplication::translate("hfTemperature", "\346\257\217\345\210\206\351\222\237\357\274\210Min\357\274\211        ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hfTemperature: public Ui_hfTemperature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFTEMPERATURE_H
