#ifndef HFVOLUMESET_H
#define HFVOLUMESET_H

#include <QFrame>

namespace Ui {
class hfVolumeSet;
}

class hfVolumeSet : public QFrame
{
    Q_OBJECT

public:
    explicit hfVolumeSet(QWidget *parent = 0);
    ~hfVolumeSet();

private:
    Ui::hfVolumeSet *ui;
};

#endif // HFVOLUMESET_H
