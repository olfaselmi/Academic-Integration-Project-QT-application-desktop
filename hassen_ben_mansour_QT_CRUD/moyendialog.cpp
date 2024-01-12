#include "moyendialog.h"
#include "moyendialog.h"



moyendialog::moyendialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moyendialog)
{
    ui->setupUi(this);
}

moyendialog::~moyendialog()
{
    delete ui;
}


