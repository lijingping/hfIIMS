#ifndef MAINTITLE_H
#define MAINTITLE_H

#include <QWidget>
#include <QTimer>
namespace Ui {
class hfMainTitle;
}

class hfMainTitle : public QWidget
{
    Q_OBJECT
signals:
    void OnCloseWindow();
public slots:
    void UpdateTime();

public:
    void paintEvent(QPaintEvent *);
    explicit hfMainTitle(QWidget *parent = 0);
    ~hfMainTitle();
private slots:
    void on_close_clicked();

private:
    Ui::hfMainTitle *ui;
    QTimer m_timer;
};

#endif // MAINTITLE_H
