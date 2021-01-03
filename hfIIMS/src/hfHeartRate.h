#ifndef HFHEARTRATE_H
#define HFHEARTRATE_H

#include <QFrame>
#include <QtCharts>
using namespace QtCharts;

namespace Ui {
class hfHeartRate;
}

class hfHeartRate : public QFrame
{
    Q_OBJECT

public:
    explicit hfHeartRate(QWidget *parent = 0);
    ~hfHeartRate();

private:
    void initEcgWaveLineChart();
    void setLineChartMargins(QChart *chart, int margin);
    void drawEcgWave(int x,qint16 data);

private slots:
    void oneTimeOutAction();
    void onShowPushButtonClick();

private:
    Ui::hfHeartRate *ui;

    QChart *ecgWaveLineChart;
    QValueAxis *axisX_ECG;
    QValueAxis *axisY_ECG;
    QLineSeries *ecgSeries;
    QList<int> originList;

    QTimer *ecgWaveDrawTimer;

    int originListSize;
    int originListIndex;

    QVector<QPointF> ecgPointBuffer;
};

#endif // HFHEARTRATE_H
