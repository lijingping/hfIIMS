#ifndef HFTEMPERATURE_H
#define HFTEMPERATURE_H

#include <QFrame>
#include <QtCharts>
using namespace QtCharts;

namespace Ui {
class hfTemperature;
}

class hfTemperature : public QFrame
{
    Q_OBJECT

public:
    explicit hfTemperature(QWidget *parent = 0);
    ~hfTemperature();

private:
    Ui::hfTemperature *ui;
    QChart *mCharts;
    QChartView *mChartview ;
    QValueAxis *mAxisX;
    QValueAxis *mAxisY;
    QLineSeries *mData;

};

#endif // HFTEMPERATURE_H
