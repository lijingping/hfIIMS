#include "hfHeartRate.h"

#include <QDebug>
#include <QFile>
#include "ui_hfHeartRate.h"

hfHeartRate::hfHeartRate(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::hfHeartRate)
{
    ui->setupUi(this);

    QFile file2("./res/qss/hfHeartRate.css");
    if (!file2.open(QIODevice::ReadOnly)) {
        qDebug()<<"error css read";
        exit(0);
    }
    QTextStream in(&file2);
    QString css = in.readAll();
    this->setStyleSheet(css);

    originListIndex = 0;
    this->initEcgWaveLineChart();
    this->onShowPushButtonClick();
}

hfHeartRate::~hfHeartRate()
{
    delete ui;
}

void hfHeartRate::initEcgWaveLineChart()
{
    QValueAxis *axisY_ECG = new QValueAxis();
    QValueAxis *axisX_ECG = new QValueAxis();
    ecgSeries = new QLineSeries();
    QChart *ecgWaveLineChart = new QChart();
    ecgWaveLineChart->setBackgroundVisible(false);

    ui->heart_rate_chartView->setChart(ecgWaveLineChart);
//    QChartView *mChartview = new QChartView(ecgWaveLineChart, this);
    ui->heart_rate_chartView->setStyleSheet("background: transparent");

//    ecgWaveLineChart->setBackgroundVisible(false);
//    ui->heart_rate_chartView->setStyleSheet("background: transparent");

    //添加曲线到chart中
    ecgWaveLineChart->addSeries(ecgSeries);

    //设置坐标轴显示范围
    axisY_ECG->setRange(-350, 1200);
    axisX_ECG->setRange(0, 600);
    axisX_ECG->setTickCount(30);//横坐标30个数据点
    axisY_ECG->setTickCount(10);//纵坐标分为10块

    //设置坐标轴的颜色，粗细和设置网格显示
    axisX_ECG->setGridLinePen(QPen(Qt::red, 1, Qt::DashDotDotLine, Qt::SquareCap, Qt::RoundJoin)); //网格样式
    axisY_ECG->setGridLinePen(QPen(Qt::red, 1, Qt::DashDotDotLine, Qt::SquareCap, Qt::RoundJoin));

    axisX_ECG->setLinePen(QPen(Qt::red, 1, Qt::DashDotDotLine, Qt::SquareCap, Qt::RoundJoin));//坐标轴样式
    axisY_ECG->setLinePen(QPen(Qt::red, 1, Qt::DashDotDotLine, Qt::SquareCap, Qt::RoundJoin));

    axisY_ECG->setGridLineVisible(true);//显示线框
    axisX_ECG->setGridLineVisible(true);

    axisX_ECG->setLabelsVisible(false);//不显示label具体数值
    axisY_ECG->setLabelsVisible(false);

    //把坐标轴添加到chart中，第二个参数是设置坐标轴的位置，
    //只有四个选项，下方：Qt::AlignBottom，左边：Qt::AlignLeft，右边：Qt::AlignRight，上方：Qt::AlignTop
    ecgWaveLineChart->addAxis(axisX_ECG, Qt::AlignBottom);
    ecgWaveLineChart->addAxis(axisY_ECG, Qt::AlignLeft);

    //把曲线关联到坐标轴
    ecgSeries->attachAxis(axisX_ECG);
    ecgSeries->attachAxis(axisY_ECG);
    ecgSeries->setColor(QColor(Qt::black));//设置线的颜色
    //ecgSeries->setUseOpenGL(true);//openGL加速  在我的电脑上如果采用加速，绘制速度反倒会变慢
//    setLineChartMargins(ecgWaveLineChart, 2);//设置折线图边距

    ecgWaveLineChart->legend()->hide();//不显示注释
    ui->heart_rate_chartView->setGeometry(-65, -20, 265, 150);
}

