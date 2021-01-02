#include "hfwetdisplay.h"
#include "ui_hfwetdisplay.h"
#include "hfThreshold.h"

hfWetDisplay::hfWetDisplay(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::hfWetDisplay),
    m_phfThreshold(NULL)
{
    QFile file2("./res/qss/hfwetdisplay.css");
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
    mCharts->setObjectName("wetdisplay");
    mCharts->setBackgroundVisible(false);
    mChartview->setStyleSheet("background: transparent");

    int l_nRow = 13;
    mAxisX = new QValueAxis();
    mAxisX->setLabelFormat("%g");
    mAxisX->setRange(0,60);
    mAxisX->setTickCount(l_nRow);
    mCharts->addAxis(mAxisX,Qt::AlignBottom);

    mAxisY = new QValueAxis();
    mAxisY->setLabelFormat("%g%%");
    mAxisY->setRange(0,100);
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

hfWetDisplay::~hfWetDisplay()
{
    delete ui;
}

void hfWetDisplay::onThreshold(QString value)
{
    qDebug() << value;
}

void hfWetDisplay::on_wet_set_clicked()
{
    if (m_phfThreshold){
        m_phfThreshold->close();
    }

    hfThreshold *l_hfThreshold = new hfThreshold();
    l_hfThreshold->setObjectName(QStringLiteral("hfThreshold"));

    connect(l_hfThreshold, SIGNAL(onThreshold(QString)),this, SLOT(onThreshold(QString)));
    l_hfThreshold->installEventFilter(this);

    l_hfThreshold->setWindowIcon(QIcon(":/img/logo_icon.png"));
    l_hfThreshold->setWindowTitle(tr("修改湿度"));
    l_hfThreshold->setWindowFlags(Qt::Tool);
    l_hfThreshold->setFocus();
    l_hfThreshold->setUnit("RH.%");
    l_hfThreshold->show();

    m_phfThreshold = l_hfThreshold;

    const QRect &geometry = ui->wet_set->geometry();
    QPoint pos = ui->wet_set->mapToGlobal(QPoint(0, 0));
    m_phfThreshold->move(pos.x()+geometry.width()-m_phfThreshold->width(), pos.y()+geometry.height());
}
