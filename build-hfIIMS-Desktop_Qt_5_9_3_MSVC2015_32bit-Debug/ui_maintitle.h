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
    QSpacerItem *horizontalSpacer;
    QLabel *logo;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *user_icon;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *user_name;
    QLabel *title;
    QWidget *widget;
    QLabel *sensor;
    QLabel *time;
    QLabel *time_label;
    QPushButton *close;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *hfMainTitle)
    {
        if (hfMainTitle->objectName().isEmpty())
            hfMainTitle->setObjectName(QStringLiteral("hfMainTitle"));
        hfMainTitle->resize(918, 108);
        horizontalLayout_2 = new QHBoxLayout(hfMainTitle);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        logo = new QLabel(hfMainTitle);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setMinimumSize(QSize(249, 0));
        logo->setMaximumSize(QSize(16777215, 72));
        logo->setMargin(18);

        horizontalLayout->addWidget(logo);

        horizontalSpacer_2 = new QSpacerItem(44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        user_icon = new QPushButton(hfMainTitle);
        user_icon->setObjectName(QStringLiteral("user_icon"));
        user_icon->setMinimumSize(QSize(65, 0));
        user_icon->setMaximumSize(QSize(65, 61));

        horizontalLayout->addWidget(user_icon);

        horizontalSpacer_4 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        user_name = new QPushButton(hfMainTitle);
        user_name->setObjectName(QStringLiteral("user_name"));
        user_name->setMinimumSize(QSize(192, 42));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(18);
        user_name->setFont(font);

        horizontalLayout->addWidget(user_name);

        title = new QLabel(hfMainTitle);
        title->setObjectName(QStringLiteral("title"));
        title->setMinimumSize(QSize(511, 39));
        title->setMaximumSize(QSize(511, 39));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(9);
        title->setFont(font1);
        title->setAlignment(Qt::AlignCenter);
        title->setWordWrap(false);

        horizontalLayout->addWidget(title);

        widget = new QWidget(hfMainTitle);
        widget->setObjectName(QStringLiteral("widget"));

        horizontalLayout->addWidget(widget);

        sensor = new QLabel(hfMainTitle);
        sensor->setObjectName(QStringLiteral("sensor"));
        sensor->setMinimumSize(QSize(0, 0));
        sensor->setMargin(18);

        horizontalLayout->addWidget(sensor);

        time = new QLabel(hfMainTitle);
        time->setObjectName(QStringLiteral("time"));
        time->setMinimumSize(QSize(40, 0));
        time->setMaximumSize(QSize(40, 40));
        time->setLineWidth(3);

        horizontalLayout->addWidget(time);

        time_label = new QLabel(hfMainTitle);
        time_label->setObjectName(QStringLiteral("time_label"));
        time_label->setMargin(18);

        horizontalLayout->addWidget(time_label);

        close = new QPushButton(hfMainTitle);
        close->setObjectName(QStringLiteral("close"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(close->sizePolicy().hasHeightForWidth());
        close->setSizePolicy(sizePolicy);
        close->setMinimumSize(QSize(43, 43));
        close->setMaximumSize(QSize(43, 43));
        close->setIconSize(QSize(43, 43));

        horizontalLayout->addWidget(close);

        horizontalSpacer_3 = new QSpacerItem(67, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout->setStretch(7, 3);
        horizontalLayout->setStretch(8, 3);
        horizontalLayout->setStretch(10, 1);
        horizontalLayout->setStretch(11, 1);

        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(hfMainTitle);

        QMetaObject::connectSlotsByName(hfMainTitle);
    } // setupUi

    void retranslateUi(QWidget *hfMainTitle)
    {
        hfMainTitle->setWindowTitle(QApplication::translate("hfMainTitle", "Form", Q_NULLPTR));
        user_icon->setText(QString());
        user_name->setText(QApplication::translate("hfMainTitle", "User Name  ", Q_NULLPTR));
        title->setText(QApplication::translate("hfMainTitle", "\347\273\274\345\220\210\344\277\241\346\201\257\347\233\221\346\216\247\347\263\273\347\273\237", Q_NULLPTR));
        sensor->setText(QString());
        time->setText(QString());
        time_label->setText(QApplication::translate("hfMainTitle", "2020/12/14 14:43:00 ", Q_NULLPTR));
        close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class hfMainTitle: public Ui_hfMainTitle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTITLE_H
