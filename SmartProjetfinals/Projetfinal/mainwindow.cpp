#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include "rreservations.h"
#include "moyenmain.h"
#include "reseau_circuit.h"
#include "smart_abonnement.h"
#include "personnes.h"

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


void MainWindow::on_seconnecter_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
    if(username == "mulgan" && password == "mulgan")
    {
        RRESERVATIONS * rr;
        rr = new RRESERVATIONS();
        rr->show();
        ui->username->setText("");
        ui->password->setText("");
        QMessageBox::information(nullptr, QObject::tr("Gestion Smart Transports:"),
                    QObject::tr("Bienvenue sur votre interface.\n"
                                "Cliquez sur OK pour continuer."), QMessageBox::Ok);
    }
    else if(username == "olfa" && password == "olfa")
    {
        Smart_abonnement * sa;
        sa = new Smart_abonnement();
        sa->show();
        ui->username->setText("");
        ui->password->setText("");
        QMessageBox::information(nullptr, QObject::tr("Gestion Smart Transports:"),
                    QObject::tr("Bienvenue sur votre interface.\n"
                                "Cliquez sur OK pour continuer."), QMessageBox::Ok);
    }
    else if(username == "chedly" && password == "chedly")
    {
        moyenmain * mo;
        mo = new moyenmain();
        mo->show();
        ui->username->setText("");
        ui->password->setText("");
        QMessageBox::information(nullptr, QObject::tr("Gestion Smart Transports:"),
                    QObject::tr("Bienvenue sur votre interface.\n"
                                "Cliquez sur OK pour continuer."), QMessageBox::Ok);
    }
    else if(username == "bayrem" && password == "bayrem")
    {
        reseau_circuit * sa;
        sa = new reseau_circuit();
        sa->show();
        ui->username->setText("");
        ui->password->setText("");
        QMessageBox::information(nullptr, QObject::tr("Gestion Smart Transports:"),
                    QObject::tr("Bienvenue sur votre interface.\n"
                                "Cliquez sur OK pour continuer."), QMessageBox::Ok);
    }
    else if(username == "hassen" && password == "imen")
    {
        personnes * pr;
        pr = new personnes();
        pr->show();
        ui->username->setText("");
        ui->password->setText("");
        QMessageBox::information(nullptr, QObject::tr("Gestion Smart Transports:"),
                    QObject::tr("Bienvenue sur votre interface.\n"
                                "Cliquez sur OK pour continuer."), QMessageBox::Ok);
    }


}
