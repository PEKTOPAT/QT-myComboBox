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
    ComboBox = new QComboBox;
    ComboBox->addItems(QStringList() << "1" << "2" << "3" << "4");
    pGridLayout->addWidget(pmyComboBox,0, 1);
    pGridLayout->addWidget(ComboBox,0, 0);
    Widget->setLayout(pGridLayout);
    setCentralWidget(Widget);


}

MainWindow::~MainWindow()
{
    delete ui;
}
