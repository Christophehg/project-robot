/********************************************************************************
** Form generated from reading UI file 'application_robot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_ROBOT_H
#define UI_APPLICATION_ROBOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Application_robot
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_demarrer_robot;
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_temperature_text;
    QLabel *label_temperature_valeur;
    QLabel *label_gaz_text;
    QLabel *label_gaz_valeur;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_gauche_camera;
    QPushButton *pushButton_droit_camera;
    QPushButton *pushButton_haut_camera;
    QPushButton *pushButton_bas_camera;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_gauche;
    QPushButton *pushButton_droit;
    QPushButton *pushButton_avancer;
    QPushButton *pushButton_reculer;
    QLabel *label_connect;

    void setupUi(QMainWindow *Application_robot)
    {
        if (Application_robot->objectName().isEmpty())
            Application_robot->setObjectName(QString::fromUtf8("Application_robot"));
        Application_robot->resize(911, 528);
        centralWidget = new QWidget(Application_robot);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_connect = new QPushButton(centralWidget);
        pushButton_connect->setObjectName(QString::fromUtf8("pushButton_connect"));
        pushButton_connect->setGeometry(QRect(440, 390, 75, 23));
        pushButton_demarrer_robot = new QPushButton(centralWidget);
        pushButton_demarrer_robot->setObjectName(QString::fromUtf8("pushButton_demarrer_robot"));
        pushButton_demarrer_robot->setGeometry(QRect(440, 430, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 381, 281));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(620, 40, 261, 251));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 20, 261, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_temperature_text = new QLabel(verticalLayoutWidget);
        label_temperature_text->setObjectName(QString::fromUtf8("label_temperature_text"));
        label_temperature_text->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_temperature_text);

        label_temperature_valeur = new QLabel(verticalLayoutWidget);
        label_temperature_valeur->setObjectName(QString::fromUtf8("label_temperature_valeur"));
        label_temperature_valeur->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_temperature_valeur);

        label_gaz_text = new QLabel(verticalLayoutWidget);
        label_gaz_text->setObjectName(QString::fromUtf8("label_gaz_text"));
        label_gaz_text->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_gaz_text);

        label_gaz_valeur = new QLabel(verticalLayoutWidget);
        label_gaz_valeur->setObjectName(QString::fromUtf8("label_gaz_valeur"));
        label_gaz_valeur->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_gaz_valeur);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 370, 291, 141));
        pushButton_gauche_camera = new QPushButton(groupBox_2);
        pushButton_gauche_camera->setObjectName(QString::fromUtf8("pushButton_gauche_camera"));
        pushButton_gauche_camera->setGeometry(QRect(30, 60, 75, 23));
        pushButton_droit_camera = new QPushButton(groupBox_2);
        pushButton_droit_camera->setObjectName(QString::fromUtf8("pushButton_droit_camera"));
        pushButton_droit_camera->setGeometry(QRect(190, 60, 75, 23));
        pushButton_haut_camera = new QPushButton(groupBox_2);
        pushButton_haut_camera->setObjectName(QString::fromUtf8("pushButton_haut_camera"));
        pushButton_haut_camera->setGeometry(QRect(110, 20, 75, 23));
        pushButton_bas_camera = new QPushButton(groupBox_2);
        pushButton_bas_camera->setObjectName(QString::fromUtf8("pushButton_bas_camera"));
        pushButton_bas_camera->setGeometry(QRect(110, 100, 75, 23));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(590, 330, 301, 181));
        pushButton_gauche = new QPushButton(groupBox_3);
        pushButton_gauche->setObjectName(QString::fromUtf8("pushButton_gauche"));
        pushButton_gauche->setGeometry(QRect(30, 80, 75, 23));
        pushButton_droit = new QPushButton(groupBox_3);
        pushButton_droit->setObjectName(QString::fromUtf8("pushButton_droit"));
        pushButton_droit->setGeometry(QRect(190, 80, 75, 23));
        pushButton_avancer = new QPushButton(groupBox_3);
        pushButton_avancer->setObjectName(QString::fromUtf8("pushButton_avancer"));
        pushButton_avancer->setGeometry(QRect(110, 30, 75, 23));
        pushButton_reculer = new QPushButton(groupBox_3);
        pushButton_reculer->setObjectName(QString::fromUtf8("pushButton_reculer"));
        pushButton_reculer->setGeometry(QRect(110, 130, 75, 23));
        label_connect = new QLabel(centralWidget);
        label_connect->setObjectName(QString::fromUtf8("label_connect"));
        label_connect->setGeometry(QRect(440, 360, 81, 20));
        label_connect->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_connect->setLayoutDirection(Qt::LeftToRight);
        label_connect->setAlignment(Qt::AlignCenter);
        Application_robot->setCentralWidget(centralWidget);

        retranslateUi(Application_robot);

        QMetaObject::connectSlotsByName(Application_robot);
    } // setupUi

    void retranslateUi(QMainWindow *Application_robot)
    {
        Application_robot->setWindowTitle(QApplication::translate("Application_robot", "Application_robot", nullptr));
        pushButton_connect->setText(QApplication::translate("Application_robot", "Connect", nullptr));
        pushButton_demarrer_robot->setText(QApplication::translate("Application_robot", "Start robot", nullptr));
        label->setText(QApplication::translate("Application_robot", "Camera", nullptr));
        groupBox->setTitle(QApplication::translate("Application_robot", "Capteurs", nullptr));
        label_temperature_text->setText(QApplication::translate("Application_robot", "Temperature", nullptr));
        label_temperature_valeur->setText(QApplication::translate("Application_robot", ".....", nullptr));
        label_gaz_text->setText(QApplication::translate("Application_robot", "Gaz", nullptr));
        label_gaz_valeur->setText(QApplication::translate("Application_robot", "......", nullptr));
        label_2->setText(QApplication::translate("Application_robot", "metr", nullptr));
        label_3->setText(QApplication::translate("Application_robot", "....", nullptr));
        label_4->setText(QApplication::translate("Application_robot", "Autre", nullptr));
        label_5->setText(QApplication::translate("Application_robot", "....", nullptr));
        groupBox_2->setTitle(QApplication::translate("Application_robot", "Camera", nullptr));
        pushButton_gauche_camera->setText(QApplication::translate("Application_robot", "gauche", nullptr));
        pushButton_droit_camera->setText(QApplication::translate("Application_robot", "droit", nullptr));
        pushButton_haut_camera->setText(QApplication::translate("Application_robot", "Haut", nullptr));
        pushButton_bas_camera->setText(QApplication::translate("Application_robot", "Bas", nullptr));
        groupBox_3->setTitle(QApplication::translate("Application_robot", "Robot", nullptr));
        pushButton_gauche->setText(QApplication::translate("Application_robot", "Gauche", nullptr));
        pushButton_droit->setText(QApplication::translate("Application_robot", "Droit", nullptr));
        pushButton_avancer->setText(QApplication::translate("Application_robot", "Avancer", nullptr));
        pushButton_reculer->setText(QApplication::translate("Application_robot", "Reculer", nullptr));
        label_connect->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Application_robot: public Ui_Application_robot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_ROBOT_H
