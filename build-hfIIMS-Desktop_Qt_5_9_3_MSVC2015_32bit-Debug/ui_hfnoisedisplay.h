/********************************************************************************
** Form generated from reading UI file 'hfnoisedisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HFNOISEDISPLAY_H
#define UI_HFNOISEDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_hfNoiseDisplay
{
public:
    QFormLayout *formLayout;
    QLabel *noise_icon;
    QLabel *noise_display_hint;
    QHBoxLayout *horizontalLayout_2;
    QLabel *noise_unit;
    QLabel *noise_desc;
    QFrame *frame;

    void setupUi(QFrame *hfNoiseDisplay)
    {
        if (hfNoiseDisplay->objectName().isEmpty())
            hfNoiseDisplay->setObjectName(QStringLiteral("hfNoiseDisplay"));
        hfNoiseDisplay->resize(448, 310);
        hfNoiseDisplay->setFrameShape(QFrame::StyledPanel);
        hfNoiseDisplay->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(hfNoiseDisplay);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        noise_icon = new QLabel(hfNoiseDisplay);
        noise_icon->setObjectName(QStringLiteral("noise_icon"));
        noise_icon->setMinimumSize(QSize(48, 42));
        noise_icon->setMaximumSize(QSize(48, 42));
        noise_icon->setStyleSheet(QStringLiteral("image: url(:/img/noise.png);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, noise_icon);

        noise_display_hint = new QLabel(hfNoiseDisplay);
        noise_display_hint->setObjectName(QStringLiteral("noise_display_hint"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        noise_display_hint->setFont(font);
        noise_display_hint->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, noise_display_hint);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        noise_unit = new QLabel(hfNoiseDisplay);
        noise_unit->setObjectName(QStringLiteral("noise_unit"));
        noise_unit->setMinimumSize(QSize(0, 0));
        noise_unit->setMaximumSize(QSize(16777215, 16777215));
        noise_unit->setStyleSheet(QString::fromUtf8("font: 10pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(noise_unit);

        noise_desc = new QLabel(hfNoiseDisplay);
        noise_desc->setObjectName(QStringLiteral("noise_desc"));
        noise_desc->setMaximumSize(QSize(16777215, 16777215));
        noise_desc->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font:20pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        noise_desc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(noise_desc);


        formLayout->setLayout(1, QFormLayout::SpanningRole, horizontalLayout_2);

        frame = new QFrame(hfNoiseDisplay);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 200));
        frame->setMaximumSize(QSize(16777215, 200));
        frame->setStyleSheet(QStringLiteral("border-image: url(:/img/noise_frame.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(2, QFormLayout::SpanningRole, frame);


        retranslateUi(hfNoiseDisplay);

        QMetaObject::connectSlotsByName(hfNoiseDisplay);
    } // setupUi

    void retranslateUi(QFrame *hfNoiseDisplay)
    {
        hfNoiseDisplay->setWindowTitle(QApplication::translate("hfNoiseDisplay", "Frame", Q_NULLPTR));
        noise_icon->setText(QString());
        noise_display_hint->setText(QApplication::translate("hfNoiseDisplay", "\345\231\252\345\243\260\345\210\206\350\264\235\346\233\262\347\272\277\345\233\276", Q_NULLPTR));
        noise_unit->setText(QApplication::translate("hfNoiseDisplay", "\345\215\225\344\275\215:DB", Q_NULLPTR));
        noise_desc->setText(QApplication::translate("hfNoiseDisplay", "60dB", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hfNoiseDisplay: public Ui_hfNoiseDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFNOISEDISPLAY_H
