#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = new DBConnection();

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(fillData()));
}

MainWindow::~MainWindow()
{
    delete db;
    delete ui;
}


void MainWindow::fillData()
{
    QStringList list = db->getData();
    for (int i=0; i<list.length(); i++)
    {
        ui->textEdit->insertPlainText(list[i]);
    }
}
