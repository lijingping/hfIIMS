/********************************************************************************
** Form generated from reading UI file 'maintitle.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTITLE_H
#define UI_MAINTITLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QLabel *company;
    QLabel *titile;
    QLabel *pan;
    QLabel *sensor;
    QSpacerItem *horizontalSpacer_3;
    QLabel *time_label;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_3;

    void setupUi(QWidget *hfMainTitle)
    {
        if (hfMainTitle->objectName().isEmpty())
            hfMainTitle->setObjectName(QStringLiteral("hfMainTitle"));
        hfMainTitle->resize(918, 68);
        horizontalLayout_2 = new QHBoxLayout(hfMainTitle);
        horizontalLayout_2->setSpacing(0);
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

        company = new QLabel(hfMainTitle);
        company->setObjectName(QStringLiteral("company"));
        company->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(16);
        company->setFont(font);

        horizontalLayout->addWidget(company);

        titile = new QLabel(hfMainTitle);
        titile->setObjectName(QStringLiteral("titile"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        titile->setFont(font1);
        titile->setAlignment(Qt::AlignCenter);
        titile->setMargin(18);

        horizontalLayout->addWidget(titile);

        pan = new QLabel(hfMainTitle);
        pan->setObjectName(QStringLiteral("pan"));
        pan->setMinimumSize(QSize(0, 0));
        pan->setMargin(18);

        horizontalLayout->addWidget(pan);

        sensor = new QLabel(hfMainTitle);
        sensor->setObjectName(QStringLiteral("sensor"));
        sensor->setMinimumSize(QSize(0, 0));
        sensor->setMargin(18);

        horizontalLayout->addWidget(sensor);

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
        horizontalLayout->setStretch(4, 30);
        horizontalLayout->setStretch(5, 3);
        horizontalLayout->setStretch(6, 3);
        horizontalLayout->setStretch(8, 1);
        horizontalLayout->setStretch(10, 1);

        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(hfMainTitle);

        QMetaObject::connectSlotsByName(hfMainTitle);
    } // setupUi

    void retranslateUi(QWidget *hfMainTitle)
    {
        hfMainTitle->setWindowTitle(QApplication::translate("hfMainTitle", "Form", Q_NULLPTR));
        logo->setText(QString());
        company->setText(QApplication::translate("hfMainTitle", "\345\216\246\351\227\250\345\222\214\344\270\260", Q_NULLPTR));
        titile->setText(QApplication::translate("hfMainTitle", "\347\273\274\345\220\210\344\277\241\346\201\257\347\233\221\346\216\247\347\263\273\347\273\237", Q_NULLPTR));
        pan->setText(QString());
        sensor->setText(QString());
        time_label->setText(QApplication::translate("hfMainTitle", "2020/12/14 14:43:00 ", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("hfMainTitle", "X", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hfMainTitle: public Ui_hfMainTitle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTITLE_H
