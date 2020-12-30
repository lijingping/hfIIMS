#include "hfLogo.h"
#include "ui_hfLogo.h"

hfLogo::hfLogo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hfLogo)
{
    ui->setupUi(this);
}

hfLogo::~hfLogo()
{
    delete ui;
}
