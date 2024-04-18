#include "application_robot.h"
#include "ui_application_robot.h"
#include <QDebug>
#include <QHostAddress>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QScrollBar>




Application_robot::Application_robot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Application_robot)
{
    ui->setupUi(this);


    //socket.connectToHost(QHostAddress("192.168.1.61"), 5000);
    manager = new QNetworkAccessManager(this);

    connect(ui->pushButton_avancer, SIGNAL(pressed()), this, SLOT(envoyer()));
    connect(ui->pushButton_avancer, SIGNAL(released()), this, SLOT(envoyer()));
    connect(ui->pushButton_reculer, SIGNAL(pressed()), this, SLOT(envoyer()));
    connect(ui->pushButton_reculer, SIGNAL(released()), this, SLOT(envoyer()));
    connect(ui->pushButton_droit, SIGNAL(pressed()), this, SLOT(envoyer()));
    connect(ui->pushButton_droit, SIGNAL(released()), this, SLOT(envoyer()));
    connect(ui->pushButton_gauche, SIGNAL(pressed()), this, SLOT(envoyer()));
    connect(ui->pushButton_gauche, SIGNAL(released()), this, SLOT(envoyer()));
    /*connect(ui->pushButton_haut_camera, SIGNAL(clicked()), this, SLOT(camera_haut()));
    connect(ui->pushButton_bas_camera, SIGNAL(clicked()), this, SLOT(camera_bas()));
    connect(ui->pushButton_droit_camera, SIGNAL(clicked()), this, SLOT(camera_droite()));
    connect(ui->pushButton_gauche_camera, SIGNAL(clicked()), this, SLOT(camera_gauche()));
    connect(this,SIGNAL(refresh()),this,SLOT(robot_avancer()));*/
    connect(ui->pushButton_connect,SIGNAL(clicked()),this, SLOT(connected()));
    connect(ui->dial_tourelle_haut, SIGNAL(valueChanged(int)), this, SLOT(envoyer()));
    connect(ui->dial_tourelle_bas, SIGNAL(valueChanged(int)), this, SLOT(envoyer()));

    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(slot_replyFinished(QNetworkReply*)));


    connect(&socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));

   // ui->label_tourelle_haut->set

timer = new QTimer(this);
connect(timer,SIGNAL(timeout()),this,SLOT(bdd_save()));


}

Application_robot::~Application_robot()
{
    delete ui;
}

//Connexion à la socket
void Application_robot::connected()
{


    if(ui->pushButton_connect->text() == "Connect")
    {
    /*proxy.setType(QNetworkProxy::HttpProxy);
    proxy.setHostName("10.0.0.1");
    proxy.setPort(3128);
    socket.setProxy(proxy);*/
       // click();
    socket.connectToHost(QHostAddress("192.168.1.101"), 5000);
    if(socket.waitForConnected(3000))
    {

       ui->label_connect->setText("Connecter !");
       ui->pushButton_connect->setText("Disconnect");
        //click();
       //timer->start(600000);


    }
    else {

        ui->label_connect->setText("Pas Connecter!");
         timer->start(300000);
    }
    }
    else if (ui->pushButton_connect->text() == "Disconnect")
    {

        if(socket.isOpen())
        {
        socket.close();
        ui->pushButton_connect->setText("Connect");
        ui->label_connect->setText("Disconnect!");

        }
        else
        {
            qDebug()<<"Error";
        }
    }

}

