#ifndef HFMAINTITLE_H
#define HFMAINTITLE_H

#include <QFrame>

namespace Ui {
class hfMainTitle;
}

class hfMainTitle : public QFrame
{
    Q_OBJECT

public:
    explicit hfMainTitle(QWidget *parent = 0);
    ~hfMainTitle();

private:
    Ui::hfMainTitle *ui;
};

#endif // HFMAINTITLE_H
