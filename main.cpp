#include "application_robot.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Application_robot w;
    w.show();

    return a.exec();
}
