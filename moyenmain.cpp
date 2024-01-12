#include "ui_moyenmain.h"
#include "moyenT.h"
#include <QString>
#include <QDebug>
#include <QTableWidget>
#include <QMessageBox>
#include "string"
#include <QMediaPlayer>
#include "son.h"
#include "moyenmain.h"


moyenmain::moyenmain(QWidget *parent) :
    QMainWindow (parent),
    ui(new Ui::moyenmain)
{
    ui->setupUi(this);
    ui->typemoyen1->setModel(tmpmoyen1.afficher());
    ui->typemoyen2->setModel(tmpmoyen2.afficher());
}

moyenmain::~moyenmain()
{
    delete ui;
}


void moyenmain::on_pushButton_2_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void moyenmain::on_pushButton_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}

void moyenmain::on_moyens_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}






void moyenmain::on_ajouter1_clicked()
{
    //son->play();


    int numeroM = ui->lineEdit_numeroM->text().toInt();
    QString typeM= ui->lineEdit_typeM->text();
    QString etatM= ui->lineEdit_etatM->text();
  moyen p(numeroM,typeM,etatM);
  bool test=p.ajouter();
  if(test)
{ui->typemoyen1->setModel(tmpmoyen1.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un moyen"),
                  QObject::tr("moyen ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un moyen"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}

void moyenmain::on_supprimer1_clicked()
{
   // son->play();


int numeroM = ui->lineEdit_numeroM2->text().toInt();
bool test=tmpmoyen1.supprimer(numeroM);
if(test)
{ui->typemoyen1->setModel(tmpmoyen1.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Supprimer un moyen"),
                QObject::tr("moyen supprimé.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("Supprimer un moyen"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


}





void moyenmain::on_modifier1_clicked()
{

    // son->play();


    int numeroM = ui->lineEdit_numeroM->text().toInt();
   QString typeM=ui->lineEdit_typeM->text();
   QString etatM=ui->lineEdit_etatM->text();
   bool test=tmpmoyen1.Modifier(numeroM,typeM,etatM);
   if(test)
   {ui->typemoyen1->setModel(tmpmoyen1.afficher());
       QMessageBox::information(nullptr, QObject::tr("Modifier Un moyen"),
                         QObject::tr("moyen Modifié\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);

       }
         else
             QMessageBox::critical(nullptr, QObject::tr("Modifier Un moyen"),
                         QObject::tr("Erreur !.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);
}

void moyenmain::on_ajouter2_clicked()
{
    //son->play();


    int numeroM = ui->lineEdit_numeroM1->text().toInt();
    QString typeM= ui->lineEdit_typeM1->text();
    QString etatM= ui->lineEdit_etatM1->text();
  moyen p(numeroM,typeM,etatM);
  bool test=p.ajouter1();
  if(test)
{ui->typemoyen2->setModel(tmpmoyen2.afficher1());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un moyen"),
                  QObject::tr("moyen ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un moyen"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}

void moyenmain::on_supprimer2_clicked()
{
   // son->play();


int numeroM = ui->lineEdit_numeroM12->text().toInt();
bool test=tmpmoyen2.supprimer1(numeroM);
if(test)
{ui->typemoyen2->setModel(tmpmoyen2.afficher1());//refresh
    QMessageBox::information(nullptr, QObject::tr("Supprimer un moyen"),
                QObject::tr("moyen supprimé.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("Supprimer un moyen"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


}



void moyenmain::on_modifier2_clicked()
{

    // son->play();


    int numeroM = ui->lineEdit_numeroM1->text().toInt();
   QString typeM=ui->lineEdit_typeM1->text();
   QString etatM=ui->lineEdit_etatM1->text();
   bool test=tmpmoyen2.Modifier1(numeroM,typeM,etatM);
   if(test)
   {ui->typemoyen2->setModel(tmpmoyen2.afficher());
       QMessageBox::information(nullptr, QObject::tr("Modifier Un moyen"),
                         QObject::tr("moyen Modifié\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);

       }
         else
             QMessageBox::critical(nullptr, QObject::tr("Modifier Un moyen"),
                         QObject::tr("Erreur !.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);
}





void moyenmain::on_trier1_clicked()
{

        ui->typemoyen1->setModel(tmpmoyen1.trier_moy());   //refresh
        QMessageBox::information(this, QObject::tr("Rechercher un moyen"),
        QObject::tr("moyen trié.\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
}



void moyenmain::on_trier2_clicked()
{

        ui->typemoyen2->setModel(tmpmoyen2.trier_moy1());   //refresh
        QMessageBox::information(this, QObject::tr("Rechercher un moyen"),
        QObject::tr("moyen trié.\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
}


void moyenmain::on_chermoyen_textChanged(const QString &arg1)
{

    moyen m;
    ui->chermoyen_2->setModel(m.afficher_avec_id(arg1));
}

void moyenmain::on_chermoyen_5_textChanged(const QString &arg1)
{
    moyen m;
    ui->chermoyen_6->setModel(m.afficher_avec_id1(arg1));
}

void moyenmain::on_reservations_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(3);
}
