#ifndef CHAUFFEUR_H
#define CHAUFFEUR_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class Chauffeur
{public:
    Chauffeur();
    Chauffeur(int,QString,QString,QString);
    QString get_nom();
    QString get_prenom();
    bool ajouter();
    bool modifier();
    int get_id();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    QSqlQueryModel * afficher_avec_id(const QString &arg1);
private:
    QString nom,prenom,mail;
    int id;
};
#endif // CHAUFFEUR_H
