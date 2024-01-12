#include "personnes.h"
#include "ui_personnes.h"
#include "clients.h"
#include "cadeau.h"
#include "chauffeur.h"
#include "employee.h"

#include <QMessageBox>
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <QByteArray>
#include <QFile>
#include <QFileInfo>


personnes::personnes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::personnes)
{
    ui->setupUi(this);

    ui->agenttable->setModel(tmpemployee.afficher());
    ui->customplot->setModel(tmpchauffeur.afficher());
    ui->agenttable->setModel(tmpemployee.afficher());
    ui->cadeautable->setModel(tmpcadeau.afficher());


}

personnes::~personnes()
{
    delete ui;
}




void personnes::on_pushButton_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}


void personnes::on_clients_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(6);
}

void personnes::on_employees_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(7);
}

void personnes::on_pushButton_3_clicked()
{
     ui->stackedWidget_2->setCurrentIndex(0);
}


void personnes::on_ajoutagent_clicked()
{
    int id = ui->idagent->text().toInt();
    QString nom= ui->nomagent->text();
    QString prenom= ui->prenomagent->text();
  Employee e(id,nom,prenom);
  bool test=e.ajouter() ;
  if(test)
{ui->agenttable->setModel(tmpemployee.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("ajouter un employée"),
                  QObject::tr("Employee ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

}
/*void MainWindow::on_modiagent_clicked()
{
    int num = ui->chercheragent->text().toInt();
    int id = ui->idagent->text().toInt();
    QString nom =ui->nomagent->text();
    QString prenom =ui->prenomagent->text();
    Employee e(id,nom,prenom);
    bool test = e.modifier(num);
    if(test)
    {
        QMessageBox::information(this,"Gestions employés","modification reussie");
        ui->agenttable->setModel(e.afficher());
    }
    else {
        QMessageBox::critical(this,"Gestion employés","L'opération a échouée");
    }
} */

void personnes::on_suppagent_2_clicked()
{
    int num = ui->chercheragent->text().toInt();
    Employee e;
    if(e.supprimer(num))
    {
        QMessageBox::information(this,"Gestions employés","Suppression reussie");
        ui->agenttable->setModel(e.afficher());
    }

}

void personnes::on_chercheragent_2_clicked()
{
    int id;
    id = ui->chercheragent->text().toInt();
    QSqlQuery query;
    QString res= QString::number(id);
    query.prepare("Select *from employee where ID = :id ");
    query.bindValue(":id", res);
    bool test=query.exec();

    if(test)
    {

        while(query.next())
        {
             ui->idagent->setText(query.value(0).toString());
             ui->nomagent->setText(query.value(1).toString());
             ui->prenomagent->setText(query.value(2).toString());

        }
          ui->chercheragent->setText("");
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Gestions employés"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
}

void personnes::on_cheragent_2_textChanged(const QString &arg1)
{
    Employee e;
    ui->cheragent_3->setModel(e.afficher_avec_id(arg1));
}

void personnes::on_ajoutclient_clicked()
{
    int numero = ui->numclient->text().toInt();
    QString ids = ui->idsocclient->text();
    QString nos = ui->nosocclient->text();
    QString nom = ui->nomclient->text();
    QString prenom =ui->prenomclient->text();
    QString email = ui->emailclient->text();

    clients c(numero,nos,ids,nom,prenom,email);
    if(c.ajouterclient())
    {
        QMessageBox::information(this,"Gestion clients","un client a ete ajouté");
        ui->clienttable->setModel(c.afficher());
    }
    else {
        QMessageBox::critical(this,"Gestion clients","l'operation a échoué");
    }
}

void personnes::on_ajoutchauff_clicked()
{
    int id = ui->idchauf->text().toInt();
    QString nom= ui->prenomchauf->text();
    QString prenom= ui->nomchauf->text();
    QString email= ui->emailchauf->text();
  Chauffeur e(id,nom,prenom,email);
  bool test=e.ajouter();
  if(test)
{ui->customplot->setModel(tmpchauffeur.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un chauffeur"),
                  QObject::tr("chauffeur ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un chauffeur"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}



void personnes::on_modichauff_clicked()
{
    {
        int id = ui->idchauf->text().toInt();
        QString nom= ui->nomchauf->text();
        QString prenom= ui->prenomchauf->text();
        QString mail= ui->emailchauf->text();
      Chauffeur c(id,nom,prenom,mail);
      bool test=c.modifier();
      if(test)
    {ui->customplot->setModel(tmpchauffeur.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Modifier un chauffeur"),
                      QObject::tr("chauffeur modifié.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("Modifier un chauffeur"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void personnes::on_suppchauff_2_clicked()
{
    int id = ui->idchauf->text().toInt();
    bool test=tmpchauffeur.supprimer(id);
    if(test)
    {ui->customplot->setModel(tmpchauffeur.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un chauffeur"),
                    QObject::tr("Chauffeur supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un chauffeur"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}


void personnes::on_modiagent_clicked()
{

        int id = ui->idagent->text().toInt();
        QString nom= ui->nomagent->text();
        QString prenom= ui->prenomagent->text();
      Employee e(id,nom,prenom);
      bool test=e.modifier();
      if(test)
    {ui->agenttable->setModel(tmpemployee.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Modifier un agent"),
                      QObject::tr("agent modifié.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("Modifier un agent"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
    }










void personnes::on_cherclient_textChanged(const QString &arg1)
{
    {
        clients c;
        ui->cherclient_2->setModel(c.afficher_avec_id(arg1));
    }
}

void personnes::on_suppclient_clicked()

    {
    int num = ui->chercherclient->text().toInt();
    bool test=tmpclient.supprimerclient(num);
    if(test)
    {ui->clienttable->setModel(tmpclient.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un client"),
                    QObject::tr("client supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un client"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


   }


void personnes::on_ajoutcadeau_clicked()
{
    int id = ui->code->text().toInt();
    int point  = ui->point->text().toInt();
    QString type= ui->type->text();
     int prix= ui->prix->text().toFloat();


  Cadeau c(id,type,prix,point);
  bool test=c.ajouter();
  if(test)
{ui->cadeautable->setModel(tmpcadeau.afficher());//refresh

QMessageBox::information(nullptr, QObject::tr("Ajouter un cadeau"),
                  QObject::tr("cadeau ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un cadeau"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}




void personnes::on_cherchauff_textChanged(const QString &arg1)
{
    Chauffeur c;
    ui->cherchauff_2->setModel(c.afficher_avec_id(arg1));
}

void personnes::on_modiclient_clicked()
{
    {
        int numero = ui->numclient->text().toInt();
        QString nosocclient= ui->nosocclient->text();
        QString idsocclient= ui->idsocclient->text();
        QString nomclient= ui->nomclient->text();
        QString prenomclient= ui->prenomclient->text();
        QString emailclient= ui->emailclient->text();

       clients c(numero,nosocclient,idsocclient,nomclient,prenomclient,emailclient);
      bool test=c.modifierclient(numero);
      if(test)
    {ui->clienttable->setModel(tmpclient.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Modifier un client"),
                      QObject::tr("client modifié.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("Modifier un client"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void personnes::on_modicadeau_clicked()
{
    {
        int id = ui->code->text().toInt();
        QString type= ui->type->text();
        int prix = ui->prix->text().toInt();
        int point = ui->point->text().toInt();

       Cadeau c(id,type,prix,point);

      bool test=c.modifier(id);
      if(test)
    {ui->cadeautable->setModel(tmpcadeau.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Modifier un cadeau"),
                      QObject::tr("cadeau modifié.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("Modifier un cadeau"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void personnes::on_suppcadeau_clicked()
{
    int id = ui->cherchercadeau_3->text().toInt();
    bool test=tmpcadeau.supprimer(id);
    if(test)
    {ui->cadeautable->setModel(tmpcadeau.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un cadeau"),
                    QObject::tr("cadeau supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un cadeau"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
