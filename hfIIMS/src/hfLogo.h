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

private slots:
    void on_logo_enter_clicked();
    void on_logo_modify_clicked();
    void on_logo_register_clicked();

private:
    Ui::hfLogo *ui;
};

#endif // HFLOGO_H
