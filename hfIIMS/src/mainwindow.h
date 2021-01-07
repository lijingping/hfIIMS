#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "mainwindow.h"
#include <QMainWindow>

namespace Ui {
class hfMainWindow;
}

class hfMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit hfMainWindow(QWidget *parent = 0);
    ~hfMainWindow();
    bool eventFilter( QObject * obj, QEvent * ev );
    void paintEvent(QPaintEvent *event);
public slots:
    void OnCloseWindow();

private slots:
    void on_oil_btn_clicked();

private:
    Ui::hfMainWindow *ui;
};

#endif // MAINWINDOW_H

void hfMainWindow::on_oil_btn_clicked()
{

}
