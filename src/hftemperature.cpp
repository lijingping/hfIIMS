#include "hftemperature.h"
#include "ui_hftemperature.h"

hfTemperature::hfTemperature(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::hfTemperature)
{
    QFile file2("./res/qss/hftemperature.css");
    if (!file2.open(QIODevice::ReadOnly)) {
        qDebug()<<"error css read";
        exit(0);
    }
    QTextStream in2(&file2);
    QString css = in2.readAll();
    this->setStyleSheet(css);

    ui->setupUi(this);
    mCharts = new QChart();
    mChartview = new QChartView(mCharts);
    mData = new QLineSeries;
    mCharts->setBackgroundVisible(false);
    mChartview->setStyleSheet("background: transparent");
    mCharts->setObjectName("temperature");

    mAxisX = new QValueAxis();
    mAxisX->setTitleText("时间/分钟");
    mAxisX->setLabelFormat("%g");
    mAxisX->setRange(0,60);
    mCharts->addAxis(mAxisX,Qt::AlignBottom);
    mAxisY = new QValueAxis();
    mAxisY->setTitleText("温度/.C");
    mAxisY->setLabelFormat("%g .C");
    mAxisY->setRange(0,40);
    mCharts->addAxis(mAxisY,Qt::AlignLeft);


    ui->verticalLayout->addWidget(this->mChartview);
    ui->verticalLayout->setStretch(0,1);
    ui->verticalLayout->setStretch(1,10);
    mCharts->setBackgroundVisible(false);
}

hfTemperature::~hfTemperature()
{
    delete ui;
}
