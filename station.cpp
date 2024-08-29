//2252429蔡宇轩
#include "station.h"
#include <math.h>

//构造函数
station::station() {}
station::station(QString namestr,double longitude,double latitude,QList<int> linelist){
    this->name=namestr;
    this->lati=latitude;
    this->longi=longitude;
    this->lines=QSet<int>(linelist.begin(),linelist.end());
}

//求站点间距
int station::getDistance(station other){
    //规定计算常量
    const double EARTH_RADIUS=6378;     //地球半径
    const double PI=3.14;               //pi

    //根据经纬度估算直线距离
    double a= this->lati*PI/180.0 - other.lati*PI/180.0;
    double b= this->longi*PI/180.0 - other.longi*PI/180.0;
    double s = 2 * asin(sqrt(pow(sin(a/2),2) + cos(this->lati*PI/180.0)*cos(other.lati*PI/180.0)*pow(sin(b/2),2)));
    s*=EARTH_RADIUS;
    s = (int)(s * 10000000) / 10000;

    return s;
}

//类常量定义
double station::min_longi=200;
double station::min_lati=200;
double station::max_longi=0;
double station::max_lati=0;
