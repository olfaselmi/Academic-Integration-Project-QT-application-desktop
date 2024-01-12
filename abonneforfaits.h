#ifndef ABONNEFORFAITS_H
#define ABONNEFORFAITS_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class abonneforfaits
{
public:
    abonneforfaits();
    abonneforfaits(int,QString,QString);
    bool ajouter();
    QSqlQueryModel * afficher();
    bool modifier(int);
    bool supprimer(int);
    QSqlQueryModel * afficher_idn(const QString &arg1);
    bool ajouterfor();
    QSqlQueryModel * afficherfor();
    bool modifierfor(int);
    bool supprimerfor(int);
    QSqlQueryModel * afficher_idnfor(const QString &arg1);
private:
    int id;
    QString nom,prenom;
};

#endif // ABONNEFORFAITS_H
