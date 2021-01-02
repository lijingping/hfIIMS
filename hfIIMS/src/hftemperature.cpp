#include "hftemperature.h"
#include "ui_hftemperature.h"
#include "hfThreshold.h"

hfTemperature::hfTemperature(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::hfTemperature),
    m_phfThreshold(NULL)
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
    mAxisY->setLabelFormat("%gC");
    mAxisY->setRange(0,40);
    mAxisY->setGridLineVisible(false);
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
    mChartview->setGeometry(0,45, 440, 240);
}

hfTemperature::~hfTemperature()
{
    delete ui;
}

void hfTemperature::onThreshold(QString value)
{
    qDebug() << "n"+value;
}

void hfTemperature::on_temperature_set_clicked()
{
    if (m_phfThreshold){
        m_phfThreshold->close();
    }

    hfThreshold *l_hfThreshold = new hfThreshold();
    l_hfThreshold->setObjectName(QStringLiteral("hfThreshold"));

    connect(l_hfThreshold, SIGNAL(onThreshold(QString)),this, SLOT(onThreshold(QString)));
    l_hfThreshold->installEventFilter(this);

    l_hfThreshold->setWindowIcon(QIcon(":/img/logo_icon.png"));
    l_hfThreshold->setWindowTitle(tr("修改温度"));
    l_hfThreshold->setWindowFlags(Qt::Tool);
    l_hfThreshold->setFocus();
    l_hfThreshold->show();

    m_phfThreshold = l_hfThreshold;

    const QRect &geometry = ui->temperature_set->geometry();
    QPoint pos = ui->temperature_set->mapToGlobal(QPoint(0, 0));
    m_phfThreshold->move(pos.x()+geometry.width()-m_phfThreshold->width(), pos.y()+geometry.height());
}
