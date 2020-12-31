#ifndef HFMODIFYUSER_H
#define HFMODIFYUSER_H

#include <QWidget>

namespace Ui {
class hfModifyUser;
}

class hfModifyUser : public QWidget
{
    Q_OBJECT

public:
    explicit hfModifyUser(QWidget *parent = 0);
    ~hfModifyUser();

    void refreshData();

signals:
    void OnUpdateUserName();

private slots:
    void on_modify_save_clicked();

private:
    Ui::hfModifyUser *ui;
};

#endif // HFMODIFYUSER_H
