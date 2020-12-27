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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_hfWetDisplay
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *wet_icon;
    QLabel *wet_display_hint;
    QLabel *set;

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
        verticalLayout_2 = new QVBoxLayout(hfWetDisplay);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        wet_icon = new QLabel(hfWetDisplay);
        wet_icon->setObjectName(QStringLiteral("wet_icon"));
        wet_icon->setMinimumSize(QSize(32, 48));
        wet_icon->setMaximumSize(QSize(32, 48));

        horizontalLayout->addWidget(wet_icon);

        wet_display_hint = new QLabel(hfWetDisplay);
        wet_display_hint->setObjectName(QStringLiteral("wet_display_hint"));

        horizontalLayout->addWidget(wet_display_hint);

        set = new QLabel(hfWetDisplay);
        set->setObjectName(QStringLiteral("set"));
        set->setMinimumSize(QSize(35, 33));
        set->setMaximumSize(QSize(35, 33));

        horizontalLayout->addWidget(set);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(hfWetDisplay);

        QMetaObject::connectSlotsByName(hfWetDisplay);
    } // setupUi

    void retranslateUi(QFrame *hfWetDisplay)
    {
        hfWetDisplay->setWindowTitle(QApplication::translate("hfWetDisplay", "Frame", Q_NULLPTR));
        wet_icon->setText(QString());
        wet_display_hint->setText(QApplication::translate("hfWetDisplay", "\346\271\277\345\272\246\346\233\262\347\272\277\345\233\276:", Q_NULLPTR));
        set->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class hfWetDisplay: public Ui_hfWetDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFWETDISPLAY_H
