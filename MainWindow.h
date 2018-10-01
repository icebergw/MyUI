#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QFile>
#include <QDockWidget>



#include "RadarCtrlWindow.h"


#define MAINWINDOW_WIDTH 1920
#define MAINWINDOW_LENGTH 1080

class MainWindow : public QMainWindow
{
public:
    MainWindow();
    ~MainWindow();



    QDockWidget *dw_AR;
    QDockWidget *dw_RadarCtrl;
    QDockWidget *dw_SpreadShow;




    QMenu *viewMenu;



    RadarCtrlWindow *RadarCtrlWin;



protected:
    void paintEvent(QPaintEvent *event);

    void openQssFile();


};

#endif // MAINWINDOW_H
