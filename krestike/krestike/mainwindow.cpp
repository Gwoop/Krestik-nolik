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

bool hod = true;

void MainWindow::on_pushButton_clicked()
{
k1++;
    if(hod == true)
    {
    hod = false;
    ui->pushButton->setText("X");
    ui->pushButton->setEnabled(false);
     k1 = 1;
    }

   else if(hod == false)
    {
    hod = true;
    ui->pushButton->setText("O");
    ui->pushButton->setEnabled(false);
    k1 = 2;
    }




    if (k1 == 1 && k2 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();

        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);

    }
    if (k1 == 2 && k2 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 1 && k5 == 1 && k6 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 2 && k5 == 2 && k6 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k8 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k8 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 1 && k4 == 1 && k7 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k4 == 2 && k7 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 1 && k5 == 1 && k8 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 2 && k5 == 2 && k8 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 1 && k6 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 2 && k6 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }
    if (k1 == 1 && k5 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k5 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k5 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k5 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

}

void MainWindow::on_pushButton_2_clicked()
{

    k2++;
    if(hod == true)
    {
    hod = false;
    ui->pushButton_2->setText("X");
    ui->pushButton_2->setEnabled(false);
    k2 =1;
    }

    else if(hod == false)
    {
    hod = true;
    ui->pushButton_2->setText("O");
    ui->pushButton_2->setEnabled(false);
    k2=2;
    }


    if (k1 == 1 && k2 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();

        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);

    }
    if (k1 == 2 && k2 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 1 && k5 == 1 && k6 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 2 && k5 == 2 && k6 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k8 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k8 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 1 && k4 == 1 && k7 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k4 == 2 && k7 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 1 && k5 == 1 && k8 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 2 && k5 == 2 && k8 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 1 && k6 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 2 && k6 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }
    if (k1 == 1 && k5 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k5 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k5 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k5 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

}

void MainWindow::on_pushButton_3_clicked()
{
    k3++;

    if(hod == true)
    {
    hod = false;
    ui->pushButton_3->setText("X");
    ui->pushButton_3->setEnabled(false);
    k3=1;
    }

    else if(hod == false)
    {
    hod = true;
    ui->pushButton_3->setText("O");
    ui->pushButton_3->setEnabled(false);
    k3=2;
    }

    if (k1 == 1 && k2 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();

        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);

    }
    if (k1 == 2 && k2 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 1 && k5 == 1 && k6 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 2 && k5 == 2 && k6 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k8 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k8 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 1 && k4 == 1 && k7 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k4 == 2 && k7 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 1 && k5 == 1 && k8 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 2 && k5 == 2 && k8 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 1 && k6 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 2 && k6 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }
    if (k1 == 1 && k5 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k5 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k5 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k5 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    k4++;

    if(hod == true)
    {
    hod = false;
    ui->pushButton_4->setText("X");
    ui->pushButton_4->setEnabled(false);
    k4=1;
    }

    else if(hod == false)
    {
    hod = true;
    ui->pushButton_4->setText("O");
    ui->pushButton_4->setEnabled(false);
    k4=2;
    }



    if (k1 == 1 && k2 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();

        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);

    }
    if (k1 == 2 && k2 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 1 && k5 == 1 && k6 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 2 && k5 == 2 && k6 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k8 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k8 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 1 && k4 == 1 && k7 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k4 == 2 && k7 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 1 && k5 == 1 && k8 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 2 && k5 == 2 && k8 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 1 && k6 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 2 && k6 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }
    if (k1 == 1 && k5 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k5 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k5 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k5 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

}

void MainWindow::on_pushButton_5_clicked()
{
    k5++;
    if(hod == true)
    {
    hod = false;
    ui->pushButton_5->setText("X");
    ui->pushButton_5->setEnabled(false);
    k5=1;
    }

   else if(hod == false)
    {
    hod = true;
    ui->pushButton_5->setText("O");
    ui->pushButton_5->setEnabled(false);
    k5=2;
    }



    if (k1 == 1 && k2 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();

        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);

    }
    if (k1 == 2 && k2 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 1 && k5 == 1 && k6 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 2 && k5 == 2 && k6 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k8 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k8 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 1 && k4 == 1 && k7 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k4 == 2 && k7 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 1 && k5 == 1 && k8 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 2 && k5 == 2 && k8 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 1 && k6 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 2 && k6 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }
    if (k1 == 1 && k5 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k5 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k5 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k5 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

}

void MainWindow::on_pushButton_6_clicked()
{
    k6++;
    if(hod == true)
    {
    hod = false;
    ui->pushButton_6->setText("X");
    ui->pushButton_6->setEnabled(false);
    k6=1;
    }

   else if(hod == false)
    {
    hod = true;
    ui->pushButton_6->setText("O");
    ui->pushButton_6->setEnabled(false);
    k6=2;
    }



    if (k1 == 1 && k2 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();

        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);

    }
    if (k1 == 2 && k2 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 1 && k5 == 1 && k6 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 2 && k5 == 2 && k6 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k8 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k8 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 1 && k4 == 1 && k7 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k4 == 2 && k7 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 1 && k5 == 1 && k8 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 2 && k5 == 2 && k8 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 1 && k6 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 2 && k6 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }
    if (k1 == 1 && k5 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k5 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k5 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k5 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

}

