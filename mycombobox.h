//******************************************************************************
#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H
//******************************************************************************
#include <QComboBox>
//******************************************************************************

class myComboBox: public QComboBox
{
    Q_OBJECT
public:
    myComboBox();
    void wheelEvent(QWheelEvent *e);

private:

private slots:
};

#endif // MYCOMBOBOX_H
