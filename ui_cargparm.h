/********************************************************************************
** Form generated from reading UI file 'cargparm.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARGPARM_H
#define UI_CARGPARM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CargParm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *buscar_manhattan;
    QPushButton *buscar_euclidiana;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_3;
    QPushButton *aumentarMapa;
    QPushButton *reducirMapa;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *mapLabelC;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_10;
    QCheckBox *check_showNodos;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_dimensiones;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *close;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *clear_boton;
    QLabel *name_arch;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *label_origen;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *label_destino;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QLabel *num_obst_labelC;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *boton_cargar;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *CargParm)
    {
        if (CargParm->objectName().isEmpty())
            CargParm->setObjectName(QString::fromUtf8("CargParm"));
        CargParm->resize(433, 609);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon_coche.png"), QSize(), QIcon::Normal, QIcon::Off);
        CargParm->setWindowIcon(icon);
        gridLayout = new QGridLayout(CargParm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        buscar_manhattan = new QPushButton(CargParm);
        buscar_manhattan->setObjectName(QString::fromUtf8("buscar_manhattan"));
        buscar_manhattan->setMinimumSize(QSize(120, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(false);
        buscar_manhattan->setFont(font);

        horizontalLayout_8->addWidget(buscar_manhattan);

        buscar_euclidiana = new QPushButton(CargParm);
        buscar_euclidiana->setObjectName(QString::fromUtf8("buscar_euclidiana"));
        buscar_euclidiana->setMinimumSize(QSize(120, 0));
        buscar_euclidiana->setFont(font);

        horizontalLayout_8->addWidget(buscar_euclidiana);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout_8->addLayout(horizontalLayout_8);


        horizontalLayout_5->addLayout(verticalLayout_8);


        gridLayout->addLayout(horizontalLayout_5, 9, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        label_3 = new QLabel(CargParm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        label_3->setFont(font1);

        horizontalLayout_7->addWidget(label_3);

        aumentarMapa = new QPushButton(CargParm);
        aumentarMapa->setObjectName(QString::fromUtf8("aumentarMapa"));
        aumentarMapa->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_7->addWidget(aumentarMapa);

        reducirMapa = new QPushButton(CargParm);
        reducirMapa->setObjectName(QString::fromUtf8("reducirMapa"));
        reducirMapa->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_7->addWidget(reducirMapa);


        gridLayout->addLayout(horizontalLayout_7, 13, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mapLabelC = new QPlainTextEdit(CargParm);
        mapLabelC->setObjectName(QString::fromUtf8("mapLabelC"));
        QFont font2;
        font2.setPointSize(24);
        mapLabelC->setFont(font2);
        mapLabelC->setFocusPolicy(Qt::NoFocus);
        mapLabelC->setAcceptDrops(false);

        verticalLayout->addWidget(mapLabelC);


        gridLayout->addLayout(verticalLayout, 14, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        check_showNodos = new QCheckBox(CargParm);
        check_showNodos->setObjectName(QString::fromUtf8("check_showNodos"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(10);
        check_showNodos->setFont(font3);

        horizontalLayout_10->addWidget(check_showNodos);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);


        gridLayout->addLayout(horizontalLayout_10, 10, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(CargParm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Verdana"));
        font4.setPointSize(10);
        font4.setBold(false);
        label_2->setFont(font4);

        horizontalLayout->addWidget(label_2);

        label_dimensiones = new QLabel(CargParm);
        label_dimensiones->setObjectName(QString::fromUtf8("label_dimensiones"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_dimensiones->sizePolicy().hasHeightForWidth());
        label_dimensiones->setSizePolicy(sizePolicy);
        label_dimensiones->setMinimumSize(QSize(50, 0));
        label_dimensiones->setFont(font3);

        horizontalLayout->addWidget(label_dimensiones);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        close = new QPushButton(CargParm);
        close->setObjectName(QString::fromUtf8("close"));
        close->setMinimumSize(QSize(150, 0));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Verdana"));
        font5.setPointSize(8);
        close->setFont(font5);

        horizontalLayout_6->addWidget(close);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        clear_boton = new QPushButton(CargParm);
        clear_boton->setObjectName(QString::fromUtf8("clear_boton"));
        clear_boton->setMinimumSize(QSize(150, 0));
        clear_boton->setFont(font);

        horizontalLayout_6->addWidget(clear_boton);


        gridLayout->addLayout(horizontalLayout_6, 12, 0, 1, 1);

        name_arch = new QLabel(CargParm);
        name_arch->setObjectName(QString::fromUtf8("name_arch"));
        name_arch->setFont(font3);
        name_arch->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(name_arch, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(CargParm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);

        horizontalLayout_2->addWidget(label_7);

        label_origen = new QLabel(CargParm);
        label_origen->setObjectName(QString::fromUtf8("label_origen"));
        label_origen->setMinimumSize(QSize(50, 0));
        label_origen->setFont(font3);

        horizontalLayout_2->addWidget(label_origen);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(CargParm);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font3);

        horizontalLayout_3->addWidget(label_8);

        label_destino = new QLabel(CargParm);
        label_destino->setObjectName(QString::fromUtf8("label_destino"));
        label_destino->setMinimumSize(QSize(50, 0));
        label_destino->setFont(font3);

        horizontalLayout_3->addWidget(label_destino);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_3);


        horizontalLayout_3->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_11 = new QLabel(CargParm);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);

        horizontalLayout_4->addWidget(label_11);

        num_obst_labelC = new QLabel(CargParm);
        num_obst_labelC->setObjectName(QString::fromUtf8("num_obst_labelC"));
        num_obst_labelC->setMinimumSize(QSize(50, 0));
        num_obst_labelC->setFont(font3);

        horizontalLayout_4->addWidget(num_obst_labelC);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer_4);


        horizontalLayout_4->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        boton_cargar = new QPushButton(CargParm);
        boton_cargar->setObjectName(QString::fromUtf8("boton_cargar"));
        boton_cargar->setMaximumSize(QSize(180, 16777215));
        boton_cargar->setFont(font);

        horizontalLayout_9->addWidget(boton_cargar);


        gridLayout->addLayout(horizontalLayout_9, 6, 0, 1, 1);

        label = new QLabel(CargParm);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Verdana"));
        font6.setPointSize(14);
        font6.setBold(true);
        label->setFont(font6);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 11, 0, 1, 1);


        retranslateUi(CargParm);

        QMetaObject::connectSlotsByName(CargParm);
    } // setupUi

    void retranslateUi(QDialog *CargParm)
    {
        CargParm->setWindowTitle(QCoreApplication::translate("CargParm", "Dialog", nullptr));
        buscar_manhattan->setText(QCoreApplication::translate("CargParm", "Manhattan", nullptr));
        buscar_euclidiana->setText(QCoreApplication::translate("CargParm", "Euclidiana", nullptr));
        label_3->setText(QCoreApplication::translate("CargParm", "Zoom del mapa:", nullptr));
        aumentarMapa->setText(QCoreApplication::translate("CargParm", "+", nullptr));
        reducirMapa->setText(QCoreApplication::translate("CargParm", "-", nullptr));
        check_showNodos->setText(QCoreApplication::translate("CargParm", "Mostrar nodos expandidos", nullptr));
        label_2->setText(QCoreApplication::translate("CargParm", "Dimensiones del entorno:", nullptr));
        label_dimensiones->setText(QString());
        close->setText(QCoreApplication::translate("CargParm", "Volver", nullptr));
        clear_boton->setText(QCoreApplication::translate("CargParm", "Limpiar entorno", nullptr));
        name_arch->setText(QString());
        label_7->setText(QCoreApplication::translate("CargParm", "Origen:", nullptr));
        label_origen->setText(QString());
        label_8->setText(QCoreApplication::translate("CargParm", "Destino:", nullptr));
        label_destino->setText(QString());
        label_11->setText(QCoreApplication::translate("CargParm", "Nro de obstaculos:", nullptr));
        num_obst_labelC->setText(QString());
        boton_cargar->setText(QCoreApplication::translate("CargParm", "Abrir archivo", nullptr));
        label->setText(QCoreApplication::translate("CargParm", "Cargar parametros", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CargParm: public Ui_CargParm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARGPARM_H
