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
    Abiturient b(ui->lineEdit->text().toInt(), ui->lineEdit_2->text(),
                 ui->lineEdit_3->text(), ui->lineEdit_4->text(), ui->lineEdit_5->text(),
                    ui->lineEdit_6->text(), ui->lineEdit_7->text().toDouble());
    ui->label->setText("Result: " + b.toString());

}
