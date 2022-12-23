#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_lineEdit_editingFinished()
{
    QFile file1("D:/test.txt");
    file1.open(QIODevice::WriteOnly | QIODevice::Text);

    QApplication::processEvents();

    QString a,b,c,d,e,f,q ;
    a = ui->lineEdit->text();
    b = ui->lineEdit_2->text();
    c = ui->lineEdit_3->text();
    d = ui->lineEdit_4->text();
    e = ui->lineEdit_5->text();
    q = ui->lineEdit_6->text();
    f = ui->textEdit->toPlainText();

    QTextStream out(&file1);
    out<<"F.I.O :"<<a<<"\n";
    out<<"date of birth :"<<b<<"\n";
    out<<"Number of past operations :"<<c<<"\n";
    out<<"Cornea :"<<d<<"\n";
    out<<"Visual acuity (Right eye) :"<<e<<"\n";
    out<<"Visual acuity (Left eye) :"<<q<<"\n";
    out<<"Diagnosis :"<<f<<"\n";
}
