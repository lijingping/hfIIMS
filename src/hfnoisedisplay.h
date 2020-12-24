#ifndef HFNOISEDISPLAY_H
#define HFNOISEDISPLAY_H

#include <QFrame>
#include <QtCharts>
using namespace QtCharts;

namespace Ui {
class hfNoiseDisplay;
}

class hfNoiseDisplay : public QFrame
{
    Q_OBJECT

public:
    explicit hfNoiseDisplay(QWidget *parent = 0);
    ~hfNoiseDisplay();

private:
    Ui::hfNoiseDisplay *ui;
    QChart *mCharts;
    QChartView *mChartview ;
    QValueAxis *mAxisX;
    QValueAxis *mAxisY;
    QLineSeries *mData;

};

#endif // HFNOISEDISPLAY_H
