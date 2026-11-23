#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "token.h"
#include <qmainwindow.h>
#include <qobject.h>
#include <QString>

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

short secure = 0;
bool f = true;
std::vector<tokens> tokensArray;
std::vector<char> entrada;

void MainWindow::on_pushButton_clicked()
{
    if(f == true){
    QMainWindow::close();
    }else{

    }
}

void MainWindow::on_calculo_textChanged()
{
    
}

void MainWindow::on_pushButton_2_clicked()
{
    std::string arregloCompleto = ui->calculo->toPlainText().toStdString();

    for(unsigned int i = 0; i < arregloCompleto.size(); i++){
        if(arregloCompleto[i] != ' '){
            entrada.push_back(arregloCompleto[i]);
            tokensArray.push_back(tokens(entrada));
        }
    }
}