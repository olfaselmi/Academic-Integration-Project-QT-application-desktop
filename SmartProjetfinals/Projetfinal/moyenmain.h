#ifndef MOYENMAIN_H
#define MOYENMAIN_H

#include <QMainWindow>
#include "moyenT.h"



namespace Ui {
class moyenmain;
}

class moyenmain : public QMainWindow
{
    Q_OBJECT

public:
    explicit moyenmain(QWidget *parent = nullptr);
    ~moyenmain();

private slots:


    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_moyens_clicked();



    void on_pushButton_3_clicked();
    void on_ajouter1_clicked();
    void on_supprimer1_clicked();
    void on_modifier1_clicked();
    void on_ajouter2_clicked();
    void on_supprimer2_clicked();
    void on_modifier2_clicked();
    void on_chermoyen1_textChanged(const QString &arg1);

    void on_chercher1_clicked();

      void on_trier2_clicked();
      void on_trier1_clicked();

      void on_chermoyen_textChanged(const QString &arg1);

      void on_chermoyen_5_textChanged(const QString &arg1);

      void on_reservations_clicked();

private:
    Ui::moyenmain *ui;
    moyen tmpmoyen1;
    moyen tmpmoyen2;


};

#endif // MOYENMAIN_H
