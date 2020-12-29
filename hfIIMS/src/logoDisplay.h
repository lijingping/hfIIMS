#ifndef LOGODISPLAY_H
#define LOGODISPLAY_H

#include <QDialog>

namespace Ui {
class logoDisplay;
}

class logoDisplay : public QDialog
{
    Q_OBJECT

public:
    explicit logoDisplay(QWidget *parent = 0);
    ~logoDisplay();

private:
    Ui::logoDisplay *ui;
};

#endif // LOGODISPLAY_H
