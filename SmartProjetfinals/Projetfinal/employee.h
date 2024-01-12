#ifndef Employee_H
#define Employee_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class Employee
{public:
    Employee();
    Employee(int,QString,QString);
    QString get_nom();
    QString get_prenom();
    int get_id();
    bool ajouter();
    bool modifier();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    QSqlQueryModel * afficher_avec_id(const QString &arg1);
private:
    QString nom,prenom;
    int id;

};

#endif // Employee_H
