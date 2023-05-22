
#include "mainwindow.h"
#include "./ui_mainwindow.h"


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



void MainWindow::on_pushButton_2_clicked()
{
    close();
}


void MainWindow::on_tableWidget_cellActivated(int row, int column)
{

}


void MainWindow::on_pushButton_clicked()
{
    if (ui->comboBox->currentIndex() == 0 || ui->comboBox->currentIndex() == 2  ) {
        ui->tableWidget->setItem(1, 0, new QTableWidgetItem(QString("M3")));
            ui->tableWidget->setItem(2, 0, new QTableWidgetItem(QString("256")));
        ui->tableWidget->setItem(3, 0, new QTableWidgetItem(QString("3")));

            ui->tableWidget->setItem(1, 1, new QTableWidgetItem(QString("5:10")));
            ui->tableWidget->setItem(2, 1, new QTableWidgetItem(QString("5:20")));
            ui->tableWidget->setItem(3, 1, new QTableWidgetItem(QString("5:15")));

            ui->tableWidget->setItem(1, 2, new QTableWidgetItem(QString("2min")));
            ui->tableWidget->setItem(2, 2, new QTableWidgetItem(QString("1min")));
            ui->tableWidget->setItem(3, 2, new QTableWidgetItem(QString("3min")));

            ui->tableWidget->setItem(1, 3, new QTableWidgetItem(QString("8min")));
            ui->tableWidget->setItem(2, 3, new QTableWidgetItem(QString("5min")));
            ui->tableWidget->setItem(3, 3, new QTableWidgetItem(QString("7min")));

            ui->tableWidget->setItem(1, 4, new QTableWidgetItem(QString("22:10")));
            ui->tableWidget->setItem(2, 4, new QTableWidgetItem(QString("20:35")));
            ui->tableWidget->setItem(3, 4, new QTableWidgetItem(QString("20:30")));

    }
    if (ui->comboBox->currentIndex() == 1 || ui->comboBox->currentIndex() == 3 || ui->comboBox->currentIndex() == 4 ){

            ui->tableWidget->setItem(1, 0, new QTableWidgetItem(QString("71")));
            ui->tableWidget->setItem(2, 0, new QTableWidgetItem(QString("12")));

            ui->tableWidget->setItem(1, 1, new QTableWidgetItem(QString("5:10")));
            ui->tableWidget->setItem(2, 1, new QTableWidgetItem(QString("5:20")));

            ui->tableWidget->setItem(1, 2, new QTableWidgetItem(QString("2min")));
            ui->tableWidget->setItem(2, 2, new QTableWidgetItem(QString("1min")));
            ui->tableWidget->setItem(1, 3, new QTableWidgetItem(QString("8min")));
            ui->tableWidget->setItem(2, 3, new QTableWidgetItem(QString("5min")));
            ui->tableWidget->setItem(1, 4, new QTableWidgetItem(QString("20:10")));
            ui->tableWidget->setItem(2, 4, new QTableWidgetItem(QString("20:12")));
    }

    if (ui->comboBox->currentIndex() == 5) {
            ui->tableWidget->setItem(1, 0, new QTableWidgetItem(QString("256")));
            ui->tableWidget->setItem(2, 0, new QTableWidgetItem(QString("37")));
            ui->tableWidget->setItem(1, 1, new QTableWidgetItem(QString("5:10")));
            ui->tableWidget->setItem(2, 1, new QTableWidgetItem(QString("5:20")));

            ui->tableWidget->setItem(1, 2, new QTableWidgetItem(QString("2min")));
            ui->tableWidget->setItem(2, 2, new QTableWidgetItem(QString("1min")));
            ui->tableWidget->setItem(1, 3, new QTableWidgetItem(QString("8min")));
            ui->tableWidget->setItem(2, 3, new QTableWidgetItem(QString("5min")));
            ui->tableWidget->setItem(1, 4, new QTableWidgetItem(QString("20:10")));
            ui->tableWidget->setItem(2, 4, new QTableWidgetItem(QString("20:12")));


    }
}

