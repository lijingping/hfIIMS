#ifndef HFHEARTRATE_H
#define HFHEARTRATE_H

#include <QFrame>

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
    Ui::hfHeartRate *ui;
};

#endif // HFHEARTRATE_H
