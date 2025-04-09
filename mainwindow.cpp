#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newfile.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_File_triggered()
{
    newFile file;
    file.setModal(true);
    file.exec();

}


void MainWindow::on_actionSave_File_triggered()
{

}