void MainWindow::on_pushButton_7_clicked()
{
    k7++;
    if(hod == true)
    {
    hod = false;
    ui->pushButton_7->setText("X");
    ui->pushButton_7->setEnabled(false);
    k7=1;
    }

   else if(hod == false)
    {
    hod = true;
    ui->pushButton_7->setText("O");
    ui->pushButton_7->setEnabled(false);
    k7=2;
    }



    if (k1 == 1 && k2 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();

        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);

    }
    if (k1 == 2 && k2 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 1 && k5 == 1 && k6 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 2 && k5 == 2 && k6 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k8 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k8 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 1 && k4 == 1 && k7 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k4 == 2 && k7 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 1 && k5 == 1 && k8 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 2 && k5 == 2 && k8 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 1 && k6 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 2 && k6 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }
    if (k1 == 1 && k5 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k5 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k5 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k5 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

}

void MainWindow::on_pushButton_8_clicked()
{
    k8++;
    if(hod == true)
    {
    hod = false;
    ui->pushButton_8->setText("X");
    ui->pushButton_8->setEnabled(false);
    k8=1;
    }

   else if(hod == false)
    {
    hod = true;
    ui->pushButton_8->setText("O");
    ui->pushButton_8->setEnabled(false);
    k8=2;
    }



    if (k1 == 1 && k2 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();

        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);

    }
    if (k1 == 2 && k2 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 1 && k5 == 1 && k6 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 2 && k5 == 2 && k6 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k8 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k8 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 1 && k4 == 1 && k7 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k4 == 2 && k7 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 1 && k5 == 1 && k8 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 2 && k5 == 2 && k8 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 1 && k6 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 2 && k6 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }
    if (k1 == 1 && k5 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k5 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k5 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k5 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

}

void MainWindow::on_pushButton_9_clicked()
{
    k9++;
    if(hod == true)
    {
    hod = false;
    ui->pushButton_9->setText("X");
    ui->pushButton_9->setEnabled(false);
    k9=1;
    }

   else if(hod == false)
    {
    hod = true;
    ui->pushButton_9->setText("O");
    ui->pushButton_9->setEnabled(false);
    k9=2;
    }



    if (k1 == 1 && k2 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();

        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);

    }
    if (k1 == 2 && k2 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 1 && k5 == 1 && k6 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k4 == 2 && k5 == 2 && k6 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k8 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k8 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 1 && k4 == 1 && k7 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k4 == 2 && k7 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 1 && k5 == 1 && k8 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k2 == 2 && k5 == 2 && k8 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 1 && k6 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k3 == 2 && k6 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }
    if (k1 == 1 && k5 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k1 == 2 && k5 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 1 && k5 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

    if (k7 == 2 && k5 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
            ui->pushButton_5->setEnabled(false);
             ui->pushButton_6->setEnabled(false);
              ui->pushButton_7->setEnabled(false);
               ui->pushButton_8->setEnabled(false);
                ui->pushButton_9->setEnabled(false);
    }

}



void WIN()
{


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

    if (k1 == 1 && k4 == 1 && k7 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
    }

    if (k1 == 2 && k4 == 2 && k7 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
    }

    if (k2 == 1 && k5 == 1 && k8 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
    }

    if (k2 == 2 && k5 == 2 && k8 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
    }

    if (k3 == 1 && k6 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
    }

    if (k3 == 2 && k6 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
    }
    if (k1 == 1 && k5 == 1 && k9 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
    }

    if (k1 == 2 && k5 == 2 && k9 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
    }

    if (k7 == 1 && k5 == 1 && k3 == 1)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Крестики победили");
        msgBox.exec();
    }

    if (k7 == 2 && k5 == 2 && k3 == 2)
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Результат");
        msgBox.setText("Нолики победили");
        msgBox.exec();
    }


}





void MainWindow::on_pushButton_10_clicked()
{
    k1 = 0;
    k2 = 0;
    k3 = 0;
    k4 = 0;
    k5 = 0;
    k6 = 0;
    k7 = 0;
    k8 = 0;
    k9 = 0;
    ui-> pushButton ->setText("");
    ui-> pushButton_2 ->setText("");
    ui-> pushButton_3 ->setText("");
    ui-> pushButton_4 ->setText("");
    ui-> pushButton_5 ->setText("");
    ui-> pushButton_6 ->setText("");
    ui-> pushButton_7 ->setText("");
    ui-> pushButton_8 ->setText("");
    ui-> pushButton_9 ->setText("");


    ui->pushButton->setEnabled(true);
     ui->pushButton_2->setEnabled(true);
      ui->pushButton_3->setEnabled(true);
       ui->pushButton_4->setEnabled(true);
        ui->pushButton_5->setEnabled(true);
         ui->pushButton_6->setEnabled(true);
          ui->pushButton_7->setEnabled(true);
           ui->pushButton_8->setEnabled(true);
            ui->pushButton_9->setEnabled(true);




}
