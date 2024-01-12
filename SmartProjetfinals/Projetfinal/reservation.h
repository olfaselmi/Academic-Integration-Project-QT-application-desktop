#ifndef RESERVATION_H
#define RESERVATION_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTime>

class Reservation
{public:
    Reservation();
    Reservation(int,QString,QString,QString,int,QTime,QString,QString);
    QString get_nom();
    QString get_prenom();
    QString get_moyen();
    QString get_depart();
    QString get_arrivee();
    int get_numero();
    QTime get_date();
    int get_nombre_place();
    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * rechercher(int);
    bool supprimer(int);
    bool modifier(int);
    QSqlQueryModel * afficherrecherche(int );
    QSqlQueryModel * afficher_avec_id(const QString &arg1);
    QSqlQueryModel * afficherliste();
    bool supprimerelemliste(int);
    bool ajouter_dans_liste();
    QSqlQueryModel * trier();
private:
    QString nom,prenom,moyen,depart,arrivee;
    QTime date;
    int numero,nombre_place;
};
#endif // RESERVATION_H
