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
query.prepare("INSERT INTO MOYENURBAIN (numeroM, typeM, etatM) "
                    "VALUES (:numeroM, :typeM, :etatM)");
query.bindValue(":numeroM", res);
query.bindValue(":typeM", typeM);
query.bindValue(":etatM", etatM);

return    query.exec();
}

QSqlQueryModel * moyen::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from MOYENURBAIN");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("numeroM"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("typeM"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("etatM"));
    return model;
}

bool moyen::supprimer(int idd)
{



QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from MOYENURBAIN where NUMEROM = :numeroM ");
query.bindValue(":numeroM", res);
return    query.exec();
}

bool moyen::Modifier(int numeroM,QString typeM,QString etatM)
{
    QSqlQuery query;

       QString res= QString::number(numeroM);
       query.prepare("UPDATE MOYENURBAIN SET TYPEM = :typeM , ETATM= :etatM WHERE  NUMEROM = :numeroM  ");
       query.bindValue(":numeroM",numeroM);
       query.bindValue(":typeM",typeM);
       query.bindValue(":etatM",etatM);
       bool result=query.exec();
       return result;
}


bool moyen::ajouter1()
{
QSqlQuery query;
QString res= QString::number(numeroM);
query.prepare("INSERT INTO MOYENRURAL (numeroM, typeM, etatM) "
                    "VALUES (:numeroM, :typeM, :etatM)");
query.bindValue(":numeroM", res);
query.bindValue(":typeM", typeM);
query.bindValue(":etatM", etatM);

return    query.exec();
}

QSqlQueryModel * moyen::afficher1()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from MOYENRURAL");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("numeroM"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("typeM"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("etatM"));
    return model;
}

bool moyen::supprimer1(int idd)
{



QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from MOYENRURAL where NUMEROM = :numeroM ");
query.bindValue(":numeroM", res);
return    query.exec();
}

bool moyen::Modifier1(int numeroM,QString typeM,QString etatM)
{
    QSqlQuery query;

       QString res= QString::number(numeroM);
       query.prepare("UPDATE MOYENRURAL SET TYPEM = :typeM , ETATM= :etatM WHERE  NUMEROM = :numeroM  ");
       query.bindValue(":numeroM",numeroM);
       query.bindValue(":typeM",typeM);
       query.bindValue(":etatM",etatM);
       bool result=query.exec();
       return result;
}


QSqlQueryModel * moyen::afficher_avec_id(const QString &arg1)
{
    QSqlQueryModel * model = new QSqlQueryModel() ;
    QSqlQuery query;
    query.prepare("select * from MOYENURBAIN WHERE NUMEROM like '%"+arg1+"%' or TYPEM like '%"+arg1+"%' or ETATM like '%"+arg1+"%'  ");
    query.addBindValue(arg1);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMEROM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPEM "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETATM"));
    return  model;
}

QSqlQueryModel * moyen::afficher_avec_id1(const QString &arg1)
{
    QSqlQueryModel * model = new QSqlQueryModel() ;
    QSqlQuery query;
    query.prepare("select * from MOYENRURAL WHERE NUMEROM like '%"+arg1+"%' or TYPEM like '%"+arg1+"%' or ETATM like '%"+arg1+"%'  ");
    query.addBindValue(arg1);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMEROM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPEM "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETATM "));
    return  model;
}


QSqlQueryModel * moyen::trier_moy()
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from MOYENURBAIN order by NUMEROM");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMEROM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPEM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETATM"));

        return model;
}

QSqlQueryModel * moyen::trier_moy1()
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from MOYENRURAL order by NUMEROM");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMEROM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPEM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETATM"));

        return model;
}

