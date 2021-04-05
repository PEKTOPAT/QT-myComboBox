#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Widget = new QWidget();
    pGridLayout = new QGridLayout;
    pmyComboBox = new myComboBox;
    pGridLayout->addWidget(pmyComboBox);
    Widget->setLayout(pGridLayout);
    setCentralWidget(Widget);


}

MainWindow::~MainWindow()
{
    delete ui;
}
