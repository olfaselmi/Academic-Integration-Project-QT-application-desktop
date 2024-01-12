#ifndef personnes_h
#define personnes_h

#include <QMainWindow>
#include "circuit.h"
#include "reseau.h"
#include "clients.h"
#include "reservation.h"
#include "horaire.h"
#include "chauffeur.h"
#include "employee.h"
#include "cadeau.h"




namespace Ui {
class personnes;
}

class personnes : public QMainWindow
{
    Q_OBJECT

public:
    explicit personnes(QWidget *parent = nullptr);
    ~personnes();

private slots:


    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_moyens_clicked();

    void on_reservations_clicked();

    void on_abonnements_clicked();

    void on_tarifs_clicked();

    void on_clients_clicked();

    void on_employees_clicked();

    void on_pushButton_3_clicked();

    void on_ajouterres_clicked();

    void on_ajoutercirc_clicked();

    void on_modireseau_clicked();

    void on_chercherr_clicked();

    void on_chercherc_clicked();

    void on_modicircuit_clicked();

    void on_suppcircuit_clicked();

    void on_suppreseau_clicked();

    void on_ajouteraureseau_clicked();

    void on_cherchercircuit_textChanged(const QString &arg1);

    void on_ajoutreserv_clicked();

    void on_modireserv_clicked();

    void on_chercherreserv_2_clicked();

    void on_suppreserv_2_clicked();

    void on_cherreservation_textChanged(const QString &arg1);

    void on_ajoutagent_clicked();

    void on_modiagent_clicked();

    void on_suppagent_2_clicked();

    void on_chercheragent_2_clicked();

    void on_cheragent_2_textChanged(const QString &arg1);

    void on_ajoutclient_clicked();


    void on_cherchauff_textChanged(const QString &arg1) ;


    void on_ajoutchauff_clicked();

    void afficher() ;

    void stat() ;

    void on_modichauff_clicked();

    void on_suppchauff_2_clicked();

    void on_cheragent_2_cursorPositionChanged(int arg1, int arg2);

    void on_cheragent_3_activated(const QModelIndex &index);

    void on_tabWidget_18_currentChanged(int index);

    void on_cherclient_textChanged(const QString &arg1);

    void on_suppclient_clicked();

    void on_ajoutcadeau_clicked();


    void on_cadeautable_activated(const QModelIndex &index);




    void on_modiclient_clicked();

    void on_modicadeau_clicked();

    void on_suppcadeau_clicked();

private:
    Ui::personnes *ui;
    reseau tmpreseau;
    circuit tmpcircuit;
    clients tmpclient;
    Reservation tmpreservation;
    Horaire tmphoraire;
    Chauffeur tmpchauffeur;
    Employee tmpemployee;
    Cadeau tmpcadeau ;
};

#endif // personnes_h