// fonction qui permet de lire les données réçu depuis la socket
void Application_robot::onReadyRead()
{

    QString buffle = socket.readAll();
    //partie json
    QJsonDocument jsonResponse = QJsonDocument::fromJson(buffle.toLatin1());
    QJsonObject jsonObject = jsonResponse.object();

    QJsonValue temperature  = jsonObject.value("Temperature");
    QJsonValue Gaz = jsonObject.value("Gaz");
    QJsonValue ultrason = jsonObject.value("ultrason");
    QJsonValue acc_x = jsonObject.value("acc_x");
    QJsonValue acc_y = jsonObject.value("acc_y");
    QJsonValue acc_z = jsonObject.value("acc_z");
    QJsonValue gyro_x = jsonObject.value("gyro_x");
    QJsonValue gyro_y = jsonObject.value("gyro_y");
    QJsonValue gyro_z = jsonObject.value("gyro_y");

    ui->Temperature_label->setText(QString().number(temperature.toDouble()));
    ui->Gaz_label->setText(QString().number(Gaz.toInt()));
    ui->Ultrason_label->setText(QString().number(ultrason.toInt()));
    ui->acc_x_label->setText(QString().number(acc_x.toInt()));
    ui->acc_y_label->setText(QString().number(acc_y.toInt()));
    ui->acc_z_label->setText(QString().number(acc_z.toInt()));
    ui->gyro_x_label->setText(QString().number(gyro_x.toInt()));
    ui->gyro_y_label->setText(QString().number(gyro_y.toInt()));
    ui->gyro_z_label->setText(QString().number(gyro_z.toInt()));

    //qDebug()<<"Temperature : "<<temperature.toDouble()<<" | "<<"Gaz : "<<Gaz.toInt()<<" | "<<"ultrason : "<<ultrason.toInt()<<" | "<<"acc_x : "<<acc_x.toInt()<<" | "<<"acc_y : "<<acc_y.toInt()<<" | "<<"acc_z : "<<acc_z.toInt()<<" | "<<"gyro_x : "<<gyro_x.toInt()<<" | "<<"gyro_y : "<<gyro_y.toInt()<<" | "<<"gyro_z : "<<gyro_z.toInt();

}


// les différentes fonctions pour faire bouger la tourelle et le robot
void Application_robot::envoyer()
{
    QString robot;
    int camera_haut,camera_bas;

    if(ui->pushButton_avancer->isDown() || ui->pushButton_reculer->isDown() || ui->pushButton_droit->isDown() || ui->pushButton_gauche->isDown())
    {
    if(ui->pushButton_avancer->isDown()){
    {
        robot = "z";
    }

    }

    else if(ui->pushButton_reculer->isDown())
{
        {
                robot = "s";

        }

    }

   else if(ui->pushButton_droit->isDown())
    {
            robot = "d";

    }

   else if(ui->pushButton_gauche->isDown())
    {
        robot = "q";

    }
    }
    else {
        robot = "x";
    }


    //"{"Camerabas": "90", "Camerahaut": "90", "Robot": "x"}"

    camera_haut =ui->dial_tourelle_haut->value();
    camera_bas = ui->dial_tourelle_bas->value();
    QJsonObject objet;
    objet.insert("Camerahaut", QJsonValue::fromVariant(camera_haut));
    objet.insert("Camerabas", QJsonValue::fromVariant(camera_bas));
    objet.insert("Robot", QJsonValue::fromVariant(robot));

    QJsonDocument doc(objet);
    socket.write(QByteArray(doc.toJson()));

    qDebug()<<doc.toJson();


}

void Application_robot::commander_robot()
{


}




// Coter camera !
void Application_robot::PicConnect(QString PicUrl)
{
    request.setUrl(QUrl(PicUrl));
    manager->get(request);
}

void Application_robot::slot_replyFinished(QNetworkReply* reply)
{
     QByteArray data = reply->readAll();
     img->loadFromData(data, "JPG");
}



void Application_robot::ShowPic()
{
    isPicOnLabel=true;

    while(1)
    {
        if(isPicOnLabel==false)
        break;
        PicConnect(PU);
        // Usado como retraso
        QEventLoop eventloop;
        QTimer::singleShot(10, &eventloop, SLOT(quit()));
        eventloop.exec();
         *scaledimg=img->scaled(640,480,Qt::KeepAspectRatio);
         ui->cam->setPixmap(QPixmap::fromImage(*scaledimg));
     }
}

void Application_robot::click()
{

      // Obtener servidor
       ip="192.168.1.101";
       port=8080;
       PU=QString("http://"+ip+":"+tr("%1").arg(port)+"/?action=snapshot");
      ShowPic();

}



void Application_robot::bdd_save()
{
    qDebug()<<"marche bien!";
}
