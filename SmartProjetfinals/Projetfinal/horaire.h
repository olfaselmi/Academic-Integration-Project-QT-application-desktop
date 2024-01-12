#ifndef HORAIRE_H
#define HORAIRE_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include <QTime>
class Horaire
{
public:
    Horaire();
    Horaire(int,QTime);
    QSqlQueryModel * afficherhoraire();
    int get_idh();
    QTime get_h();
    bool ajouterhor();
    bool supprimehor(int);
    bool modifierhor(int);
private:
    int id_horaire;
    QTime horaire;
};
#endif // HORAIRE_H
