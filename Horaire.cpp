#include "horaire.h"

#include <QDebug>
#include <QVariant>
#include <QDate>
#include <QTime>

Horaire::Horaire()
{
  id_horaire=0;

}
Horaire::Horaire(int id_horaire,QTime horaire)
{
    this->id_horaire=id_horaire;
    this->horaire=horaire;
}
int Horaire::get_idh(){return  id_horaire;}
QTime Horaire::get_h(){return  horaire;}

QSqlQueryModel * Horaire::afficherhoraire()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from Horaire;");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_horaire"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Horaire"));
        return model;
}
bool Horaire::ajouterhor()
{
    QSqlQuery query;
    QString res=QString::number(id_horaire);
    query.prepare("INSERT INTO Horaire (Id_horaire,Horaire)" "VALUES(:id_horaire, :horaire);" );
    query.bindValue(":id_horaire",res);
    query.bindValue(":horaire",horaire);
    return  query.exec();
}
bool Horaire::supprimehor(int num)
{
    QSqlQuery query ;
    QString res=QString::number(num);
    query.prepare("Delete from Horaire where Id_horaire = :id_horaire");
    query.bindValue(":id_horaire",res);
    return  query.exec();
}
bool Horaire::modifierhor(int num)
{
    QSqlQuery query;
    QString res= QString::number(num);
    query.prepare("Update  Horaire set  Id_horaire = :id_horaire,Horaire= :horaire where Id_horaire = :id_horaire");
    query.bindValue(":id_horaire", res);
    query.bindValue(":horaire", horaire);
    return  query.exec();
}
