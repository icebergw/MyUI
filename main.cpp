#include "MainWindow.h"
#include <stdio.h>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
//    Q_INIT_RESOURCE(dockwidgets);

    MainWindow window;
    window.show();


    return app.exec();
}
