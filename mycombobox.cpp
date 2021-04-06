//******************************************************************************
#include "mycombobox.h"
//******************************************************************************
myComboBox::myComboBox()
{
    this->setFocusPolicy(Qt::TabFocus);
}
//******************************************************************************
void myComboBox::wheelEvent(QWheelEvent *)
{

}
//******************************************************************************
void myComboBox::keyPressEvent(QKeyEvent *event)
{
    if(event->key() ==  Qt::Key_Space)
    QComboBox::keyPressEvent(event);
}
