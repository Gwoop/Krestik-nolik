#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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

int k1 = 0;
int k2 = 0;
int k3 = 0;
int k4 = 0;
int k5 = 0;
int k6 = 0;
int k7 = 0;
int k8 = 0;
int k9 = 0;


void MainWindow::on_pushButton_clicked()
{
    k1++;
    if (k1 == 1)
    {
        ui-> pushButton ->setText("X");

    }
    if (k1 == 2)
    {
        ui-> pushButton ->setText("O");

    }

    if (k1 == 3)
    {
        ui-> pushButton ->setText("");
        k1 = 0;

    }
}

void MainWindow::on_pushButton_2_clicked()
{
    k2++;
    if (k2 == 1)
    {
        ui-> pushButton_2 ->setText("X");

    }
    if (k2 == 2)
    {
        ui-> pushButton_2 ->setText("O");

    }

    if (k2 == 3)
    {
        ui-> pushButton_2 ->setText("");
        k2 = 0;

    }
}

void MainWindow::on_pushButton_3_clicked()
{
    k3++;
    if (k3 == 1)
    {
        ui-> pushButton_3 ->setText("X");

    }
    if (k3 == 2)
    {
        ui-> pushButton_3 ->setText("O");

    }

    if (k3 == 3)
    {
        ui-> pushButton_3 ->setText("");
        k3 = 0;

    }
}

void MainWindow::on_pushButton_4_clicked()
{
    k4++;
    if (k4 == 1)
    {
        ui-> pushButton_4 ->setText("X");

    }
    if (k4 == 2)
    {
        ui-> pushButton_4 ->setText("O");

    }

    if (k4 == 3)
    {
        ui-> pushButton_4 ->setText("");
        k4 = 0;

    }
}

void MainWindow::on_pushButton_5_clicked()
{
    k5++;
    if (k5 == 1)
    {
        ui-> pushButton_5 ->setText("X");

    }
    if (k5 == 2)
    {
        ui-> pushButton_5 ->setText("O");

    }

    if (k5 == 3)
    {
        ui-> pushButton_5 ->setText("");
        k5 = 0;

    }
}

void MainWindow::on_pushButton_6_clicked()
{
    k6++;
    if (k6 == 1)
    {
        ui-> pushButton_6 ->setText("X");

    }
    if (k6 == 2)
    {
        ui-> pushButton_6 ->setText("O");

    }

    if (k6 == 3)
    {
        ui-> pushButton_6 ->setText("");
        k6 = 0;

    }
}

void MainWindow::on_pushButton_7_clicked()
{
    k7++;
    if (k7 == 1)
    {
        ui-> pushButton_7 ->setText("X");

    }
    if (k7 == 2)
    {
        ui-> pushButton_7 ->setText("O");

    }

    if (k7 == 3)
    {
        ui-> pushButton_7 ->setText("");
        k7 = 0;

    }
}

void MainWindow::on_pushButton_8_clicked()
{
    k8++;
    if (k8 == 1)
    {
        ui-> pushButton_8 ->setText("X");

    }
    if (k8 == 2)
    {
        ui-> pushButton_8 ->setText("O");

    }

    if (k8 == 3)
    {
        ui-> pushButton_8 ->setText("");
        k8 = 0;

    }
}

void MainWindow::on_pushButton_9_clicked()
{
    k9++;
    if (k9 == 1)
    {
        ui-> pushButton_9 ->setText("X");

    }
    if (k9 == 2)
    {
        ui-> pushButton_9 ->setText("O");

    }

    if (k9 == 3)
    {
        ui-> pushButton_9 ->setText("");
        k9 = 0;

    }
}



void WIN()
{
    if (k1 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
    }

    if (k1 == 1 && k2 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
    }
    if (k1 == 2 && k2 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
    }

    if (k4 == 1 && k5 == 1 && k6 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
    }

    if (k4 == 2 && k5 == 2 && k6 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
    }

    if (k7 == 1 && k8 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
    }

    if (k7 == 2 && k8 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
    }

}




