#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setGameInfoText("Select playtime and press Start Game!",15);
    player1Time=100;
    player2Time=100;
}


void MainWindow::on_pushButton_clicked()
{
    runState=1;
    setGameInfoText("Game ongoing...",15);
    pQTimer = new QTimer();
    connect(pQTimer,SIGNAL(timeout()),this,SLOT(timeout()));
    updateProgressBar();
}


void MainWindow::updateProgressBar()
{
    switch (gameTime)
    {
    case 1:
        pQTimer->start(1200);
        break;
    case 2:
        pQTimer->start(3000);
        break;
    }

    //gameTime on aktiivisena ylesesti
    //player1time ja 2time laskee aktiivisesti kunnes ne on nollia
    //kun jompikumpi on käyttäny aikansa kokonaan tai jompi kumpi enemmän nii gg
}

void MainWindow::timeout()
{
    switch (currentPlayer)
    {
      case 1:
        player1Time--;
        ui->p1Progress->setValue(player1Time);
        if(player1Time==0)
        {
            pQTimer->stop();
            setGameInfoText("Player 2 WON!!",20);
        }
        break;
      case 2:
        player2Time--;
        ui->p2Progress->setValue(player2Time);
        if(player2Time==0)
        {
            pQTimer->stop();
            setGameInfoText("Player 1 WON!!",20);
        }
        break;
    }
}

void MainWindow::setGameInfoText(QString info, short fontti)
{
    QFont font;
    font.setPointSize(fontti);
    font.setBold(true);
    ui->InfoText->setText(info);
    ui->InfoText->setFont(font);
}

void MainWindow::on_TwoMinutes_clicked()
{
    setGameInfoText("2 minutes, ready to play...",15);
    ui->p1Progress->setValue(player1Time);
    ui->p2Progress->setValue(player2Time);
    gameTime=1;
}


void MainWindow::on_FiveMinutes_clicked()
{
    setGameInfoText("5 minutes, ready to play...",15);
    ui->p1Progress->setValue(player1Time);
    ui->p2Progress->setValue(player2Time);
    gameTime=2;
}


void MainWindow::on_StopButton_clicked()
{
    if(runState == 1)
    {
    delete pQTimer;
    pQTimer=nullptr;
    player1Time=100;
    player2Time=100;
    setGameInfoText("Game stopped, new game via Start Game.",15);
    }
    else
    {
    setGameInfoText("There's nothing for you to stop, is there?",15);
    }
}


void MainWindow::on_Plr1Switch_clicked()
{
    if(runState == 1)
    {
    pQTimer->stop();
    currentPlayer=2;
    updateProgressBar();
    }
    else
    {
    setGameInfoText("No players to switch, start a game first",10);
    }
}


void MainWindow::on_Plr2Switch_clicked()
{
    if(runState == 1)
    {
    pQTimer->stop();
    currentPlayer=1;
    updateProgressBar();
    }
    else
    {
    setGameInfoText("No players to switch, start a game first",10);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}




