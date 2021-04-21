#include "../Header Files/mainwindow.h"

#include <QApplication>

//MAIN INTERFACE SHOW FILE

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
