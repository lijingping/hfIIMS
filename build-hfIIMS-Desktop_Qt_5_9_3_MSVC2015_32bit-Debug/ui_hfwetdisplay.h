/********************************************************************************
** Form generated from reading UI file 'hfwetdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HFWETDISPLAY_H
#define UI_HFWETDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_hfWetDisplay
{
public:
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *wet_icon;
    QLabel *wet_display_hint;
    QLabel *set;
    QLabel *temperature_desc;
    QLabel *temperature_unit;
    QLabel *temperature_time;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *hfWetDisplay)
    {
        if (hfWetDisplay->objectName().isEmpty())
            hfWetDisplay->setObjectName(QStringLiteral("hfWetDisplay"));
        hfWetDisplay->resize(723, 480);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        hfWetDisplay->setFont(font);
        hfWetDisplay->setFrameShape(QFrame::StyledPanel);
        hfWetDisplay->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(hfWetDisplay);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        wet_icon = new QLabel(hfWetDisplay);
        wet_icon->setObjectName(QStringLiteral("wet_icon"));
        wet_icon->setMinimumSize(QSize(32, 48));
        wet_icon->setMaximumSize(QSize(32, 48));
        wet_icon->setStyleSheet(QStringLiteral("image: url(:/img/wet.png);"));

        horizontalLayout->addWidget(wet_icon);

        wet_display_hint = new QLabel(hfWetDisplay);
        wet_display_hint->setObjectName(QStringLiteral("wet_display_hint"));
        wet_display_hint->setMinimumSize(QSize(0, 0));
        wet_display_hint->setMaximumSize(QSize(16777215, 16777215));
        wet_display_hint->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 20pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));

        horizontalLayout->addWidget(wet_display_hint);

        set = new QLabel(hfWetDisplay);
        set->setObjectName(QStringLiteral("set"));
        set->setMinimumSize(QSize(35, 33));
        set->setMaximumSize(QSize(35, 33));
        set->setStyleSheet(QStringLiteral("image: url(:/img/set.png);"));

        horizontalLayout->addWidget(set);


        verticalLayout->addLayout(horizontalLayout);


        formLayout->setLayout(1, QFormLayout::FieldRole, verticalLayout);

        temperature_desc = new QLabel(hfWetDisplay);
        temperature_desc->setObjectName(QStringLiteral("temperature_desc"));
        temperature_desc->setMaximumSize(QSize(16777215, 16777215));
        temperature_desc->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        temperature_desc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, temperature_desc);

        temperature_unit = new QLabel(hfWetDisplay);
        temperature_unit->setObjectName(QStringLiteral("temperature_unit"));
        temperature_unit->setStyleSheet(QString::fromUtf8("font: 10pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"color: rgb(93, 97, 127);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, temperature_unit);

        temperature_time = new QLabel(hfWetDisplay);
        temperature_time->setObjectName(QStringLiteral("temperature_time"));
        temperature_time->setStyleSheet(QString::fromUtf8("font: 10pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"color: rgb(93, 97, 127);"));
        temperature_time->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, temperature_time);

        verticalSpacer = new QSpacerItem(20, 400, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer);


        retranslateUi(hfWetDisplay);

        QMetaObject::connectSlotsByName(hfWetDisplay);
    } // setupUi

    void retranslateUi(QFrame *hfWetDisplay)
    {
        hfWetDisplay->setWindowTitle(QApplication::translate("hfWetDisplay", "Frame", Q_NULLPTR));
        wet_icon->setText(QString());
        wet_display_hint->setText(QApplication::translate("hfWetDisplay", "\346\271\277\345\272\246\346\233\262\347\272\277\345\233\276:", Q_NULLPTR));
        set->setText(QString());
        temperature_desc->setText(QApplication::translate("hfWetDisplay", "RH.%/Min.    ", Q_NULLPTR));
        temperature_unit->setText(QApplication::translate("hfWetDisplay", "       \346\271\277\345\272\246RH%", Q_NULLPTR));
        temperature_time->setText(QApplication::translate("hfWetDisplay", "\346\257\217\345\210\206\351\222\237\357\274\210Min\357\274\211        ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hfWetDisplay: public Ui_hfWetDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFWETDISPLAY_H
