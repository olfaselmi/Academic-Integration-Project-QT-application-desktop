#include "chauffeur.h"
#include <QDebug>
#include<QVariant>

Chauffeur::Chauffeur()
{
id=0;
nom="";
prenom="";
}
Chauffeur::Chauffeur(int id,QString nom,QString prenom,QString mail)
{
  this->id=id;
  this->nom=nom;
  this->prenom=prenom;
    this->mail = mail;
}
QString Chauffeur::get_nom(){return  nom;}
QString Chauffeur::get_prenom(){return prenom;}
int Chauffeur::get_id(){return  id;}

bool Chauffeur::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("INSERT INTO chauffeur (ID, NOM, PRENOM, mail) "
                    "VALUES (:id, :nom, :prenom, :mail)");
query.bindValue(":id", res);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":mail", mail);

return    query.exec();
}

bool Chauffeur::modifier()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("update chauffeur set nom = :nom , prenom = :prenom , mail = :mail where id = :id");
query.bindValue(":id", res);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":mail", mail);

return    query.exec();
}




QSqlQueryModel * Chauffeur::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from chauffeur");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
    return model;
}

bool Chauffeur::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from chauffeur where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

QSqlQueryModel * Chauffeur ::afficher_avec_id(const QString &arg1)
{
    QSqlQueryModel * model = new QSqlQueryModel() ;
    QSqlQuery query;
    query.prepare("select * from CHAUFFEUR WHERE ID like '%"+arg1+"%' or NOM like '%"+arg1+"%' or PRENOM like '%"+arg1+"%' or MAIL like '%"+arg1+"%' ");

    query.addBindValue(arg1);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("mail"));
    return  model;
}

