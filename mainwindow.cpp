#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <sstream>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
    object->createDisk("panfilito",1024,512,'c');
}

void MainWindow::on_pushButton_2_clicked()
{
    object->diskSize("panfilito(c)");

}

void MainWindow::on_pushButton_3_clicked()
{

}


void MainWindow::on_pushButton_4_clicked()
{
for(int x=0;x<object->disk.CantBloques;x++)
{
    stringstream ss;
    string mystring;
    ss << object->bitmap[x];
    ss >> mystring;
    QString myqstring=QString::fromStdString(mystring);
    ui->listWidget->addItem(myqstring);
}
//object->printBitmap();
}
