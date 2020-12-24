#ifndef HFWETDISPLAY_H
#define HFWETDISPLAY_H

#include <QFrame>
#include <QtCharts>

namespace Ui {
class hfWetDisplay;
}

class hfWetDisplay : public QFrame
{
    Q_OBJECT

public:
    explicit hfWetDisplay(QWidget *parent = 0);
    ~hfWetDisplay();

private:
    Ui::hfWetDisplay *ui;
    QChart *mCharts;
    QChartView *mChartview ;
    QValueAxis *mAxisX;
    QValueAxis *mAxisY;
    QLineSeries *mData;
};

#endif // HFWETDISPLAY_H
