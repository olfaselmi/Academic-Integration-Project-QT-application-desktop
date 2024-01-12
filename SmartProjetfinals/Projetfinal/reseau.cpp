#include "reseau.h"
#include <QDebug>
#include <QVariant>

reseau::reseau()
{
   no_reseau=0;
   nb_circuit=0;
   type = "";
}
reseau::reseau(int no_reseau,int  nb_circuit ,QString type)
{    this->no_reseau=no_reseau;
    this-> nb_circuit= nb_circuit;
    this->type=type;
}

int reseau::get_no_reseau()
{return  no_reseau ;}
int reseau::get_nb_circuit()
{return  nb_circuit ;}
QString reseau::get_type()
{return  type; }

bool reseau::ajouter()
{
    QSqlQuery query;
    QString res= QString::number(no_reseau);
    query.prepare("INSERT INTO Reseau (numero,depart,arrivee) "
                        "VALUES (:no_reseau, :nb_circuit, :type); ");
    query.bindValue(":no_reseau", no_reseau);
    query.bindValue(":nb_circuit", nb_circuit);
    query.bindValue(":type", type);

    return    query.exec();
}
QSqlQueryModel * reseau::afficher()
{
   QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select *from Reseau ;");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Numero"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Départ"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Arrivée "));
        return model;
}
bool reseau::supprimer(int num)
{
    QSqlQuery query;
    QString res= QString::number(num);
    query.prepare("Delete from Reseau where numero = :no_reseau ");
    query.bindValue(":no_reseau",res);
    return    query.exec();
}
bool reseau::modifier(int id)
{
    QSqlQuery query;
       QString res= QString::number(id);
       query.prepare("Update  Reseau set  numero = :no_reseau,depart= :nb_circuit ,arrivee= :type where numero = :no_reseau");
       query.bindValue(":no_reseau", no_reseau);
       query.bindValue(":nb_circuit", nb_circuit);
       query.bindValue(":type", type);
       return  query.exec();
}

