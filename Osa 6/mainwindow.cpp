#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    foreach(QPushButton* button, this->findChildren<QPushButton*>())
    {
        if(button->objectName().startsWith("N"))
        {
            connect(button, &QPushButton::clicked, this, &MainWindow::on_numberButton_clicked);
        }
    }

    connect(ui->add, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);

    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);

    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::result);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::result()
{

    bool ok1, ok2;
    double n1 = ui->num1->text().toDouble(&ok1);
    double n2 = ui->num2->text().toDouble(&ok2);

        if (!ok1 || !ok2) {
            ui->result->setText("Error");
            return;
        }

        double resultValue = 0;
        switch(operand) {
        case 0:
            resultValue = n1 + n2;
            break;
        case 1:
            resultValue = n1 - n2;
            break;
        case 2:
            resultValue = n1 * n2;
            break;
        case 3:
            if (n2 != 0) {
                resultValue = n1 / n2;
            } else {
                ui->result->setText("Error");
                return;
            }
            break;
        default:
            ui->result->setText("Error");
            return;
        }
        ui->result->setText(QString::number(resultValue));

}

void MainWindow::on_numberButton_clicked()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());

    if(button)
    {
        QLineEdit *currentEdit = (operand == -1) ? ui->num1 : ui->num2;
        currentEdit->setText(currentEdit->text().append(button->text()));
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    if(button->objectName() == "clear")
    {
        ui->num1->clear();
        ui->num2->clear();
        ui->result->clear();
        operand = -1;
    }
    else if(button->objectName() == "enter")
    {
        ui->num2->setText(ui->num1->text());
        ui->num1->clear();
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    if(button->objectName() == "add")
    {
        operand = 0;
    }
    else if(button->objectName() == "sub")
    {
        operand = 1;
    }
    else if(button->objectName() == "mul")
    {
        operand = 2;
    }
    else if(button->objectName() == "div")
    {
        operand = 3;
    }
}

void MainWindow::resetLineEdits()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

