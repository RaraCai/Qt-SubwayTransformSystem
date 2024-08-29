//2252429蔡宇轩
#include "zoomio.h"

zoomIO::zoomIO() {}

void zoomIO::update_zoom(QGraphicsView* view,double scaleFactor){
    qreal factor = view->transform().scale(scaleFactor,scaleFactor).mapRect(QRectF(0, 0, 1, 1)).width();
    if (factor < 0.1 || factor > 50)
        return;
    view->scale(scaleFactor, scaleFactor);
    view->viewport()->update();
}
void zoomIO::zoomout(QGraphicsView* view){
    update_zoom(view,1.2);
}
void zoomIO::zoomin(QGraphicsView* view){
    update_zoom(view,0.833);
}
