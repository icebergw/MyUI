#include "RadarCtrlWindow.h"

#include <QGridLayout>

RadarCtrlWindow::RadarCtrlWindow(QWidget *parent) : QWidget(parent)
{

    PB_FenPi = new QPushButton(tr("分批"),this);
    PB_HePi = new QPushButton(tr("合批"),this);
    PB_GaiPi = new QPushButton(tr("改批"),this);
    PB_HuanPi = new QPushButton(tr("换批"),this);
    PB_QingPi = new QPushButton(tr("清批"),this);

    this->setFixedSize(400,400);

    QGridLayout lo;
    lo.addWidget(PB_FenPi,0,0);
    lo.addWidget(PB_HePi,0,1);
    lo.addWidget(PB_GaiPi,0,2);
    lo.addWidget(PB_HuanPi,0,3);
    lo.addWidget(PB_QingPi,1,0);


    this->setLayout(&lo);


    PB_FenPi->show();
    PB_HePi->show();
    PB_GaiPi->show();
    PB_HuanPi->show();
    PB_QingPi->show();





}
