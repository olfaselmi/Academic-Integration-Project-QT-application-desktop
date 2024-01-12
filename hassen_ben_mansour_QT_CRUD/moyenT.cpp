#include "moyenT.h"
#include <QDebug>
#include <QVariant>
#include <QString>
moyen::moyen()
{
numeroM=0;
typeM="";
etatM="";
}
moyen::moyen(int numeroM,QString typeM,QString etatM)
{
  this->numeroM=numeroM;
  this->typeM=typeM;
  this->etatM=etatM;
}
QString moyen::get_typeM(){return  typeM;}
QString moyen::get_etatM(){return etatM;}
int moyen::get_numeroM(){return  numeroM;}

bool moyen::ajouter()
{
QSqlQuery query;
QString res= QString::number(numeroM);
query.prepare("INSERT INTO moyen (numeroM, typeM, etatM) "
                    "VALUES (:numeroM, :typeM, :etatM)");
query.bindValue(":numeroM", res);
query.bindValue(":typeM", typeM);
query.bindValue(":etatM", etatM);

return    query.exec();
}

QSqlQueryModel * moyen::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from moyen");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("numeroM"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("typeM"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("etatM"));
    return model;
}

bool moyen::supprimer(int idd)
{



QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from moyen where numeroM = :numeroM ");
query.bindValue(":numeroM", res);
return    query.exec();
}




