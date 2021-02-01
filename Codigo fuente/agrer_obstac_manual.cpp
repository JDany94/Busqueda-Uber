#include "agrer_obstac_manual.h"
#include "ui_agrer_obstac_manual.h"

Agrer_Obstac_Manual::Agrer_Obstac_Manual(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Agrer_Obstac_Manual)
{
    ui->setupUi(this);
}

Agrer_Obstac_Manual::~Agrer_Obstac_Manual()
{
    delete ui;
}
