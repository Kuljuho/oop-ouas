#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProgressBar>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeout();

private:
    Ui::MainWindow *ui;

    int player1Time;
    int player2Time;
    int currentPlayer;
    int gameTime;
    bool isFirstStart;
    QTimer * pQTimer;

    void updateProgressBar();
    void setGameInfoText(QString, short);
    void updateTime();
    void setTwoMinutes();
    void setFiveMinutes();
    void startGame();
    void stopGame();
    void switchPlayer();
    void resetGame();


public slots:

private slots:
};
#endif // MAINWINDOW_H
