#ifndef SMART_ABONNEMENT_H
#define SMART_ABONNEMENT_H

#include <QMainWindow>
#include "abonneforfaits.h"

namespace Ui {
class Smart_abonnement;
}

class Smart_abonnement : public QMainWindow
{
    Q_OBJECT

public:
    explicit Smart_abonnement(QWidget *parent = nullptr);
    ~Smart_abonnement();

private slots:
    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_chercher_2_textChanged(const QString &arg1);

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_chercher_4_textChanged(const QString &arg1);

private:
    Ui::Smart_abonnement *ui;
    abonneforfaits abf;
};

#endif // SMART_ABONNEMENT_H
