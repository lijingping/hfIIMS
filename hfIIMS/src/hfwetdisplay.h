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

public slots:
    void onThreshold(QString value);

private slots:
    void on_wet_set_clicked();

private:
    Ui::hfWetDisplay *ui;
    QChart *mCharts;
    QChartView *mChartview ;
    QValueAxis *mAxisX;
    QValueAxis *mAxisY;
    QLineSeries *mData;
    QWidget *m_phfThreshold;
};

#endif // HFWETDISPLAY_H
