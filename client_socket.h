#ifndef CLIENT_SOCKET_H
#define CLIENT_SOCKET_H

#include <QMainWindow>
#include <QTcpSocket>

class Client_socket
{
public:
    Client_socket();

public slots:
    void onReadyRead();

private:

    QTcpSocket  _socket;
};

#endif // CLIENT_SOCKET_H
