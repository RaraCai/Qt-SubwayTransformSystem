//2252429蔡宇轩
#include "line.h"

line::line() {}
line::line(QString namestr,QColor linecolor){
    this->name=namestr;
    this->color=linecolor;
}
QList<Edge> line:: getThisLineEdgeslist(){
    QList<Edge> edgelist=QList(this->edges.begin(),this->edges.end());
    return edgelist;
}
