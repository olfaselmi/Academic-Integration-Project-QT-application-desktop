#include "reservation.h"
#include <QDebug>
#include <QVariant>
#include <QTime>

Reservation::Reservation()
{
numero=0;
nom="";
prenom="";
moyen="";
nombre_place=0;
depart="";
arrivee="";
}
Reservation::Reservation(int numero,QString nom,QString prenom,QString moyen,int nombre_place,QTime date,QString depart,QString arrivee)
{
  this->numero=numero;
  this->nom=nom;
  this->prenom=prenom;
  this->moyen=moyen;
  this->nombre_place=nombre_place;
  this->date=date;
  this->depart=depart;
  this->arrivee=arrivee;
}
int Reservation::get_numero(){return  numero;}
QString Reservation::get_nom(){return  nom;}
QString Reservation::get_prenom(){return prenom;}
QString Reservation::get_moyen(){ return  moyen;}
QTime Reservation::get_date(){ return  date;}
int Reservation::get_nombre_place(){ return  nombre_place;}
QString Reservation::get_depart(){ return  depart;}
QString Reservation::get_arrivee(){return arrivee;}

bool Reservation::ajouter()
{
QSqlQuery query;
QString res= QString::number(numero);
query.prepare("INSERT INTO Réservation (NUMERO,NOM, PRENOM,MOYEN,NOMBRE_PLACE,HORAIRE,DEPART,ARRIVEE) "
                    "VALUES (:numero ,:nom, :prenom, :moyen, :nombre_place, :date, :depart, :arrivee); ");
query.bindValue(":numero", res);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":moyen", moyen);
query.bindValue(":nombre_place", nombre_place);
query.bindValue(":date", date);
query.bindValue(":depart", depart);
query.bindValue(":arrivee", arrivee);

return    query.exec();
}

QSqlQueryModel * Reservation::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from Réservation ;");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMERO"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("MOYEN"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nombre_place "));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("HORAIRE"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("DEPART"));
model->setHeaderData(7, Qt::Horizontal, QObject::tr("ARRIVEE "));
    return model;
}

bool Reservation::supprimer(int num)
{
QSqlQuery query;
QString res= QString::number(num);
query.prepare("Delete from Réservation where NUMERO = :numero ");
query.bindValue(":numero", res);
return    query.exec();
}
bool Reservation::modifier(int num)
{
    QSqlQuery query;
    QString res= QString::number(num);
    query.prepare("Update  Réservation set  NUMERO= :numero,NOM= :nom,PRENOM= :prenom,MOYEN= :moyen,NOMBRE_PLACE= :nombre_place,HORAIRE= :date,DEPART= :depart,ARRIVEE= :arrivee where NUMERO = :numero ");
    query.bindValue(":numero", res);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":moyen", moyen);
    query.bindValue(":nombre_place", nombre_place);
    query.bindValue(":date", date);
    query.bindValue(":depart", depart);
    query.bindValue(":arrivee", arrivee);
    return  query.exec();

}

QSqlQueryModel * Reservation::rechercher(int num)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    QString res= QString::number(num);

model->setQuery("select  *from Réservation where NUMERO = :numero");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMERO"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("MOYEN"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nombre_place "));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("HORAIRE"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("DEPART"));
model->setHeaderData(7, Qt::Horizontal, QObject::tr("ARRIVEE "));
query.bindValue(":numero",res);
    return model;
}

QSqlQueryModel* Reservation::afficher_avec_id(const QString &arg1)
{
    QSqlQueryModel * model = new QSqlQueryModel() ;
    QSqlQuery query;
    query.prepare("select * from Réservation WHERE NUMERO like '%"+arg1+"%' ");
    query.addBindValue(arg1);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMERO"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("MOYEN"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nombre_place "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("HORAIRE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("DEPART"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("ARRIVEE "));
    return model;
}
QSqlQueryModel * Reservation::afficherliste()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from Liste_Dattente;");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMERO"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("MOYEN"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nombre_place "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("HORAIRE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("DEPART"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("ARRIVEE "));
        return model;
}
bool Reservation::ajouter_dans_liste()
{
    QSqlQuery query;
    QString res= QString::number(numero);
    query.prepare("INSERT INTO Liste_Dattente (NUMERO_at,NOM_at, PRENOM_at,MOYEN_at,NOMBRE_PLACE_at,HORAIRE_at,DEPART_at,ARRIVEE_at) "
                        "VALUES (:numero ,:nom, :prenom, :moyen, :nombre_place, :date, :depart, :arrivee); ");
    query.bindValue(":numero", res);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":moyen", moyen);
    query.bindValue(":nombre_place", nombre_place);
    query.bindValue(":date", date);
    query.bindValue(":depart", depart);
    query.bindValue(":arrivee", arrivee);

    return    query.exec();
}
bool Reservation::supprimerelemliste(int num)
{
    QSqlQuery query;
    QString res= QString::number(num);
    query.prepare("Delete from Liste_Dattente where NUMERO_at = :numero ");
    query.bindValue(":numero", res);
    return    query.exec();
}

QSqlQueryModel * Reservation::trier()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select *from Réservation order by 1");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMERO"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("MOYEN"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nombre_place "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("HORAIRE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("DEPART"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("ARRIVEE "));
        return model;
}
