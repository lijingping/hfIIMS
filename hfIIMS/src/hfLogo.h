#ifndef HFLOGO_H
#define HFLOGO_H

#include <QWidget>

namespace Ui {
class hfLogo;
}

class hfLogo : public QWidget
{
    Q_OBJECT

public:
    explicit hfLogo(QWidget *parent = 0);
    ~hfLogo();

private:
    Ui::hfLogo *ui;
};

#endif // HFLOGO_H