void hfHeartRate::onShowPushButtonClick()
{
    originList.clear();
    originList<<-30<<15<<15<<10<<20<<15<<20<<25<<35<<30<<20<<25<<35<<35<<25<<10<<-55<<-160<<-20<<360<<715<<905<<915<<670<<305<<120<<10<<-60<<-80<<-105<<-100<<-105<<-115<<-120<<-120<<-120<<-120<<-130<<-130<<-140<<-150<<-150<<-155<<-145<<-140<<-145<<-135<<-125<<-110<<-90<<-75<<-75<<-60<<-45<<-50<<-40<<-35<<-30<<-25<<-20<<-15<<-10<<-15<<-20<<-10<<-10<<-15<<-25<<-20<<-20<<-25<<-35<<-30<<-25<<-25<<-15<<0<<0<<-15<<15<<30<<-15<<10<<35<<20<<20<<10<<15<<15<<20<<40<<40<<-10<<50<<85<<30<<10<<0<<40<<95<<115<<45<<15<<45<<30<<-35<<25<<55<<20<<55<<55<<20<<0<<-10<<-15<<-10<<35<<50<<-20<<-10<<35<<40<<50<<55<<20<<40<<50<<60<<45<<15<<10<<25<<40<<60<<75<<80<<50<<30<<65<<85<<80<<50<<30<<15<<0<<0<<-5<<10<<15<<-15<<-85<<-120<<80<<435<<765<<885<<795<<500<<240<<105<<-5<<-35<<-45<<-50<<-80<<-90<<-95<<-100<<-105<<-120<<-120<<-115<<-120<<-125<<-115<<-105<<-90<<-80<<-85<<-75<<-55<<-20<<-15<<-10<<-5<<-5<<-5<<-10<<-15<<-30<<-30<<-30<<-20<<-20<<-15<<-20<<-20<<-25<<-40<<-30<<-25<<-30<<-40<<-30<<-20<<-20<<-15<<-25<<-25<<-15<<-10<<-15<<-10<<-15<<-15<<-5<<5<<5<<0<<-5<<-5<<-15<<-10<<-5<<-15<<0<<5<<5<<0<<-10<<-5<<-5<<-10<<-5<<-5<<-10<<-5<<-10<<5<<10<<0<<-10<<-5<<0<<0<<-10<<-5<<5<<0<<-5<<-5<<-10<<-5<<5<<5<<5<<10<<5<<0<<0<<-5<<-5<<0<<0<<-5<<-10<<-20<<-90<<-190<<-35<<300<<655<<865<<835<<555<<255<<100<<-35<<-75<<-85<<-110<<-120<<-110<<-115<<-110<<-110<<-110<<-115<<-125<<-115<<-110<<-125<<-130<<-130<<-125<<-105<<-80<<-80<<-70<<-50<<-45<<-35<<-30<<-30<<-30<<-40<<-40<<-40<<-45<<-30<<-30<<-25<<-25<<-30<<-45<<-45<<-40<<-45<<-35<<-35<<-40<<-45<<-40<<-35<<-30<<-30<<-35<<-40<<-35<<-25<<-20<<-15<<-5<<-10<<-5<<-10<<-10<<0<<0<<-5<<-5<<-10<<-15<<-10<<-10<<-15<<-30<<-20<<-5<<-5<<-5<<-15<<-5<<-5<<-15<<-10<<-10<<-15<<-25<<-20<<-5<<-5<<0<<-5<<0<<-5<<-10<<-10<<-15<<-5<<-5<<-20<<-150<<-135<<120<<465<<795<<915<<755<<400<<175<<55<<-60<<-75<<-105<<-110<<-105<<-100<<-110<<-120<<-115<<-110<<-125<<-140<<-135<<-130<<-140<<-135<<-130<<-135<<-125<<-120<<-105<<-85<<-75<<-55<<-40<<-30<<-30<<-35<<-35<<-40<<-40<<-35<<-35<<-20<<-20<<-30<<-30<<-30<<-35<<-25<<-25<<-40<<-45<<-40<<-45<<-40<<-30<<-30<<-30<<-15<<-15<<-25<<-20<<-20<<-20<<-10<<-5<<-5<<-10<<-15<<-5<<-5<<-15<<-5<<0<<-5<<0<<-5<<-5<<0<<-5<<-5<<0<<-10<<-10<<-5<<-5<<-10<<-15<<-5<<5<<5<<5<<0<<0<<5<<0<<0<<0<<-10<<-10<<-35<<-125<<-160<<85<<475<<815<<960<<855<<480<<180<<60<<-50<<-75<<-100<<-105<<-110<<-105<<-110<<-115<<-110<<-120<<-130<<-135<<-130<<-140<<-140<<-140<<-140<<-125<<-115<<-100<<-90<<-75<<-50<<-35<<-30<<-40<<-40<<-30<<-30<<-20<<-15<<-15<<-20<<-25<<-25<<-20<<-20<<-25<<-25<<-25<<-35<<-30<<-30<<-25<<-15<<-20<<-20<<-10<<-10<<-10<<-20<<-10<<0<<0<<0<<0<<0<<5<<5<<0<<0<<0<<0<<5<<15<<15<<10<<0<<5<<10<<10<<5<<0<<10<<15<<15<<15<<15<<5<<0<<10<<10<<5<<5<<15<<15<<10<<20<<25<<25<<35<<35<<20<<15<<10<<-20<<-110<<-110<<160<<525<<835<<985<<885<<480<<170<<80<<-35<<-50<<-70<<-80<<-85<<-85<<-95<<-95<<-90<<-105<<-100<<-95<<-110<<-120<<-125<<-120<<-115<<-110<<-105<<-90<<-70<<-55<<-50<<-40<<-25<<-20<<-25<<-25<<-20<<-15<<-15<<-40<<-50<<-30<<-30<<-40<<-30<<-25<<-35<<-35<<-35<<-20<<-25<<-30<<-25<<-25<<-30<<-20<<-20<<-25<<-25<<-25<<-20<<-20<<-25<<-25<<-25<<-20<<-20<<-15<<-15<<-25<<-35<<-20<<-20<<-25<<-15<<-10<<-15<<-20<<-20<<-25<<-20<<-15<<-55<<-145<<-190<<45<<430<<785<<970<<890<<495<<185<<70<<-60<<-80<<-110<<-120<<-110<<-125<<-135<<-130<<-140<<-150<<-155<<-150<<-155<<-165<<-165<<-160<<-165<<-170<<-160<<-150<<-135<<-125<<-110<<-90<<-85<<-65<<-55<<-60<<-50<<-45<<-40<<-50<<-40<<-35<<-40<<-40<<-35<<-30<<-35<<-30<<-25<<-40<<-50<<-35<<-30<<-35<<-35<<-35<<-30<<-30<<-15<<-15<<-15<<-10<<-15<<-10<<-10<<-10<<-5<<0<<0<<-5<<-15<<-5<<0<<-5<<-15<<-5<<-5<<0<<5<<5<<0<<-5<<5<<5<<0<<0<<5<<5<<-5<<5<<10<<10<<5<<0<<-60<<-175<<-130<<190<<590<<900<<985<<800<<400<<160<<50<<-55<<-75<<-105<<-115<<-120<<-120<<-125<<-120<<-115<<-120<<-130<<-140<<-140<<-140<<-145<<-150<<-150<<-145<<-145<<-130<<-105<<-95<<-85<<-70<<-55<<-35<<-35<<-35<<-35<<-35<<-35<<-20<<-15<<-25<<-20<<-10<<-10<<-20<<-25<<-25<<-25<<-25<<-25<<-25<<-35<<-35<<-25<<-20<<-15<<-15<<-20<<-15<<-15<<-5<<-5<<0<<0<<-5<<0<<5<<5<<0<<0<<5<<0<<0<<5<<5<<0<<0<<0<<0<<0<<-10<<-5<<0<<-10<<0<<15<<15<<5<<0<<10<<10<<5<<10<<0<<-5<<-5<<-35<<-125<<-160<<125<<540<<885<<1055<<505<<95<<-40<<-55<<-65<<-80<<-85<<-85<<-85<<-95<<-95<<-100<<-100<<-100<<-100<<-120<<-120<<-105<<-90<<-85<<-90<<-65<<-50<<-40<<-30<<-25<<-15<<-15<<-15<<-10<<-5<<-5<<0<<-5<<0<<5<<5<<0<<0<<0<<0<<5<<0<<-10<<-5<<5<<-5<<0<<0<<0<<10<<10<<10<<20<<25<<20<<20<<20<<20<<25<<25<<25<<20<<20<<20<<15<<20<<20<<20<<25<<25<<20<<25<<30<<25<<15<<10<<20<<20<<15<<10<<10<<15<<15<<15<<15<<5<<10<<10<<10<<10<<10<<20<<20<<10<<0<<5<<5<<5<<0<<5<<10<<10<<10<<10<<10<<10<<10<<10<<5<<0<<-15<<-80<<-150<<45<<405<<745<<930<<905<<580<<225<<90<<-30<<-70<<-85<<-90<<-110<<-120<<-110<<-100<<-105<<-105<<-105<<-110<<-120<<-125<<-120<<-115<<-120<<-115<<-110<<-95<<-75<<-60<<-60<<-50<<-45<<-45<<-30<<-30<<-35<<-35<<-30<<-30<<-30<<-30<<-35<<-35<<-35<<-35<<-30<<-35<<-45<<-40<<-40<<-45<<-45<<-40<<-35<<-25<<-20<<-25<<-25<<-20<<-10<<-10<<-10<<-15<<-10<<-15<<-20<<-15<<-10<<0<<0<<0<<-5<<-10<<-5<<0<<-10<<-15<<0<<0<<-15<<0<<5<<0<<-5<<-10<<-10<<0<<-5<<-20<<-15<<-20<<-20<<-5<<0<<-10<<-10<<0<<-5<<-15<<-25<<-25<<-20<<-25<<-30<<-20<<-20<<-25<<-20<<-10<<-10<<-20<<-25<<-20<<-20<<-15<<-10<<-20<<-30<<-45<<-105<<-200<<-30<<335<<675<<900<<910<<625<<240<<85<<-20<<-90<<-105<<-125<<-135<<-135<<-135<<-135<<-140<<-140<<-145<<-150<<-155<<-155<<-155<<-165<<-165<<-165<<-145<<-125<<-110<<-100<<-90<<-80<<-75<<-70<<-65<<-65<<-65<<-50<<-50<<-50<<-50<<-45<<-40<<-45<<-45<<-55<<-45<<-40<<-50<<-45<<-50<<-55<<-60<<-60<<-55<<-50<<-45<<-40<<-40<<-30<<-30<<-30<<-35<<-40<<-25<<-20<<-15<<-20<<-25<<-20<<-30<<-20<<-15<<-20<<-15<<-20<<-20<<-20<<-20<<-10<<-10<<-25<<-20<<-10<<-15<<-25<<-30<<-20<<-20<<-30<<-20<<-15<<-15<<-5<<-5<<-15<<-10<<-5<<-10<<-5<<-10<<-30<<-30<<-60<<-160<<-165<<110<<495<<830<<975<<850<<455<<170<<45<<-80<<-95<<-115<<-125<<-125<<-125<<-135<<-130<<-140<<-145<<-155<<-150<<-150<<-160<<-165<<-165<<-170<<-170<<-160<<-150<<-135<<-115<<-80<<-60<<-50<<-50<<-40<<-40<<-35<<-35<<-40<<-35<<-35<<-30<<-20<<-20<<-20<<-20<<-25<<-25<<-20<<-20<<-15<<-15<<-25<<-15<<-5<<-10<<-20<<-15<<0<<0<<-10<<-10<<-15<<-10<<-10<<-15<<-5<<-5<<-5<<0<<-10<<10<<15<<0<<-5<<-5<<0<<0<<0<<5<<5<<0<<-30<<-110<<-170<<60<<435<<755<<960<<930<<545<<180<<70<<-30<<-65<<-90<<-110<<-105<<-115<<-115<<-115<<-125<<-130<<-130<<-135<<-140<<-140<<-145<<-145<<-140<<-140<<-140<<-130<<-115<<-115<<-90<<-70<<-60<<-50<<-40<<-40<<-50<<-40<<-40<<-45<<-35<<-30<<-30<<-15<<-15<<-30<<-30<<-25<<-30<<-45<<-40<<-35<<-35<<-45<<-45<<-40<<-25<<-15<<-20<<-25<<-25<<-15<<-15<<-10<<-10<<-10<<-10<<-10<<-10;
    originListSize = originList.count();

    ecgWaveDrawTimer = new QTimer(this);//定时任务
    connect(ecgWaveDrawTimer, SIGNAL(timeout()), this, SLOT(oneTimeOutAction()));
    ecgWaveDrawTimer->start(8);//8ms执行一次
}

