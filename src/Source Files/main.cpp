/**
 * @file main.cpp
 * @brief Main '.cpp' file, QtApplication startup
 *
 * @author Tomas Lukac (xlukac16)
 * Team: QWERTZ
 */

#include "../Header Files/mainwindow.h"

#include <QApplication>

//MAIN INTERFACE SHOW FILE


/**
 * Main Function
 * @brief QtApplication startup, MainWindow popup
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
