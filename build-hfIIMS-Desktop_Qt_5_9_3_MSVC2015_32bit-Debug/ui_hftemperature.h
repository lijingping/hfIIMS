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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_hfTemperature
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_hint_temperature;

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
        label_hint_temperature = new QLabel(hfTemperature);
        label_hint_temperature->setObjectName(QStringLiteral("label_hint_temperature"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        label_hint_temperature->setFont(font);

        verticalLayout->addWidget(label_hint_temperature);

        verticalLayout->setStretch(0, 1);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(hfTemperature);

        QMetaObject::connectSlotsByName(hfTemperature);
    } // setupUi

    void retranslateUi(QFrame *hfTemperature)
    {
        hfTemperature->setWindowTitle(QApplication::translate("hfTemperature", "Frame", Q_NULLPTR));
        label_hint_temperature->setText(QApplication::translate("hfTemperature", "\346\270\251\345\272\246\346\233\262\347\272\277\345\233\276:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hfTemperature: public Ui_hfTemperature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFTEMPERATURE_H
