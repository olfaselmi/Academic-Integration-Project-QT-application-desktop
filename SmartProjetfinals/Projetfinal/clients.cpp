#include "clients.h"

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

clients::clients()
{
    numero=0;
    idsociete="";
    nomsociete="";
    nom="";
    prenom="";
    email="";
}
clients::clients(int numero,QString nomsociete,QString idsociete, QString nom,QString prenom,QString email)
{
    this->numero=numero;
    this->idsociete=idsociete;
    this->nomsociete=nomsociete;
    this->nom=nom;
    this->prenom=prenom;
    this->email=email;
}
/*bool clients::ajouterclient()
    {
    QSqlQuery query;
    QString res= QString::number(numero);
    query.prepare("INSERT INTO clients ( NUMERO,IDSOCCLIENT,NOSOCCLIENT,NOMCLIENT,PRENOMCLIENT,EMAILCLIENT) "
                        "VALUES (:numero :nomsociete,:idsociete,:nom, :prenom,:email); ");
    query.bindValue(":NUMERO", res);
    query.bindValue(":NOSOCCLIENT", nomsociete);
    query.bindValue(":IDSOCCLIENT", idsociete);
    query.bindValue(":NOMCLIENT", nom);
    query.bindValue(":PRENOMCLIENT", prenom);
    query.bindValue(":EMAILCLIENT", email);
     return query.exec();
    } */


    QSqlQueryModel * clients::afficher()
    {
        QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("select * from clients ;");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMERO"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("IDSOCCLIENT"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOSOCCLIENT "));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOMCLIENT"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRENOMCLIENT "));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("EMAILCLIENT"));

            return model;
    }
    bool clients :: supprimerclient(int num)
    {
        QSqlQuery query ;
        QString res = QString::number(num);
        query.prepare("Delete from clients where numero =:numero");
        query.bindValue(":numero",res);
        return  query.exec();
    }


    QSqlQueryModel * clients::afficher_avec_id(const QString &arg1)
    {
        QSqlQueryModel * model = new QSqlQueryModel() ;
        QSqlQuery query;
        query.prepare("select * from clients WHERE NUMERO like '%"+arg1+"%' or IDSOCCLIENT like '%"+arg1+"%' or NOSOCCLIENT like '%"+arg1+"%' or NOMCLIENT like '%"+arg1+"%' or PRENOMCLIENT like '%"+arg1+"%' or EMAILCLIENT like '%"+arg1+"%' ");
        query.addBindValue(arg1);
        query.exec();
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDSOCCLIENT"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOSOCCLIENT "));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOMCLIENT"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOMCLIENT"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("EMAILCLIENT"));
        return  model;
    }



   /* bool clients::ajouterclient()
    {
    QSqlQuery query;
    QString res= QString::number(numero);
    query.prepare("INSERT INTO CLIENTS (NUMERO, IDSOCCLIENT, NOSOCCLIENT,NOMCLIENT,PRENOMCLIENT , EMAILCLIENT) "
                        "VALUES (:numero, :idsociete, :nomsociete,nom,prenom, email)");
    query.bindValue(":numero", res);
    query.bindValue(":idsociete", idsociete);
    query.bindValue(":nomsociete", nomsociete);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);


    return    query.exec();
    }
    */

    bool clients::ajouterclient()
        {
        QSqlQuery query;
        QString res= QString::number(numero);
        query.prepare("INSERT INTO clients (NUMERO,IDSOCCLIENT,NOSOCCLIENT,NOMCLIENT,PRENOMCLIENT,EMAILCLIENT) "
                            "VALUES (:numero ,:nomsociete,:idsociete,:nom, :prenom,:email); ");
        query.bindValue(":numero", res);
        query.bindValue(":nomsociete", nomsociete);
        query.bindValue(":idsociete", idsociete);
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":email", email);
         return query.exec();
        }



    bool clients::modifierclient(int)
    {
    QSqlQuery query;
    QString res= QString::number(numero);
    query.prepare("update CLIENTS set IDSOCCLIENT = :IDSOCCLIENT , NOSOCCLIENT = :NOSOCCLIENT , NOMCLIENT = :NOMCLIENT, PRENOMCLIENT = :PRENOMCLIENT, EMAILCLIENT = :EMAILCLIENT where NUMERO = :NUMERO");
    query.bindValue(":NUMERO", res);
    query.bindValue(":NOSOCCLIENT", nomsociete);
    query.bindValue(":IDSOCCLIENT", idsociete);
    query.bindValue(":NOMCLIENT", nom);
    query.bindValue(":PRENOMCLIENT", prenom);
    query.bindValue(":EMAILCLIENT", email);

    return    query.exec();
    }
