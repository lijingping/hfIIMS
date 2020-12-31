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
    mChartview = new QChartView(mCharts, this);
    mData = new QLineSeries;
    mCharts->setBackgroundVisible(false);
    mChartview->setStyleSheet("background: transparent");
    mCharts->setObjectName("temperature");

    int l_nRow = 13;
    mAxisX = new QValueAxis();
//    mAxisX->setTitleText(tr("每分钟（Min）"));
    mAxisX->setLabelFormat("%g");
    mAxisX->setRange(0, 60);
    mAxisX->setTickCount(l_nRow);
    mCharts->addAxis(mAxisX,Qt::AlignBottom);
    mAxisY = new QValueAxis();
//    mAxisY->setTitleText(tr("摄氏度（C）"));
    mAxisY->setLabelFormat("%g .C");
    mAxisY->setRange(0,40);
    mCharts->addAxis(mAxisY,Qt::AlignLeft);

    //创建光滑曲线序列，并添加数据
    srand(QDateTime::currentDateTime().time().second());
    QSplineSeries *l_pSpLineSeries = new QSplineSeries;
    for (int i = 0; i < l_nRow; i++)
    {
        int l_nRand = rand()%40;
        l_pSpLineSeries->append(i*5, l_nRand);
    }
    mCharts->addSeries(l_pSpLineSeries);
    mCharts->setAxisX(mAxisX, l_pSpLineSeries);
    mCharts->setAxisY(mAxisY, l_pSpLineSeries);

    mCharts->setBackgroundVisible(false);
    mChartview->setGeometry(0,40, 440, 240);
}

hfTemperature::~hfTemperature()
{
    delete ui;
}
