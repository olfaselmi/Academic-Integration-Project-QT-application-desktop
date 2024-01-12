#ifndef CIRCUIT_H
#define CIRCUIT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class circuit
{
private:
    int id_circuit ;
    QString  arrivee ;
    QString depart  ;
public:
    circuit();
    circuit(int,QString,QString);
    int get_id_circuit();
    QString get_arrivee();
    QString get_depart();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool modifier(int );
    bool supprimer(int);
    QSqlQueryModel * rechercher(const QString &arg1);
    QSqlQueryModel * trier_res();
};

#endif // CIRCUIT_H
