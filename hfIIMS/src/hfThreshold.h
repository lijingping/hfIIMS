#ifndef HFTHRESHOLD_H
#define HFTHRESHOLD_H

#include <QWidget>

namespace Ui {
class hfThreshold;
}

class hfThreshold : public QWidget
{
    Q_OBJECT

public:
    explicit hfThreshold(QWidget *parent = 0);
    ~hfThreshold();

    void setUnit(QString unit);

private:
    Ui::hfThreshold *ui;
};

#endif // HFTHRESHOLD_H
