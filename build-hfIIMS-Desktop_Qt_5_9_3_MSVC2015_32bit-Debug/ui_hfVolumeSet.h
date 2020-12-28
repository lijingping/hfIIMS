/********************************************************************************
** Form generated from reading UI file 'hfVolumeSet.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HFVOLUMESET_H
#define UI_HFVOLUMESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_hfVolumeSet
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *volume_set_icon;
    QLabel *volume_set_label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QFrame *volume_set_items;
    QPushButton *sea_wave;
    QPushButton *sea_breeze;
    QPushButton *beach_climb;
    QPushButton *thunder;
    QPushButton *alert;
    QPushButton *main_engine_work;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *sound_icon;
    QSlider *volume_set_slider;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *hfVolumeSet)
    {
        if (hfVolumeSet->objectName().isEmpty())
            hfVolumeSet->setObjectName(QStringLiteral("hfVolumeSet"));
        hfVolumeSet->resize(400, 300);
        hfVolumeSet->setFrameShape(QFrame::StyledPanel);
        hfVolumeSet->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(hfVolumeSet);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        volume_set_icon = new QLabel(hfVolumeSet);
        volume_set_icon->setObjectName(QStringLiteral("volume_set_icon"));
        volume_set_icon->setMinimumSize(QSize(31, 50));
        volume_set_icon->setMaximumSize(QSize(31, 50));

        horizontalLayout->addWidget(volume_set_icon);

        volume_set_label = new QLabel(hfVolumeSet);
        volume_set_label->setObjectName(QStringLiteral("volume_set_label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223"));
        font.setPointSize(20);
        volume_set_label->setFont(font);
        volume_set_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 20pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));

        horizontalLayout->addWidget(volume_set_label);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        volume_set_items = new QFrame(hfVolumeSet);
        volume_set_items->setObjectName(QStringLiteral("volume_set_items"));
        volume_set_items->setMinimumSize(QSize(363, 153));
        volume_set_items->setMaximumSize(QSize(363, 153));
        volume_set_items->setFrameShape(QFrame::StyledPanel);
        volume_set_items->setFrameShadow(QFrame::Raised);
        sea_wave = new QPushButton(volume_set_items);
        sea_wave->setObjectName(QStringLiteral("sea_wave"));
        sea_wave->setGeometry(QRect(20, 30, 87, 27));
        sea_wave->setMinimumSize(QSize(87, 27));
        sea_breeze = new QPushButton(volume_set_items);
        sea_breeze->setObjectName(QStringLiteral("sea_breeze"));
        sea_breeze->setGeometry(QRect(140, 30, 87, 27));
        sea_breeze->setMinimumSize(QSize(87, 27));
        beach_climb = new QPushButton(volume_set_items);
        beach_climb->setObjectName(QStringLiteral("beach_climb"));
        beach_climb->setGeometry(QRect(250, 30, 87, 27));
        beach_climb->setMinimumSize(QSize(87, 27));
        thunder = new QPushButton(volume_set_items);
        thunder->setObjectName(QStringLiteral("thunder"));
        thunder->setGeometry(QRect(20, 90, 87, 27));
        thunder->setMinimumSize(QSize(87, 27));
        alert = new QPushButton(volume_set_items);
        alert->setObjectName(QStringLiteral("alert"));
        alert->setGeometry(QRect(140, 90, 87, 27));
        alert->setMinimumSize(QSize(87, 27));
        main_engine_work = new QPushButton(volume_set_items);
        main_engine_work->setObjectName(QStringLiteral("main_engine_work"));
        main_engine_work->setGeometry(QRect(250, 90, 87, 27));
        main_engine_work->setMinimumSize(QSize(87, 27));

        horizontalLayout_2->addWidget(volume_set_items);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        sound_icon = new QLabel(hfVolumeSet);
        sound_icon->setObjectName(QStringLiteral("sound_icon"));
        sound_icon->setMinimumSize(QSize(36, 31));
        sound_icon->setMaximumSize(QSize(36, 31));

        horizontalLayout_3->addWidget(sound_icon);

        volume_set_slider = new QSlider(hfVolumeSet);
        volume_set_slider->setObjectName(QStringLiteral("volume_set_slider"));
        volume_set_slider->setMinimumSize(QSize(300, 6));
        volume_set_slider->setMaximumSize(QSize(300, 6));
        volume_set_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(volume_set_slider);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(hfVolumeSet);

        QMetaObject::connectSlotsByName(hfVolumeSet);
    } // setupUi

    void retranslateUi(QFrame *hfVolumeSet)
    {
        hfVolumeSet->setWindowTitle(QApplication::translate("hfVolumeSet", "Frame", Q_NULLPTR));
        volume_set_icon->setText(QString());
        volume_set_label->setText(QApplication::translate("hfVolumeSet", "\351\237\263\351\207\217\350\256\276\347\275\256", Q_NULLPTR));
        sea_wave->setText(QApplication::translate("hfVolumeSet", "\346\265\267\346\265\252", Q_NULLPTR));
        sea_breeze->setText(QApplication::translate("hfVolumeSet", "\346\265\267\351\243\216", Q_NULLPTR));
        beach_climb->setText(QApplication::translate("hfVolumeSet", "\347\231\273\346\273\251", Q_NULLPTR));
        thunder->setText(QApplication::translate("hfVolumeSet", "\351\233\267\347\224\265", Q_NULLPTR));
        alert->setText(QApplication::translate("hfVolumeSet", "\350\255\246\346\212\245", Q_NULLPTR));
        main_engine_work->setText(QApplication::translate("hfVolumeSet", "\344\270\273\346\234\272\345\267\245\344\275\234", Q_NULLPTR));
        sound_icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class hfVolumeSet: public Ui_hfVolumeSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFVOLUMESET_H
