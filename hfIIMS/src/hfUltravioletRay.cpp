#include "hfUltravioletRay.h"
#include "ui_hfUltravioletRay.h"

hfUltravioletRay::hfUltravioletRay(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::hfUltravioletRay)
{
    ui->setupUi(this);
}

hfUltravioletRay::~hfUltravioletRay()
{
    delete ui;
}
