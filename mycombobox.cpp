//******************************************************************************
#include "mycombobox.h"
//******************************************************************************
myComboBox::myComboBox()
{
    this->setFocusPolicy(Qt::NoFocus);
}

void myComboBox::wheelEvent(QWheelEvent *e)
{
    if(hasFocus())
        QComboBox::wheelEvent(e);
}
