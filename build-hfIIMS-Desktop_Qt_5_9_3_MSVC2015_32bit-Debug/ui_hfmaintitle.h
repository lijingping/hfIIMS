/********************************************************************************
** Form generated from reading UI file 'hfmaintitle.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HFMAINTITLE_H
#define UI_HFMAINTITLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hfMainTitle
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QLabel *titile;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *time_label;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_3;

    void setupUi(QFrame *hfMainTitle)
    {
        if (hfMainTitle->objectName().isEmpty())
            hfMainTitle->setObjectName(QStringLiteral("hfMainTitle"));
        hfMainTitle->resize(871, 47);
        hfMainTitle->setFrameShape(QFrame::StyledPanel);
        hfMainTitle->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(hfMainTitle);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        logo = new QLabel(hfMainTitle);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setMargin(18);

        horizontalLayout->addWidget(logo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget = new QWidget(hfMainTitle);
        widget->setObjectName(QStringLiteral("widget"));

        horizontalLayout->addWidget(widget);

        titile = new QLabel(hfMainTitle);
        titile->setObjectName(QStringLiteral("titile"));
        titile->setAlignment(Qt::AlignCenter);
        titile->setMargin(18);

        horizontalLayout->addWidget(titile);

        label_3 = new QLabel(hfMainTitle);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(30, 0));
        label_3->setMargin(18);

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(hfMainTitle);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(30, 0));
        label_4->setMargin(18);

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        time_label = new QLabel(hfMainTitle);
        time_label->setObjectName(QStringLiteral("time_label"));
        time_label->setMargin(18);

        horizontalLayout->addWidget(time_label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pushButton_3 = new QPushButton(hfMainTitle);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(15, 0));

        horizontalLayout->addWidget(pushButton_3);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 3);
        horizontalLayout->setStretch(3, 30);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(9, 1);

        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(hfMainTitle);

        QMetaObject::connectSlotsByName(hfMainTitle);
    } // setupUi

    void retranslateUi(QFrame *hfMainTitle)
    {
        hfMainTitle->setWindowTitle(QApplication::translate("hfMainTitle", "Frame", Q_NULLPTR));
        logo->setText(QApplication::translate("hfMainTitle", "logo", Q_NULLPTR));
        titile->setText(QApplication::translate("hfMainTitle", "\347\273\274\345\220\210\344\277\241\346\201\257\347\233\221\346\216\247\347\263\273\347\273\237", Q_NULLPTR));
        label_3->setText(QApplication::translate("hfMainTitle", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("hfMainTitle", "TextLabel", Q_NULLPTR));
        time_label->setText(QApplication::translate("hfMainTitle", "2020/12/14 14:43:00", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("hfMainTitle", "X", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hfMainTitle: public Ui_hfMainTitle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFMAINTITLE_H
