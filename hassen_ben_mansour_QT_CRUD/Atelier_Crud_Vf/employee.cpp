#include "employee.h"
#include <QDebug>
#include<QVariant>

Employee::Employee()
{
id=0;
nom="";
prenom="";
}
Employee::Employee(int id,QString nom,QString prenom)
{
  this->id=id;
  this->nom=nom;
  this->prenom=prenom;
}
QString Employee::get_nom(){return  nom;}
QString Employee::get_prenom(){return prenom;}
int Employee::get_id(){return  id;}

bool Employee::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("INSERT INTO employee (ID, NOM, PRENOM, date_debut) "
                    "VALUES (:id, :nom, :prenom, current_date)");
query.bindValue(":id", res);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);

return    query.exec();
}

bool Employee::modifier()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("update employee set nom = :nom , prenom = :prenom where id = :id");
query.bindValue(":id", res);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);

return    query.exec();
}

QSqlQueryModel * Employee::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from employee");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
    return model;
}

bool Employee::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from employee where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

