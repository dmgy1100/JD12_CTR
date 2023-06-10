#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "config.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(APP_NAME);
}

MainWindow::~MainWindow()
{
    delete ui;
}

