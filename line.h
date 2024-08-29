//2252429蔡宇轩
#ifndef LINE_H
#define LINE_H

#include <QString>
#include <QColor>
#include <QPair>
#include <QSet>
#include <QVector>

//图的边
typedef QPair<int,int> Edge;

//友元引入
class subwayGraph;
class window_updateLines;
class QTextStream;

class line
{
protected:
    int id;                     //线路ID
    QString name;               //线路名称
    QColor color;               //线路代表颜色
    QVector <QString> fromto;   //始发站和终点站
    QSet<int> stationSet;       //全部站点集合
    QSet<Edge> edges;           //站点间连接关系
public:
    //构造函数
    line();
    line(QString namestr,QColor linecolor);
    QList<Edge> getThisLineEdgeslist();

    //声明友元
    friend class subwayGraph;
    friend class QTextStream;
    friend class window_updateLines;
};

#endif // LINE_H
