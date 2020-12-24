#include "hfwetdisplay.h"
#include "ui_hfwetdisplay.h"

hfWetDisplay::hfWetDisplay(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::hfWetDisplay)
{
    ui->setupUi(this);
    mCharts = new QChart();
    mChartview = new QChartView(mCharts);
    mData = new QLineSeries;
    mCharts->setObjectName("wetdisplay");
    mCharts->setBackgroundVisible(false);
    mChartview->setStyleSheet("background: transparent");
    mAxisX = new QValueAxis();
    mAxisX->setTitleText("时间/分钟");
    mAxisX->setLabelFormat("%g");
    mAxisX->setRange(0,60);
    mAxisX->setGridLineVisible(false);
    mCharts->addAxis(mAxisX,Qt::AlignBottom);
    mAxisY = new QValueAxis();
    mAxisY->setTitleText("温度/.C");
    mAxisY->setLabelFormat("%g .C");
    mAxisY->setRange(0,40);
    mCharts->addAxis(mAxisY,Qt::AlignLeft);

    QFile file2("./res/qss/hfwetdisplay.css");
    if (!file2.open(QIODevice::ReadOnly)) {
        qDebug()<<"error css read";
        exit(0);
    }
    QTextStream in2(&file2);
    QString css = in2.readAll();
    this->setStyleSheet(css);
    ui->verticalLayout->addWidget(this->mChartview);
    ui->verticalLayout->setStretch(0,1);
    ui->verticalLayout->setStretch(1,10);

    mCharts->setBackgroundVisible(false);

}

hfWetDisplay::~hfWetDisplay()
{
    delete ui;
}
