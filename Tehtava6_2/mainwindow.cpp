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


void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button -> objectName();
    qDebug() << "Button name:" << name;
    qDebug() << "number1 : " << number1 << Qt::endl;
    qDebug() << "number2 : " << number2 << Qt::endl;
    ui->NumberOne->setText(number1);
    ui->NumberTwo->setText(number2);
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    if(button->objectName() == "buttonDiv" & number1 != "")
    {
        operand = 0;
        state = 2;
        ui->Action->setText(" /");
    }
    else if(button->objectName() == "buttonMul" & number1 != "")
    {
        operand = 1;
        state = 2;
        ui->Action->setText(" *");
    }
    else if(button->objectName() == "buttonMinus" & number1 != "")
    {
        operand = 2;
        state = 2;
        ui->Action->setText(" -");
    }
    else if(button->objectName() == "buttonPlus" & number1 != "")
    {
        operand = 3;
        state = 2;
        ui->Action->setText(" +");
    }
}

void MainWindow::resetLineEdits()
{
    ui->NumberOne->setText("");
    ui->NumberTwo->setText("");
    ui->Result->setText("");
    ui->Action->setText("");
}

void MainWindow::clearAndEnterClickHandler()
{
    float n1 = number1.toFloat();
    float n2 = number2.toFloat();
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    if(button->objectName() == "buttonCLR")
    {
        state = 1;
        number1 = "";
        number2 = "";
        result = 0;
        resetLineEdits();
    }
    else
    {
        switch (operand) {
        case 0:
            result = n1 / n2;
            break;
        case 1:
            result = n1 * n2;
            break;
        case 2:
            result = n1 - n2;
            break;
        case 3:
            result = n1 + n2;
            break;
        }
        ui->Result->setText(QString::number(result));

    }
}

void MainWindow::on_buttonSeven_clicked()
{
    switch (state)
    {
    case 1:
        number1+="7";
        break;
    case 2:
        number2+="7";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_buttonEight_clicked()
{
    switch (state)
    {
    case 1:
        number1+="8";
        break;
    case 2:
        number2+="8";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_buttonNine_clicked()
{
    switch (state)
    {
    case 1:
        number1+="9";
        break;
    case 2:
        number2+="9";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_buttonFour_clicked()
{
    switch (state)
    {
    case 1:
        number1+="4";
        break;
    case 2:
        number2+="4";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_buttonFive_clicked()
{
    switch (state)
    {
    case 1:
        number1+="5";
        break;
    case 2:
        number2+="5";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_buttonSix_clicked()
{
    switch (state)
    {
    case 1:
        number1+="6";
        break;
    case 2:
        number2+="6";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_buttonOne_clicked()
{
    switch (state)
    {
    case 1:
        number1+="1";
        break;
    case 2:
        number2+="1";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_buttonTwo_clicked()
{
    switch (state)
    {
    case 1:
        number1+="2";
        break;
    case 2:
        number2+="2";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_buttonThree_clicked()
{
    switch (state)
    {
    case 1:
        number1+="3";
        break;
    case 2:
        number2+="3";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_buttonZero_clicked()
{
    switch (state)
    {
    case 1:
        number1+="0";
        break;
    case 2:
        number2+="0";
        break;
    }
    numberClickedHandler();
}


void MainWindow::on_buttonCLR_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_buttonENT_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_buttonDiv_clicked()
{
    if(number1!= ""){
        operand = 0;
        state = 2;
        ui->Action->setText("  /");
    }
    addSubMulDivClickHandler();
}


void MainWindow::on_buttonMul_clicked()
{
    if(number1!= ""){
        operand = 1;
        state = 2;
        ui->Action->setText("  *");
    }
    addSubMulDivClickHandler();
}


void MainWindow::on_buttonMinus_clicked()
{
    if(number1!= ""){
        operand = 2;
        state = 2;
        ui->Action->setText("  -");
    }
    addSubMulDivClickHandler();
}


void MainWindow::on_buttonPlus_clicked()
{
    if(number1!= ""){
        operand = 3;
        state = 2;
        ui->Action->setText("  +");
    }
    addSubMulDivClickHandler();
}

