#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "abiturient.h"

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

void MainWindow::on_pushButton_clicked()
{
    QString text = ui->lineEdit->text();
    ui->label->setText(text);
}

void MainWindow::on_pb2_clicked()
{
    QString text1 = ui->lineEdit_1->text();
    QString text2 = ui->lineEdit_2->text();

    double num1 = text1.toDouble();
    double num2 = text2.toDouble();

    double sum = num1 + num2;
    ui->lbl2->setText("Result: " + QString::number(sum));
}


void MainWindow::on_pushButton_2_clicked()
{
    QApplication::exit();
}


void MainWindow::on_pushButton_3_clicked()
{
    Abiturient b(ui->le1->text().toInt(), ui->le2->text(),
                 ui->le3->text(), ui->le4->text(), ui->le5->text(),
                 ui->le6->text(), ui->le7->text().toDouble());
    ui->label_2->setText("Result: " + b.toString());
}

