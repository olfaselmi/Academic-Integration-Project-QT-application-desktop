#ifndef MOYENDIALOG_H
#define MOYENDIALOG_H

#include <QDialog>

namespace Ui {
class moyendialog;
}

class moyendialog : public QDialog
{
    Q_OBJECT

public:
    explicit moyendialog(QWidget *parent = nullptr);
    ~moyendialog();

//private slots:
   // void on_pushButton_clicked();

private:
    Ui::moyendialog *ui;
};

#endif // MOYENDIALOG_H
