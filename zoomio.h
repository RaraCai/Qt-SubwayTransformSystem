//2252429蔡宇轩
#ifndef ZOOMIO_H
#define ZOOMIO_H
#include <QGraphicsView>
#include<cmath>
#include<QDebug>
#include<QWheelEvent>

class zoomIO
{
public:
    zoomIO();
protected:
    void update_zoom(QGraphicsView* view,double scaleFactor);
public:
    void zoomout(QGraphicsView* view);
    void zoomin(QGraphicsView* view);

};

#endif // ZOOMIO_H
