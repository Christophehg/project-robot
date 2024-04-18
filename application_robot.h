#ifndef APPLICATION_ROBOT_H
#define APPLICATION_ROBOT_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QNetworkProxy>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QUrl>
#include <QPixmap>
#include <QFile>
#include <QPicture>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include<QTimer>




namespace Ui {
class Application_robot;
}

class Application_robot : public QMainWindow
{
    Q_OBJECT

public:
    explicit Application_robot(QWidget *parent = nullptr);
    ~Application_robot();
    void PicConnect(QString p);
    void SetWindow();
    void ShowPic();


public slots:
void onReadyRead();
void connected();
void envoyer();
void slot_replyFinished(QNetworkReply* reply);
void click();
void commander_robot();
void bdd_save();

//void keyPressEvent(QKeyEvent *ev);
//void keyReleaseEvent(QKeyEvent *ev);



signals :

void refresh();

private:
    Ui::Application_robot *ui;
    QTcpSocket  socket;
    QNetworkProxy proxy;
    QNetworkAccessManager *manager;
    bool isPicOnLabel;
    QImage* img=new QImage,* scaledimg=new QImage;
    QNetworkRequest request;
    QString ip;
    qint16 port;
    QString PU;
    QTimer *timer;


};

#endif // APPLICATION_ROBOT_H
