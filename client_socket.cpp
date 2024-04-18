#include "client_socket.h"
#include <QDebug>
#include <QHostAddress>

Client_socket::Client_socket()
{
    _socket.connectToHost(QHostAddress("127.0.0.1"), 4242);
    connect(, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
}
