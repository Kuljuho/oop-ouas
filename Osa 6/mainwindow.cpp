#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , countNumber(0)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_count_clicked()
{
    countNumber++;
    ui->lineEdit->setText(QString::number(countNumber));
}

void MainWindow::on_reset_clicked()
{
    countNumber = 0;
    ui->lineEdit->setText(QString::number(countNumber));
}
