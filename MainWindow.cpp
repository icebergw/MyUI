#include "MainWindow.h"
#include <QDebug>
#include <QPushButton>
#include <QGridLayout>
#include <QPainter>
#include <QLineEdit>
#include <QMenu>
#include <QMenuBar>
#include <QTextEdit>
#include <QCheckBox>

MainWindow::MainWindow()
{

    RadarCtrlWin = new RadarCtrlWindow();

    this->resize(MAINWINDOW_WIDTH, MAINWINDOW_LENGTH);

//    QWidget *widget = new QWidget();
//    this->setCentralWidget(widget);
//    QCheckBox *cbox = new QCheckBox(this);
//    cbox->setText("choose");
//    cbox->setChecked(false);
//    QPushButton* button = new QPushButton(this);
//    QVBoxLayout *layout = new QVBoxLayout(this);

//    layout->addWidget(cbox);
//    layout->addWidget(button);

//    widget->setLayout(layout);



    QPushButton *PB_FenPi = new QPushButton(tr("分批"),this);
    QPushButton *PB_HePi = new QPushButton(tr("合批"),this);
    QPushButton *PB_GaiPi = new QPushButton(tr("改批"),this);
    QPushButton *PB_HuanPi = new QPushButton(tr("换批"),this);
    QPushButton *PB_QingPi = new QPushButton(tr("清批"),this);

    QWidget* widget = new QWidget(this);



    PB_FenPi->setFixedHeight(30);
//    this->setFixedSize(400,400);

    QGridLayout lo;
    lo.addWidget(PB_FenPi,0,0);
    lo.addWidget(PB_HePi,1,1);
    lo.addWidget(PB_GaiPi,0,2);
    lo.addWidget(PB_HuanPi,0,3);
    lo.addWidget(PB_QingPi,1,0);
//    lo.SetFixedSize(400,400);


//    this->setLayout(&lo);

//    widget->setLayout(&lo);
    this->setCentralWidget(widget);
//    this->setLayout();

    PB_FenPi->setGeometry(200,100,100,100);

    PB_FenPi->show();
    PB_HePi->show();
    PB_GaiPi->show();
    PB_HuanPi->show();
    PB_QingPi->show();

    /*

    openQssFile();

    QPushButton *button = new QPushButton(this);
    button->setBaseSize(240,240);
    button->setText("按钮");

    QLineEdit *led = new QLineEdit(this);
    led->setGeometry(0,0,200,200);
    led->show();

    viewMenu = menuBar()->addMenu(tr("&View"));





    QFont font=this->font();
    font.setFamily("楷体");
    font.setPixelSize(18);

    dw_AR = new QDockWidget(tr("AR显"), this);
    dw_AR->setAllowedAreas( Qt::RightDockWidgetArea);
    //可关闭 可悬浮 可移动
    dw_AR->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable| QDockWidget::DockWidgetMovable);
    dw_AR->showMinimized();
    dw_AR->setFixedSize(420, 420);
    QPushButton *btn = new QPushButton(dw_AR);
    btn->show();
    addDockWidget(Qt::RightDockWidgetArea,dw_AR);

    dw_RadarCtrl = new QDockWidget(tr("雷达操控"), this);
    dw_RadarCtrl->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    dw_RadarCtrl->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
    dw_RadarCtrl->showMinimized();
    btn = new QPushButton(dw_RadarCtrl);
    btn->show();
    //    dw_RadarCtrl->setWidget(this);

    //    addDockWidget(Qt::RightDockWidgetArea,dw_RadarCtrl);


    dw_SpreadShow = new QDockWidget(tr("分区显示"), this);
    dw_SpreadShow->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    dw_SpreadShow->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
    dw_SpreadShow->showMinimized();
    btn = new QPushButton(dw_SpreadShow);
    btn->show();
    addDockWidget(Qt::RightDockWidgetArea,dw_SpreadShow);

    viewMenu->addAction(dw_AR->toggleViewAction());
    viewMenu->addAction(dw_RadarCtrl->toggleViewAction());
    viewMenu->addAction(dw_SpreadShow->toggleViewAction());




    //    statusBar()->showMessage(tr("Ready"));
    //    stt


    setWindowTitle(tr("DockWindows"));  //设置主窗口的标题栏文字
    QTextEdit *te=new QTextEdit(this);  //定义一个QTextEdit对象作为主窗口
    te->setText(tr("Main Window"));
    te->setAlignment(Qt::AlignCenter);
    setCentralWidget(te);               //将此编辑框设为主窗口的中央窗体
    //停靠窗口1
    QDockWidget *dock=new QDockWidget(tr("DockWindow1"),this);
    dock->setFeatures(QDockWidget::DockWidgetMovable);            //可移动
    dock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    QTextEdit *te1 =new QTextEdit();
    te1->setText(tr("Window1,The dock widget can be moved Lest or Right" ""));
    dock->setWidget(te1);
    addDockWidget(Qt::RightDockWidgetArea,dock);
    //停靠窗口2
    dock=new QDockWidget(tr("DockWindow2"),this);
    dock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable); //可关闭、可浮动
    QTextEdit *te2 =new QTextEdit();
    te2->setText(tr("Window2,The dock widget can be detached from the main window,""and floated as an independent window, and can be closed"));
    dock->setWidget(te2);
    addDockWidget(Qt::RightDockWidgetArea,dock);
    //停靠窗口3
    dock=new QDockWidget(tr("DockWindow3"),this);
    dock->setFeatures(QDockWidget::AllDockWidgetFeatures);     //全部特性
    QTextEdit *te3 =new QTextEdit();
    te3->setText(tr("Window3,The dock widget can be closed, moved, and floated"));
    dock->setWidget(RadarCtrlWin);
//    dock->setWidget(te3);
    addDockWidget(Qt::LeftDockWidgetArea,dock);


*/
}

MainWindow::~MainWindow()
{

}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setBrush(Qt::black);
    //    painter.drawRect(0,0,1500,1080);
    painter.setPen(Qt::red);
    //    painter.drawEllipse(420,0,1080,1080);

}

void MainWindow::openQssFile()
{
    QString qss;
    QFile *file =new QFile(":/main.qss");
    file->open(QFile::ReadOnly);
    if(file->isOpen())
    {
        qss = QLatin1String(file->readAll());
        this->setStyleSheet(qss);
        file->close();
        delete file;
        qDebug() << "qss file is opened!";
    }
    else
    {
        qDebug() << "qss file is closed!";
    }
}
