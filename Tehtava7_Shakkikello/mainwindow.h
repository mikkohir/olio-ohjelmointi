#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();

private slots:
    void on_Plr1Switch_clicked();

    void on_Plr2Switch_clicked();

    void on_pushButton_clicked();


    void on_StopButton_clicked();

    void on_TwoMinutes_clicked();

    void on_FiveMinutes_clicked();

private:
    Ui::MainWindow *ui;
    short gameTime=0;
    short currentPlayer=1;
    short player1Time;
    short player2Time;
    short runState;
    QTimer *pQTimer;
    void updateProgressBar();
    void setGameInfoText(QString,short);



};
#endif // MAINWINDOW_H
