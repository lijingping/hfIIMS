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
    void OnUpdateUserName();

public:
    void paintEvent(QPaintEvent *);
    explicit hfMainTitle(QWidget *parent = 0);
    ~hfMainTitle();
private slots:
    void on_close_clicked();

    void on_user_name_clicked();

private:
    Ui::hfMainTitle *ui;
    QTimer m_timer;
    void* m_phfModifyUser;
};

#endif // MAINTITLE_H
