//******************************************************************************
#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H
//******************************************************************************
#include <QComboBox>
#include <QKeyEvent>
#include <QDebug>
//******************************************************************************

class myComboBox: public QComboBox
{
    Q_OBJECT
public:
    myComboBox();
    void wheelEvent(QWheelEvent *);
    void keyPressEvent(QKeyEvent *event);

private:

private slots:
};

#endif // MYCOMBOBOX_H
