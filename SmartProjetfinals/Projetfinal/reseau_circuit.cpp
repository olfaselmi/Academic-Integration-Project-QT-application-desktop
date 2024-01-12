#include "reseau_circuit.h"
#include "ui_reseau_circuit.h"
#include "reseau.h"
#include "circuit.h"
#include <QMessageBox>

reseau_circuit::reseau_circuit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::reseau_circuit)
{
    ui->setupUi(this);
}

reseau_circuit::~reseau_circuit()
{
    delete ui;
}


void reseau_circuit::on_pushButton_9_clicked()
{
  ui->stackedWidget->setCurrentIndex(1);
}
void reseau_circuit::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void reseau_circuit::on_pushButton_5_clicked()
{
    int id= ui->numero_2->text().toInt();
        QString depart= ui->depart_2->text();
        QString arrivee= ui->prenom_2->text();
        circuit C(id,depart,arrivee);
        bool text=C.ajouter();
        if(text)
        {
            QMessageBox::information(this,"Ajouter","reussie");
            ui->tableView_abonne_2->setModel(C.afficher());
        }
        else
        {
            QMessageBox::critical(this,"ajouter","echec!");
        }

}

void reseau_circuit::on_pushButton_6_clicked()
{
    int id= ui->numero_2->text().toInt();
        QString depart= ui->depart_2->text();
        QString arrivee= ui->prenom_2->text();
        circuit C(id,depart,arrivee);
        bool text=C.modifier(id);
        if(text)
        {
            QMessageBox::information(this,"Ajouter","reussie");
            ui->tableView_abonne_2->setModel(C.afficher());
        }
        else
        {
            QMessageBox::critical(this,"ajouter","echec!");
        }
}

void reseau_circuit::on_pushButton_8_clicked()
{

    int id=ui->chercher_3->text().toInt ();
     circuit c;
     if(c.supprimer(id))
     {
         QMessageBox::information(this,"supprimer","reussie");
         ui->tableView_abonne_3->setModel(c.afficher());
     }
 else
 {
 QMessageBox::critical(this,"supprimer","echec!");
 }
}

void reseau_circuit::on_pushButton_7_clicked(const QString &arg1)
{
    circuit C;
        ui->tableView_abonne_3->setModel(C.rechercher(arg1));
}

void reseau_circuit::on_pushButton_2_clicked()
{
    int no= ui->numero->text().toInt();
        int nb_circuit= ui->nom->text().toInt();
        QString type= ui->prenom->text();
        reseau R(no,nb_circuit,type);
        bool text=R.ajouter();
        if(text)
        {
            QMessageBox::information(this,"Ajouter","reussie");
            ui->tableView_abonne->setModel(R.afficher());
        }
        else
        {
            QMessageBox::critical(this,"ajouter","echec!");
        }
}

void reseau_circuit::on_pushButton_4_clicked()
{
    int id=ui->chercher->text().toInt();
        reseau d;
        if(d.supprimer(id))
        {
            QMessageBox::information(this,"supprimer","reussie");
            ui->tableView_abonne->setModel(d.afficher());
        }
    else
    {
    QMessageBox::critical(this,"supprimer","echec!");
}
}
void reseau_circuit::on_pushButton_clicked()
{
    int no_reseau= ui->numero->text().toInt();
        int nb_circuit= ui->nom->text().toInt();
        QString type= ui->prenom->text();
        reseau R(no_reseau,nb_circuit,type);
        bool text=R.modifier(no_reseau);
        if(text)
        {
            QMessageBox::information(this,"Ajouter","reussie");
            ui->tableView_abonne->setModel(R.afficher());
        }
        else
        {
            QMessageBox::critical(this,"ajouter","echec!");
        }
}

void reseau_circuit::on_pushButton_11_clicked()
{   circuit C;
    ui->tableView_abonne_2->setModel(C.trier_res());   //refresh
        QMessageBox::information(this, QObject::tr("Rechercher une reclamation"),
        QObject::tr("Réclamation recherché.\n"
                    "Click Cancel to exit."), QMessageBox::Cancel);
}
