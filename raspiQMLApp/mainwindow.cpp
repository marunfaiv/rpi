#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->txtLabel->setText("");

    click = true;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_clicked()
{
    if(click == true)
    {
        ui->txtLabel->setText("TEST");
        click = false;
    }else
    {
        ui->txtLabel->setText("");
        click = true;
    }
}
