#include "abonneforfaits.h"

abonneforfaits::abonneforfaits()
{
 id=0;
 nom="";
 prenom="";
}
abonneforfaits::abonneforfaits(int a,QString b,QString c)
{
    this->id=a;
    this->nom=b;
    this->prenom=c;
}
bool abonneforfaits::ajouter()
{
    QSqlQuery query;
    QString res= QString::number(id);
    query.prepare("INSERT INTO abonnements (numero,nom,prenom) "
                        "VALUES (:id ,:nom, :prenom); ");
    query.bindValue(":id", res);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);

    return    query.exec();
}
QSqlQueryModel * abonneforfaits::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from abonnements ;");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMERO"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM "));

        return model;
}
bool abonneforfaits::modifier(int num)
{
    QSqlQuery query;
    QString res= QString::number(num);
    query.prepare("Update  abonnements set  numero = :id ,nom = :nom,prenom= :prenom where numero = :id ");
    query.bindValue(":id", res);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);

    return  query.exec();
}
bool abonneforfaits::supprimer(int num)
{
    QSqlQuery query;
    QString res= QString::number(num);
    query.prepare("Delete from abonnements where numero = :id ");
    query.bindValue(":id", res);
    return    query.exec();
}
QSqlQueryModel * abonneforfaits::afficher_idn(const QString &arg1)
{
    QSqlQueryModel * model = new QSqlQueryModel() ;
    QSqlQuery query;
    query.prepare("select * from abonnements WHERE numero like '%"+arg1+"%' ");
    query.addBindValue(arg1);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMERO"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM "));
    return model;
}
bool abonneforfaits::ajouterfor()
{
    QSqlQuery query;
    QString res= QString::number(id);
    query.prepare("INSERT INTO forfaits (numero,nom,prenom) "
                        "VALUES (:id ,:nom, :prenom); ");
    query.bindValue(":id", res);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);

    return    query.exec();
}
QSqlQueryModel * abonneforfaits::afficherfor()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from forfaits;");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMERO"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM "));

        return model;
}
bool abonneforfaits::modifierfor(int num)
{
    QSqlQuery query;
    QString res= QString::number(num);
    query.prepare("Update  forfaits set  numero = :id ,nom = :nom,prenom= :prenom where numero = :id ");
    query.bindValue(":id", res);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);

    return  query.exec();
}
bool abonneforfaits::supprimerfor(int num)
{
    QSqlQuery query;
    QString res= QString::number(num);
    query.prepare("Delete from forfaits where numero = :id ");
    query.bindValue(":id", res);
    return    query.exec();
}
QSqlQueryModel * abonneforfaits::afficher_idnfor(const QString &arg1)
{
    QSqlQueryModel * model = new QSqlQueryModel() ;
    QSqlQuery query;
    query.prepare("select * from forfaits WHERE numero like '%"+arg1+"%' ");
    query.addBindValue(arg1);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMERO"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM "));
    return model;
}
