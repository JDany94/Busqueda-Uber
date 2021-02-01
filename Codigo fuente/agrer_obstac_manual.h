#ifndef AGRER_OBSTAC_MANUAL_H
#define AGRER_OBSTAC_MANUAL_H

#include <QDialog>

namespace Ui {
class Agrer_Obstac_Manual;
}

class Agrer_Obstac_Manual : public QDialog
{
    Q_OBJECT

public:
    explicit Agrer_Obstac_Manual(QWidget *parent = nullptr);
    ~Agrer_Obstac_Manual();

private:
    Ui::Agrer_Obstac_Manual *ui;
};

#endif // AGRER_OBSTAC_MANUAL_H