void hfHeartRate::oneTimeOutAction() {
    //这里主要是实验用，当文本框数据绘制完毕后就停止绘制，在实际中可以没有这一行代码
    if (originListIndex >= originListSize)
    {
        ecgWaveDrawTimer->stop();
    }
    else {
        qint16 tempInt16 = originList[originListIndex];
        //qDebug() << QString("数据为：%1").arg(tempInt16);
        drawEcgWave(originListIndex, tempInt16);
        originListIndex++;
    }
}

//注意axis_x的输入，不要超过int的上限
void hfHeartRate::drawEcgWave(int axis_x, qint16 data) {
    int timesCounts = axis_x / 600;//查看数据是否超过了600
    if (timesCounts > 0)//如果第一次界面绘制结束，之后存在了600个点
    {
        axis_x = axis_x - timesCounts * 600;
        ecgPointBuffer[axis_x].setY(data);//更改已有点的Y值

    }
    else//如果是第一次界面
    {
        ecgPointBuffer.append(QPointF(axis_x, data));
    }
    ecgSeries->replace(ecgPointBuffer);
}


//设置chartView的边缘宽度
void hfHeartRate::setLineChartMargins(QChart *chart, int margin) {
    QMargins m_Margin;
    m_Margin.setLeft(margin);
    m_Margin.setBottom(margin);
    m_Margin.setRight(margin);
    m_Margin.setTop(margin);
    chart->setMargins(m_Margin);
}


