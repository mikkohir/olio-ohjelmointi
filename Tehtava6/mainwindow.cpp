#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Count_clicked()
{
    x++;
    QString s = QString::number(x);
    qDebug() << "Painiketta painettu";
    ui->numberView->setText(""+s+"");
}


void MainWindow::on_Reset_clicked()
{
    x=0;
    ui->numberView->setText("0");
}



