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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_hfNoiseDisplay
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *noise_display_hint;

    void setupUi(QFrame *hfNoiseDisplay)
    {
        if (hfNoiseDisplay->objectName().isEmpty())
            hfNoiseDisplay->setObjectName(QStringLiteral("hfNoiseDisplay"));
        hfNoiseDisplay->resize(820, 610);
        hfNoiseDisplay->setFrameShape(QFrame::StyledPanel);
        hfNoiseDisplay->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(hfNoiseDisplay);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        noise_display_hint = new QLabel(hfNoiseDisplay);
        noise_display_hint->setObjectName(QStringLiteral("noise_display_hint"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        noise_display_hint->setFont(font);

        verticalLayout->addWidget(noise_display_hint);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(hfNoiseDisplay);

        QMetaObject::connectSlotsByName(hfNoiseDisplay);
    } // setupUi

    void retranslateUi(QFrame *hfNoiseDisplay)
    {
        hfNoiseDisplay->setWindowTitle(QApplication::translate("hfNoiseDisplay", "Frame", Q_NULLPTR));
        noise_display_hint->setText(QApplication::translate("hfNoiseDisplay", "\345\231\252\345\243\260\345\210\206\350\264\235\346\233\262\347\272\277\345\233\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hfNoiseDisplay: public Ui_hfNoiseDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFNOISEDISPLAY_H
