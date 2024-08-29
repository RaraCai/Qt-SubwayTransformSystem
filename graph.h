//2252429蔡宇轩
#ifndef SUBWAYGRAPH_H
#define SUBWAYGRAPH_H

#include "station.h"
#include "line.h"
#include <QString>
#include <QPoint>
#include <QVector>
#include <QHash>

//图的节点
class Node{
public:
    int station_id;     //节点标识id
    double distance;    //从算法起始点到该节点的距离
    Node* parent;       //指向最短路径的前一个节点的指针

    //构造函数
    Node(){};
    Node(int s_id,int dist){
        this->station_id=s_id;
        this->distance=dist;
        //this->parent=NULL;
    };

    //小顶堆运算符重载
    bool operator > (const Node& other){
        return this->distance>other.distance;
    }
};


//类定义-后端数据管理
class subwayGraph
{
protected:
    QHash<QString,int> stationsHash;        //站点名称的哈希映射
    QHash<QString,int> linesHash;           //线路名称的哈希映射
    QSet<Edge> edges;                       //地铁系统所有边
    QVector<QVector<Node>> Graph;           //地铁系统的图结构
public:
    QVector<station> stations;              //地铁系统所有站点
    QVector<line> lines;                    //地铁系统所有线路

public:
    //构造函数
    subwayGraph();

    //-----------------------读取类成员函数-----------------------
    //读取文件获取站点-线路数据
    bool readin(QString file_path);

    //获取网格结构
    void getGraph(QList<int>&stationList,QList<Edge>&edgeList);
    //获取某条线路名称
    QString getOneLineName(int line);
    //获取全部线路名称集合
    QList<QString> getAllLinesNameList();
    //获取线路颜色
    QColor getLineColor(int line);
    //获取某条线路哈希值:根据线路名称的哈希映射得到地址下标
    int getOneLineHash(QString lineName);
    //获取一个线路集合的哈希值
    QList<int> getAllLinesHash(QList<QString>lineNameList);
    //获取某条线路包含的全部站点
    QList<QString> getOneLineStationsList(int line);


    //获取站点名
    QString getOneStationName(int station);
    //获取全部站点名称
    QList<QString> getAllStationsName();
    //获取站点位置
    QPointF getStationPos(int station);
    //获取站点最小位置坐标
    QPointF getMinPos();
    //获取站点最大位置坐标
    QPointF getMaxPos();
    //获取站点所属线路(集合)，因一个站点可能同时属于多条线路
    QList<int> getStationLines(int station);
    //获取站点间的公共线路
    QList<int> getSharedLines(int station1,int station2);
    //获取站点哈希值
    int getOneStationHash(QString stationName);



    //-----------------------添加类成员函数-----------------------
    //添加线路
    void addLine(QString lineName,QColor lineColor);
    //添加站点
    bool addStation(station station);
    //添加站点间的线路关系
    bool addConnection(int station1,int station2,int line);


    //-----------------------计算类成员函数-----------------------
    //求时间最短线路
    bool queryTransfer_minTime(int station1,int station2,QList<int>&stationList, QList<Edge>&edgeList);
    //求换乘最少线路
    bool queryTransfer_minTrans(int station1,int station2,QList<int>&stationList, QList<Edge>&edgeList);
    //dfs-寻找同一线路上两个站点之间的站点
    void getMidStations(int station1,int station2,QList<int>&stationlist,QList<Edge>&edgelist);


private:
    //-----------------------数据管理函数-----------------------
    //清空数据
    void deleteData();
    //更新边界经纬度数据
    void updateLongiLati();


    //-----------------------图结构管理函数-----------------------
    //更改图结构-插入边，返回值表示是否成功插入
    bool insertEdge(int node1,int node2);
    //生成图结构
    void createGraph();

};

#endif // SUBWAYGRAPH_H
