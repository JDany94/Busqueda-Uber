/********************************************************************************
** Form generated from reading UI file 'ingrparm.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGRPARM_H
#define UI_INGRPARM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IngrParm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *generar_entorno_boton;
    QLabel *label_entorno;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLabel *num_obst_label;
    QLineEdit *obst_M;
    QLabel *label_12;
    QLineEdit *obst_N;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *origen_M;
    QLabel *label_6;
    QLineEdit *origen_N;
    QLabel *label_8;
    QLineEdit *destino_M;
    QLabel *label_9;
    QLineEdit *destino_N;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *obst_boton;
    QPushButton *quitar_obst_boton;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *entorno_M;
    QLabel *label_3;
    QLineEdit *entorno_N;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_4;
    QPushButton *aumentarMapa;
    QPushButton *reducirMapa;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *buscar_eucl;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *buscar_man;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_12;
    QCheckBox *check_showNodos;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_obst_exist;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *close;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *clear_boton;
    QPushButton *save_boton;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *mapLabel2_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_5;
    QLineEdit *random_obst;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *IngrParm)
    {
        if (IngrParm->objectName().isEmpty())
            IngrParm->setObjectName(QString::fromUtf8("IngrParm"));
        IngrParm->resize(517, 604);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon_coche.png"), QSize(), QIcon::Normal, QIcon::Off);
        IngrParm->setWindowIcon(icon);
        IngrParm->setSizeGripEnabled(false);
        gridLayout = new QGridLayout(IngrParm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        generar_entorno_boton = new QPushButton(IngrParm);
        generar_entorno_boton->setObjectName(QString::fromUtf8("generar_entorno_boton"));
        generar_entorno_boton->setMinimumSize(QSize(200, 0));
        generar_entorno_boton->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(false);
        generar_entorno_boton->setFont(font);

        horizontalLayout_4->addWidget(generar_entorno_boton);

        label_entorno = new QLabel(IngrParm);
        label_entorno->setObjectName(QString::fromUtf8("label_entorno"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(10);
        label_entorno->setFont(font1);
        label_entorno->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_entorno);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 4);

        label_10 = new QLabel(IngrParm);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(10);
        font2.setBold(false);
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 5, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(IngrParm);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(10, 0));
        label_11->setMaximumSize(QSize(130, 16777215));
        label_11->setFont(font1);

        horizontalLayout_5->addWidget(label_11);

        num_obst_label = new QLabel(IngrParm);
        num_obst_label->setObjectName(QString::fromUtf8("num_obst_label"));
        num_obst_label->setMinimumSize(QSize(50, 0));
        num_obst_label->setMaximumSize(QSize(30, 16777215));
        num_obst_label->setFont(font1);
        num_obst_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(num_obst_label);

        obst_M = new QLineEdit(IngrParm);
        obst_M->setObjectName(QString::fromUtf8("obst_M"));
        obst_M->setMaximumSize(QSize(40, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        obst_M->setFont(font3);
        obst_M->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(obst_M);

        label_12 = new QLabel(IngrParm);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(15, 16777215));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Verdana"));
        font4.setPointSize(12);
        font4.setBold(true);
        label_12->setFont(font4);
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_12);

        obst_N = new QLineEdit(IngrParm);
        obst_N->setObjectName(QString::fromUtf8("obst_N"));
        obst_N->setMaximumSize(QSize(40, 20));
        obst_N->setFont(font3);
        obst_N->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(obst_N);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer_3);


        horizontalLayout_5->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout_5, 6, 0, 1, 4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(IngrParm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(55, 16777215));
        label_7->setFont(font1);

        horizontalLayout_3->addWidget(label_7);

        origen_M = new QLineEdit(IngrParm);
        origen_M->setObjectName(QString::fromUtf8("origen_M"));
        origen_M->setMaximumSize(QSize(40, 20));
        origen_M->setFont(font3);
        origen_M->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(origen_M);

        label_6 = new QLabel(IngrParm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(15, 16777215));
        label_6->setFont(font4);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_6);

        origen_N = new QLineEdit(IngrParm);
        origen_N->setObjectName(QString::fromUtf8("origen_N"));
        origen_N->setMaximumSize(QSize(40, 20));
        origen_N->setFont(font3);
        origen_N->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(origen_N);

        label_8 = new QLabel(IngrParm);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(55, 16777215));
        label_8->setFont(font1);

        horizontalLayout_3->addWidget(label_8);

        destino_M = new QLineEdit(IngrParm);
        destino_M->setObjectName(QString::fromUtf8("destino_M"));
        destino_M->setMaximumSize(QSize(40, 20));
        destino_M->setFont(font3);
        destino_M->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(destino_M);

        label_9 = new QLabel(IngrParm);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(15, 16777215));
        label_9->setFont(font4);
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_9);

        destino_N = new QLineEdit(IngrParm);
        destino_N->setObjectName(QString::fromUtf8("destino_N"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(destino_N->sizePolicy().hasHeightForWidth());
        destino_N->setSizePolicy(sizePolicy);
        destino_N->setMaximumSize(QSize(40, 20));
        destino_N->setFont(font3);
        destino_N->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(destino_N);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_5->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        obst_boton = new QPushButton(IngrParm);
        obst_boton->setObjectName(QString::fromUtf8("obst_boton"));
        obst_boton->setMinimumSize(QSize(120, 0));
        obst_boton->setMaximumSize(QSize(16777215, 16777215));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Verdana"));
        font5.setPointSize(8);
        obst_boton->setFont(font5);

        horizontalLayout_6->addWidget(obst_boton);

        quitar_obst_boton = new QPushButton(IngrParm);
        quitar_obst_boton->setObjectName(QString::fromUtf8("quitar_obst_boton"));
        quitar_obst_boton->setMinimumSize(QSize(120, 0));
        quitar_obst_boton->setFont(font3);

        horizontalLayout_6->addWidget(quitar_obst_boton);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);


        gridLayout->addLayout(horizontalLayout_6, 7, 0, 1, 4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new QLabel(IngrParm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(180, 16777215));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        entorno_M = new QLineEdit(IngrParm);
        entorno_M->setObjectName(QString::fromUtf8("entorno_M"));
        entorno_M->setMaximumSize(QSize(40, 20));
        entorno_M->setFont(font3);
        entorno_M->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(entorno_M);

        label_3 = new QLabel(IngrParm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(15, 16777215));
        label_3->setFont(font4);

        horizontalLayout_2->addWidget(label_3);

        entorno_N = new QLineEdit(IngrParm);
        entorno_N->setObjectName(QString::fromUtf8("entorno_N"));
        entorno_N->setMaximumSize(QSize(40, 20));
        entorno_N->setFont(font3);
        entorno_N->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(entorno_N);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        label = new QLabel(IngrParm);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Verdana"));
        font6.setPointSize(14);
        font6.setBold(true);
        label->setFont(font6);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        label_4 = new QLabel(IngrParm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font5);

        horizontalLayout_9->addWidget(label_4);

        aumentarMapa = new QPushButton(IngrParm);
        aumentarMapa->setObjectName(QString::fromUtf8("aumentarMapa"));
        aumentarMapa->setMinimumSize(QSize(0, 0));
        aumentarMapa->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_9->addWidget(aumentarMapa);

        reducirMapa = new QPushButton(IngrParm);
        reducirMapa->setObjectName(QString::fromUtf8("reducirMapa"));
        reducirMapa->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_9->addWidget(reducirMapa);


        gridLayout->addLayout(horizontalLayout_9, 14, 0, 1, 4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_9);

        buscar_eucl = new QPushButton(IngrParm);
        buscar_eucl->setObjectName(QString::fromUtf8("buscar_eucl"));
        buscar_eucl->setMinimumSize(QSize(150, 0));
        buscar_eucl->setMaximumSize(QSize(150, 35));
        buscar_eucl->setFont(font);

        horizontalLayout_12->addWidget(buscar_eucl);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);

        buscar_man = new QPushButton(IngrParm);
        buscar_man->setObjectName(QString::fromUtf8("buscar_man"));
        buscar_man->setMinimumSize(QSize(150, 0));
        buscar_man->setMaximumSize(QSize(150, 35));
        buscar_man->setFont(font);

        horizontalLayout_11->addWidget(buscar_man);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_12);

        check_showNodos = new QCheckBox(IngrParm);
        check_showNodos->setObjectName(QString::fromUtf8("check_showNodos"));
        check_showNodos->setFont(font5);

        horizontalLayout_10->addWidget(check_showNodos);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);


        verticalLayout->addLayout(horizontalLayout_10);


        horizontalLayout_7->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_7, 10, 0, 1, 4);

        label_obst_exist = new QLabel(IngrParm);
        label_obst_exist->setObjectName(QString::fromUtf8("label_obst_exist"));
        label_obst_exist->setFont(font1);
        label_obst_exist->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_obst_exist, 8, 0, 1, 4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        close = new QPushButton(IngrParm);
        close->setObjectName(QString::fromUtf8("close"));
        close->setMinimumSize(QSize(100, 0));
        close->setMaximumSize(QSize(16777215, 35));
        close->setFont(font5);

        horizontalLayout_8->addWidget(close);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        clear_boton = new QPushButton(IngrParm);
        clear_boton->setObjectName(QString::fromUtf8("clear_boton"));
        clear_boton->setMinimumSize(QSize(150, 0));
        clear_boton->setMaximumSize(QSize(16777215, 35));
        clear_boton->setFont(font);

        horizontalLayout_8->addWidget(clear_boton);

        save_boton = new QPushButton(IngrParm);
        save_boton->setObjectName(QString::fromUtf8("save_boton"));
        save_boton->setMinimumSize(QSize(150, 0));
        save_boton->setFont(font3);

        horizontalLayout_8->addWidget(save_boton);


        gridLayout->addLayout(horizontalLayout_8, 12, 0, 1, 4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mapLabel2_2 = new QPlainTextEdit(IngrParm);
        mapLabel2_2->setObjectName(QString::fromUtf8("mapLabel2_2"));
        mapLabel2_2->setEnabled(true);
        QFont font7;
        font7.setPointSize(12);
        mapLabel2_2->setFont(font7);
        mapLabel2_2->setFocusPolicy(Qt::NoFocus);
        mapLabel2_2->setAcceptDrops(false);

        horizontalLayout->addWidget(mapLabel2_2);


        gridLayout->addLayout(horizontalLayout, 16, 0, 1, 5);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 11, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_5 = new QLabel(IngrParm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_13->addWidget(label_5);

        random_obst = new QLineEdit(IngrParm);
        random_obst->setObjectName(QString::fromUtf8("random_obst"));
        random_obst->setMaximumSize(QSize(40, 20));
        random_obst->setFont(font3);
        random_obst->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(random_obst);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_13, 3, 0, 1, 1);


        retranslateUi(IngrParm);

        QMetaObject::connectSlotsByName(IngrParm);
    } // setupUi

    void retranslateUi(QDialog *IngrParm)
    {
        IngrParm->setWindowTitle(QCoreApplication::translate("IngrParm", "Dialog", nullptr));
        generar_entorno_boton->setText(QCoreApplication::translate("IngrParm", "Generar entorno", nullptr));
        label_entorno->setText(QString());
        label_10->setText(QCoreApplication::translate("IngrParm", "Obstaculos", nullptr));
        label_11->setText(QCoreApplication::translate("IngrParm", "Nro de obstaculos:", nullptr));
        num_obst_label->setText(QCoreApplication::translate("IngrParm", "0", nullptr));
        label_12->setText(QCoreApplication::translate("IngrParm", ",", nullptr));
        label_7->setText(QCoreApplication::translate("IngrParm", "Origen:", nullptr));
        label_6->setText(QCoreApplication::translate("IngrParm", ",", nullptr));
        label_8->setText(QCoreApplication::translate("IngrParm", "Destino:", nullptr));
        label_9->setText(QCoreApplication::translate("IngrParm", ",", nullptr));
        obst_boton->setText(QCoreApplication::translate("IngrParm", "Agregar obstaculo", nullptr));
        quitar_obst_boton->setText(QCoreApplication::translate("IngrParm", "Quitar obstaculo", nullptr));
        label_2->setText(QCoreApplication::translate("IngrParm", "Dimensiones del entorno:", nullptr));
        label_3->setText(QCoreApplication::translate("IngrParm", "X", nullptr));
        label->setText(QCoreApplication::translate("IngrParm", "Ingresar parametros manualmente", nullptr));
        label_4->setText(QCoreApplication::translate("IngrParm", "Zoom del mapa:", nullptr));
        aumentarMapa->setText(QCoreApplication::translate("IngrParm", "+", nullptr));
        reducirMapa->setText(QCoreApplication::translate("IngrParm", "-", nullptr));
        buscar_eucl->setText(QCoreApplication::translate("IngrParm", "Euclidiana", nullptr));
        buscar_man->setText(QCoreApplication::translate("IngrParm", "Manhattan", nullptr));
        check_showNodos->setText(QCoreApplication::translate("IngrParm", "Mostrar nodos expandidos", nullptr));
        label_obst_exist->setText(QString());
        close->setText(QCoreApplication::translate("IngrParm", "Volver", nullptr));
        clear_boton->setText(QCoreApplication::translate("IngrParm", "Limpiar entorno", nullptr));
        save_boton->setText(QCoreApplication::translate("IngrParm", "Guardar entorno", nullptr));
        label_5->setText(QCoreApplication::translate("IngrParm", "% de obstaculos aprox:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IngrParm: public Ui_IngrParm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGRPARM_H
