#include "circuit.h"
#include <QDebug>
#include <QVariant>

circuit::circuit()
{
 id_circuit=0;
 depart="";
 arrivee="";
}
circuit::circuit(int id_circuit,QString depart,QString arrivee)
{    this->id_circuit=id_circuit;
    this->depart=depart;
    this->arrivee=arrivee;
}
int circuit::get_id_circuit()
{return  id_circuit ;}
QString circuit::get_depart()
{return  depart; }
QString circuit::get_arrivee()
{return  arrivee;}

bool circuit::ajouter()
{
    QSqlQuery query;
    QString res= QString::number(id_circuit);
    query.prepare("INSERT INTO Circuits (numero,depart,arrivee) "
                        "VALUES (:id_circuit, :depart, :arrivee); ");
    query.bindValue(":id_circuit", res);
    query.bindValue(":depart", depart);
    query.bindValue(":arrivee", arrivee);

    return    query.exec();
}
QSqlQueryModel * circuit::afficher()
{
   QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from Circuits ;");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("numero"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("depart"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("arrivee "));
        return model;
}
bool circuit::supprimer(int num)
{
    QSqlQuery query;
    QString res= QString::number(num);
    query.prepare("Delete from Circuits where numero = :id_circuit ");
    query.bindValue(":id_circuit", res);
    return    query.exec();
}
bool circuit::modifier(int id)
{
    QSqlQuery query;
       QString res= QString::number(id);
       query.prepare("Update  Circuits set  numero = :id_circuit,depart= :depart ,arrivee= :arrivee where numero = :id_circuit");
       query.bindValue(":id_circuit", res);
       query.bindValue(":depart", depart);
       query.bindValue(":arrivee", arrivee);
       return  query.exec();
}
QSqlQueryModel * circuit::rechercher(const QString &arg1)
{
    QSqlQueryModel* model= new QSqlQueryModel();
    QSqlQuery query;
        query.prepare("select * from Circuits where numero like '%"+arg1+"%' ");
        query.addBindValue(arg1);
        query.exec();
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_circuit"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("depart"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("arrivee "));
            return model;
}
QSqlQueryModel* circuit::trier_res()
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from Circuits order by id_circuit");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_circuit"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("depart"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("arrivee"));

        return model;
}
