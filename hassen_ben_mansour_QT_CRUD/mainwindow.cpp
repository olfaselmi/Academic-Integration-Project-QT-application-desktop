#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "moyenT.h"
#include <QString>
#include"moyendialoge.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
ui->setupUi(this);
ui->typemoyen->setModel(tmpmoyen.afficher());
//son = new QSound ("://2.mp3");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    //son->play();


    int numeroM = ui->lineEdit_numeroM->text().toInt();
    QString typeM= ui->lineEdit_typeM->text();
    QString etatM= ui->lineEdit_etatM->text();
  moyen p(numeroM,typeM,etatM);
  bool test=p.ajouter();
  if(test)
{ui->typemoyen->setModel(tmpmoyen.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un moyen"),
                  QObject::tr("moyen ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un moyen"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pb_supprimer_clicked()
{
   // son->play();


int numeroM = ui->lineEdit_numeroM->text().toInt();
bool test=tmpmoyen.supprimer(numeroM);
if(test)
{ui->typemoyen->setModel(tmpmoyen.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Supprimer un moyen"),
                QObject::tr("moyen supprimé.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("Supprimer un moyen"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


}


bool moyen::Modifier(int numeroM,QString typeM,QString etatM)
{
    QSqlQuery query;

       QString res= QString::number(numeroM);
       query.prepare("UPDATE MOYEN SET TYPEM = :typeM , ETATM= :etatM WHERE  NUMEROM = :numeroM  ");
       query.bindValue(":numeroM",numeroM);
       query.bindValue(":typeM",typeM);
       query.bindValue(":etatM",etatM);
       bool result=query.exec();
       return result;
}


void MainWindow::on_pb_modifier_clicked()
{

    // son->play();


    int numeroM = ui->lineEdit_numeroM_2->text().toInt();
   QString typeM=ui->lineEdit_typeM_2->text();
   QString etatM=ui->lineEdit_etatM_2->text();
   bool test=tmpmoyen.Modifier(numeroM,typeM,etatM);
   if(test)
   {ui->typemoyen->setModel(tmpmoyen.afficher());
       QMessageBox::information(nullptr, QObject::tr("Modifier Un moyen"),
                         QObject::tr("moyen Modifié\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);

       }
         else
             QMessageBox::critical(nullptr, QObject::tr("Modifier Un moyen"),
                         QObject::tr("Erreur !.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);
}








