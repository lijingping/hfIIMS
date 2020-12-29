#include "logoDisplay.h"
#include "ui_logoDisplay.h"

logoDisplay::logoDisplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logoDisplay)
{
    ui->setupUi(this);
}

logoDisplay::~logoDisplay()
{
    delete ui;
}
