#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , kurssi(0.084)
{
    ui->setupUi(this);

    //lähettäjän osoite, lähettäjän signaali, vastaanottajan osoite, vastaanottajan
    //slot funktio
    connect(ui->Euro2Crone,SIGNAL(clicked()),
            this,SLOT(handleEuro2Crone()));

    connect(ui->Crone2Euro,SIGNAL(clicked()),
            this,SLOT(handleCrone2Euro()));

}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::handleCrone2Euro()
{
    QString luku = ui->tuloslaatikko->text();
    float tulos = luku.toFloat();
    tulos = tulos * kurssi;
    ui->muunnostulos->setText(QString::number(tulos));
}

void MainWindow::handleEuro2Crone()
{
    QString luku = ui->tuloslaatikko->text();
    float tulos = luku.toFloat();
    tulos = tulos / kurssi;
    ui->muunnostulos->setText(QString::number(tulos));
}

