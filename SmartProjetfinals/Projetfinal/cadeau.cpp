#include "cadeau.h"
#include <QDebug>
Cadeau::Cadeau()
{
    type="";
    prix=0;
    point=0;
id=0;



}
Cadeau::Cadeau(int id,QString type,int prix,int point)
{
    this->id=id;
    this->type=type;
    this->prix=prix;
    this->point=point;




}
QString Cadeau::get_type(){return  type;}
int Cadeau::get_prix(){return prix;}
int Cadeau::get_point(){return  point;}
int Cadeau::get_id(){return id;}


bool Cadeau::ajouter()
{
    QSqlQuery query;
    QString res = QString::number(id);
    query.prepare("INSERT INTO cadeau (ID,TYPE, PRIX,POINT) "
                        "VALUES (:ID ,:TYPE, :PRIX,  :POINT); ");
    query.bindValue(":ID", res);
    query.bindValue(":TYPE", type);
    query.bindValue(":PRIX", prix);
    query.bindValue(":POINT", point);


    return    query.exec();
}

QSqlQueryModel * Cadeau::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from CADEAU");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Type"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRIX "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("POINTS"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID"));
    return model;
}

QSqlQueryModel * Cadeau::verifier(QString typee)
{QSqlQueryModel * model= new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("select * from CADEAU where ID=:ID");
    query.bindValue(":type", typee);
model->setQuery(query);
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Type"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRIX "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("POINTS"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID"));




    return model;
}


bool Cadeau::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from cadeau where ID = :ID ");
query.bindValue(":ID", res);
return    query.exec();
}





bool Cadeau::modifier(int id )
{
QSqlQuery query;
QString res= QString::number(id);

query.prepare("UPDATE cadeau set ID= :ID ,TYPE= :TYPE, PRIX= :PRIX, POINT= :POINT where ID= :ID");
query.bindValue(":ID", res);
query.bindValue(":TYPE", type);
query.bindValue(":PRIX", prix);
query.bindValue(":POINT", point);
return    query.exec();
}
