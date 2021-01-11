#ifndef HFULTRAVIOLETRAY_H
#define HFULTRAVIOLETRAY_H

#include <QFrame>

namespace Ui {
class hfUltravioletRay;
}

class hfUltravioletRay : public QFrame
{
    Q_OBJECT

public:
    explicit hfUltravioletRay(QWidget *parent = 0);
    ~hfUltravioletRay();

private:
    Ui::hfUltravioletRay *ui;
};

#endif // HFULTRAVIOLETRAY_H
