#include "mainwindow.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QIcon icon("./icons/bitmap.png"); // Ruta relativa al archivo de recursos
    a.setWindowIcon(icon);
    w.show();
    return a.exec();
}
