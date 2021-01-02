#include "hfThreshold.h"
#include "ui_hfThreshold.h"

hfThreshold::hfThreshold(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hfThreshold)
{
    ui->setupUi(this);
}

hfThreshold::~hfThreshold()
{
    delete ui;
}

void hfThreshold::setUnit(QString unit)
{
    ui->threshold_unit->setText(unit);
}