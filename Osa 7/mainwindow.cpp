#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->progressPlayer1->setMinimum(0);
    ui->progressPlayer1->setMaximum(100);
    ui->progressPlayer1->setValue(100);
    ui->progressPlayer2->setMinimum(0);
    ui->progressPlayer2->setMaximum(100);
    ui->progressPlayer2->setValue(100);

    currentPlayer = 1;
    gameTime = 2 * 60 * 1000;
    player1Time = gameTime;
    player2Time = gameTime;
    bool isFirstStart = true;

    pQTimer = new QTimer(this);
    connect(pQTimer, &QTimer::timeout, this, &MainWindow::updateTime);

    connect(ui->twoMinutes, &QPushButton::clicked, this, &MainWindow::setTwoMinutes);
    connect(ui->fiveMinutes, &QPushButton::clicked, this, &MainWindow::setFiveMinutes);
    connect(ui->startButton, &QPushButton::clicked, this, &::MainWindow::startGame);
    connect(ui->stopButton, &QPushButton::clicked, this, &::MainWindow::stopGame);
    connect(ui->switchPlayer1, &QPushButton::clicked, this, &::MainWindow::switchPlayer);
    connect(ui->switchPlayer2, &QPushButton::clicked, this, &::MainWindow::switchPlayer);
    connect(ui->resetButton, &QPushButton::clicked, this, &::MainWindow::resetGame);

    setGameInfoText("Select time and press start", 14);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateProgressBar() {
    int player1Percentage = (player1Time * 100) / gameTime;
    int player2Percentage = (player2Time * 100) / gameTime;

    ui->progressPlayer1->setValue(player1Percentage);
    ui->progressPlayer2->setValue(player2Percentage);
}

void MainWindow::setTwoMinutes()
{
    gameTime = 2 * 60 * 1000;
    setGameInfoText("Game Time set to 2 minutes", 14);
}

void MainWindow::setFiveMinutes()
{
    gameTime = 5 * 60 * 1000;
    setGameInfoText("Game Time set to 5 minutes", 14);
}

void MainWindow::updateTime() {
    qDebug() << "Game time: " << gameTime;
    if (currentPlayer == 1) {
        player1Time -= 1000;
        qDebug() << "Player 1 time: " << player1Time;
        if (player1Time <= 0) {
            timeout();
            return;
        }
        int player1Percentage = (player1Time * 100) / gameTime;
        ui->progressPlayer1->setValue(player1Percentage);
    } else {
        player2Time -= 1000;
        qDebug() << "Player 2 time: " << player2Time;
        if (player2Time <= 0) {
            timeout();
            return;
        }
        int player2Percentage = (player2Time * 100) / gameTime;
        ui->progressPlayer2->setValue(player2Percentage);
    }
}

void MainWindow::startGame() {
    if (isFirstStart) {
        player1Time = gameTime;
        player2Time = gameTime;
        isFirstStart = false;
    }
    pQTimer->start(1000);
    setGameInfoText("Game Started!", 14);
}

void MainWindow::stopGame() {
    pQTimer->stop();
    setGameInfoText("Game Stopped!", 14);
}

void MainWindow::resetGame() {
    pQTimer->stop();
    isFirstStart = true;
    player1Time = gameTime;
    player2Time = gameTime;
    ui->progressPlayer1->setValue(100);
    ui->progressPlayer2->setValue(100);
    setGameInfoText("Game reseted", 14);
}

void MainWindow::switchPlayer() {
    currentPlayer = (currentPlayer == 1) ? 2 : 1;
    setGameInfoText("Switched Player!", 14);
}

void MainWindow::timeout() {
    if (currentPlayer == 1) {
        ui->progressPlayer1->setValue(0);
    } else {
        ui->progressPlayer2->setValue(0);
    }
    pQTimer->stop();
    setGameInfoText("Time's up for Player " + QString::number(currentPlayer) + "!", 14);
}

void MainWindow::setGameInfoText(QString teksti, short f) {
    QFont font;
    font.setPointSize(f);
    ui->info->setFont(font);
    ui->info->setText(teksti);
}
