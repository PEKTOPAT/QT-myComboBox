#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <mycombobox.h>
#include <QComboBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWidget *Widget;
    QGridLayout *pGridLayout;
    myComboBox *pmyComboBox;
    QComboBox *ComboBox;
};

#endif // MAINWINDOW_H
