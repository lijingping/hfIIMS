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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_hfTemperature
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *temperature_icon;
    QLabel *label_hint_temperature;
    QLabel *set;

    void setupUi(QFrame *hfTemperature)
    {
        if (hfTemperature->objectName().isEmpty())
            hfTemperature->setObjectName(QStringLiteral("hfTemperature"));
        hfTemperature->resize(637, 474);
        hfTemperature->setFrameShape(QFrame::StyledPanel);
        hfTemperature->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(hfTemperature);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        temperature_icon = new QLabel(hfTemperature);
        temperature_icon->setObjectName(QStringLiteral("temperature_icon"));
        temperature_icon->setMinimumSize(QSize(28, 50));
        temperature_icon->setMaximumSize(QSize(28, 16777215));

        horizontalLayout->addWidget(temperature_icon);

        label_hint_temperature = new QLabel(hfTemperature);
        label_hint_temperature->setObjectName(QStringLiteral("label_hint_temperature"));
        label_hint_temperature->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        label_hint_temperature->setFont(font);

        horizontalLayout->addWidget(label_hint_temperature);

        set = new QLabel(hfTemperature);
        set->setObjectName(QStringLiteral("set"));
        set->setMinimumSize(QSize(35, 33));
        set->setMaximumSize(QSize(35, 33));

        horizontalLayout->addWidget(set);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(hfTemperature);

        QMetaObject::connectSlotsByName(hfTemperature);
    } // setupUi

    void retranslateUi(QFrame *hfTemperature)
    {
        hfTemperature->setWindowTitle(QApplication::translate("hfTemperature", "Frame", Q_NULLPTR));
        temperature_icon->setText(QString());
        label_hint_temperature->setText(QApplication::translate("hfTemperature", "\346\270\251\345\272\246\346\233\262\347\272\277\345\233\276", Q_NULLPTR));
        set->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class hfTemperature: public Ui_hfTemperature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFTEMPERATURE_H
