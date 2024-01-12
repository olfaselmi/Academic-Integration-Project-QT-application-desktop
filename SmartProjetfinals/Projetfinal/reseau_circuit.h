#ifndef RESEAU_CIRCUIT_H
#define RESEAU_CIRCUIT_H

#include <QMainWindow>
#include "reseau.h"
#include "circuit.h"

QT_BEGIN_NAMESPACE
namespace Ui { class reseau_circuit; }
QT_END_NAMESPACE

class reseau_circuit : public QMainWindow
{
    Q_OBJECT

public:
    reseau_circuit(QWidget *parent = nullptr);
    ~reseau_circuit();

private slots:
    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::reseau_circuit *ui;
    reseau tmpres;
    circuit tmpcir;

};
#endif // RESEAU_CIRCUIT_H
