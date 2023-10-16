#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , timer(new QTimer(this)),
      seconds(0)
{
    ui->setupUi(this);

    connect(ui->start, &QPushButton::clicked, this, &MainWindow::startTimer);
    connect(ui->stop, &QPushButton::clicked, this, &MainWindow::stopTimer);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startTimer()
{
    seconds = 0;
    timer->start(1000);

}

void MainWindow::stopTimer()
{
    timer->stop();
    ui->teksti->setText("Ajastin keskeytetty");
}

void MainWindow::updateTime()
{
    seconds++;
    ui->teksti->setText(QString("Aikaa kulunut %1 sekuntia").arg(seconds));
}


