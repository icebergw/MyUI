#ifndef RADARCTRLWINDOW_H
#define RADARCTRLWINDOW_H

#include <QWidget>
#include <QPushButton>

class RadarCtrlWindow : public QWidget
{
    Q_OBJECT
public:
    explicit RadarCtrlWindow(QWidget *parent = nullptr);




    QPushButton *PB_FenPi;
    QPushButton *PB_HePi;
    QPushButton *PB_GaiPi;
    QPushButton *PB_HuanPi;
    QPushButton *PB_QingPi;

signals:

public slots:
};

#endif // RADARCTRLWINDOW_H
