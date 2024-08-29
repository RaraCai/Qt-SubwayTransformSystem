//2252429蔡宇轩
#ifndef STATION_H
#define STATION_H

#include <QString>
#include <QPointF>
#include <QSet>
#include <QList>

//友元引入
class subwayGraph;
class window_updateLines;
class QTextStream;


//类定义-地铁站点
class station
{
protected:
    int id;                 //站点编号
    QString name;           //站点名称
    double longi,lati;      //站点地理位置经纬度
    QSet<int> lines;          //站点所属线路
    //任意站点边界位置范围
    static double min_longi,max_longi,min_lati,max_lati;

public:
    //构造函数
    station();
    station(QString namestr,double longitude,double latitude,QList<int> linelist);


protected:
    //求站点间距
    int getDistance(station other);
public:
    //声明友元
    friend class subwayGraph;
    friend class QTextStream;
    friend class window_updateLines;
};

#endif // STATION_H
