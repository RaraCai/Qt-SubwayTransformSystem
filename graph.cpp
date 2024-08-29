//2252429蔡宇轩
#include "graph.h"
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <QDir>
#include <queue>
#include <QStack>
#include <QDebug>

//构造函数
subwayGraph::subwayGraph() {}

//----------------------------------------------
//读取文件获取站点-线路数据
bool subwayGraph::readin(QString file_path){
    //打开文件并判断是否成功
    QFile file(file_path);
    if(!file.open(QIODevice::ReadOnly)){
        return false;//打开文件失败
    }
    else{
        //设置输入流
        QTextStream fin(&file);
        //读取文件内容并存储
        int lineIndex;
        int s1Index,s2Index;//s1-上一站，s2=当前站
        while(!fin.atEnd()){
            //读取线路信息-----------------------------------

            class line line;
            //读入的数据
            QString x_str,linename_str,sum_str,fromto_str,color_str;

            //读取线路基本信息
            fin>>x_str>>linename_str>>sum_str>>fromto_str>>color_str;

            // 清除字符串两端的空白字符
            x_str = x_str.trimmed();
            linename_str = linename_str.trimmed();
            sum_str = sum_str.trimmed();
            fromto_str = fromto_str.trimmed();
            color_str = color_str.trimmed();


            //填充line对象
            line.id=x_str.section(':',1,1).toInt();
            line.name=linename_str.section(':',1,1);
            //处理colorstr，移除#并转化为QColor
            bool colorOK;
            line.color.setRgb(color_str.section(':',1,1).remove(0,1).toInt(&colorOK,16));
            if(colorOK==false){
                //若颜色转换失败则默认设置为黑色
                line.color=Qt::black;
            }
            //解析起点站和终点站
            QString from=fromto_str.section('-',0,0);
            QString to=fromto_str.section('-',1,1);
            line.fromto.push_back(from);
            line.fromto.push_back(to);


            //将line加入graph全局的哈希映射中
            if(this->linesHash.count(line.name)){//该线路已存在，考虑到同一条线路有支线的情况
                lineIndex=this->linesHash[line.name];
                this->lines[lineIndex].fromto.push_back(from);
                this->lines[lineIndex].fromto.push_back(to);
            }
            else{
                lineIndex=this->linesHash[line.name]=this->lines.size();//不存在则加入
                this->lines.push_back(line);
            }

            //读取各站点信息-------------------------------------
            int total_stations=sum_str.section(':',1,1).toInt();

            for(int i=0;i<total_stations;i++){
                station s;
                fin>>s.id>>s.name>>s.longi>>s.lati;

                //qDebug()<<s.id<<s.name<<s.longi<<s.lati;

                //将当前站点加入graph全局的哈希映射中
                if(this->stationsHash.contains(s.name)){
                    s2Index=this->stationsHash[s.name];
                }
                else{
                    //不存在，加入
                    s2Index=this->stationsHash[s.name]=this->stations.size();
                    this->stations.push_back(s);
                }

                //s的lines集合加入当前line
                this->stations[s2Index].lines.insert(lineIndex);
                //当前line的stations集合加入s
                this->lines[lineIndex].stationSet.insert(s2Index);

                //建立上一站与本站的edge关系
                if(i!=0){//除了i=0的起点站没有上一站
                    this->lines[lineIndex].edges.insert(Edge(s1Index,s2Index));
                    this->lines[lineIndex].edges.insert(Edge(s2Index,s1Index));
                    insertEdge(s1Index,s2Index);
                }
                //更新站点索引，下一次循环开始本站为新的上一站
                s1Index=s2Index;

            }//end of for(stations)

            fin.readLine();//读取掉中间的空行

        }//end of while

        //关闭文件
        file.close();

        //有新的站点加入更新station类常量
        updateLongiLati();
        return true;//打开文件并操作成功
    }
}

//----------------------------------------------
//获取网格结构
void subwayGraph::getGraph(QList<int>&stationList,QList<Edge>&edgeList){
    //清除原有的stationList和edgeList，便于本次获取网格结构后重新赋值
    stationList.clear();
    edgeList.clear();

    for(int i=0;i<int(this->stations.size());i++){
        stationList.push_back(i);
    }
    edgeList=QList<Edge>(this->edges.begin(),this->edges.end());
}

//----------------------------------------------
//获取某条线路名称
QString subwayGraph::getOneLineName(int line){
    return this->lines[line].name;
}
//获取全部线路名称集合
QList<QString> subwayGraph::getAllLinesNameList(){
    QList<QString> allLinesNameList;
    for(int i=0;i<int(this->lines.size());i++){
        allLinesNameList.push_back(this->lines[i].name);
    }
    return allLinesNameList;
}
//获取线路颜色
QColor subwayGraph::getLineColor(int line){
    return this->lines[line].color;
}
//获取某条线路哈希值:根据线路名称的哈希映射得到地址下标
int subwayGraph::getOneLineHash(QString lineName){
    if (this->linesHash.contains(lineName))
        return this->linesHash[lineName];
    else
        return -100;
}
//获取全部线路哈希值
QList<int> subwayGraph::getAllLinesHash(QList<QString>lineNameList){
    QList<int> AllLinesHashList;
    for(int i=0;i<int(lineNameList.size());i++){
        AllLinesHashList.push_back(this->getOneLineHash(lineNameList[i]));
    }
    return AllLinesHashList;
}
//获取某条线路包含的全部站点
QList<QString> subwayGraph::getOneLineStationsList(int line){
    //返回列表
    QList<QString> OneLineStationList;
    //目标查询线路所有站点对应的唯一id
    QSet<int> target_stationSet=this->lines[line].stationSet;
    for(auto& s_id:this->lines[line].stationSet){
        OneLineStationList.push_back(getOneStationName(s_id));
    }
    return OneLineStationList;
}

//----------------------------------------------
//获取站点名
QString subwayGraph::getOneStationName(int station){
    //station是本graph里站点的唯一id下标
    return this->stations[station].name;
}
//获取全部站点名称
QList<QString> subwayGraph::getAllStationsName(){
    //返回列表
    QList<QString>AllStationsNameList;
    for(int i=0;i<int(this->stations.size());i++){
        AllStationsNameList.push_back(this->stations[i].name);
    }
    return AllStationsNameList;
}
//获取站点位置（经纬度）
QPointF subwayGraph::getStationPos(int station){
    class station target_station=this->stations[station];
    return QPointF (target_station.longi,target_station.lati);
}
//获取站点最小位置坐标
QPointF subwayGraph::getMinPos(){
    return QPointF(station::min_longi,station::min_lati);
}
//获取站点最大位置坐标
QPointF subwayGraph::getMaxPos(){
    return QPointF(station::max_longi,station::max_lati);
}
//获取站点所属线路(集合)，因一个站点可能同时属于多条线路
QList<int> subwayGraph::getStationLines(int station){
    //Qset转换为Qlist类型
    QSet<int> linesSet=this->stations[station].lines;
    return QList<int>(linesSet.begin(),linesSet.end());
}
//获取站点间的公共线路
QList<int> subwayGraph::getSharedLines(int station1,int station2){
    //station1和station2的公共线路
    QSet<int>lines1=this->stations[station1].lines;
    QSet<int>lines2=this->stations[station2].lines;
    QSet<int> SharedLines=lines1.intersect(lines2);
    //转换为QList并返回
    return QList<int>(SharedLines.begin(),SharedLines.end());
}
//获取站点哈希值
int subwayGraph::getOneStationHash(QString stationName){
    if(this->stationsHash.contains(stationName))
        return this->stationsHash[stationName];
    else
        return -100;
}



//-----------------------添加类成员函数-----------------------
//添加线路
void subwayGraph::addLine(QString lineName,QColor lineColor){
    //hash值从0开始，新线路的hash值=未加入前线路的总数
    int new_hash=this->lines.size();
    //加入哈希映射
    this->linesHash[lineName]=new_hash;
    //构造line并加入线路vector
    line new_line=line(lineName,lineColor);
    new_line.id=new_hash+1;
    this->lines.push_back(new_line);
}
//添加站点
bool subwayGraph::addStation(station station){
    //hash值从0开始，新站点的hash值=未加入前站点的总数
    int new_hash=this->stations.size();
    bool newstation=true;

    if(this->stationsHash.contains(station.name)){//该站点已经存在
        new_hash=this->stationsHash[station.name];
        for(auto&i:station.lines){
            this->stations[new_hash].lines.insert(i);
        }
        newstation=false;
    }
    else{//不存在
        //加入哈希映射
        this->stationsHash[station.name]=new_hash;
        //加入站点vector
        this->stations.push_back(station);
    }

    //与该站点有关的lines新增此站点
    for(auto&i:station.lines){
        this->lines[i].stationSet.insert(new_hash);
    }

    //检查新站点的加入是否改变station类的经纬度常量
    updateLongiLati();

    return newstation;
}
//添加站点间的线路关系
bool subwayGraph::addConnection(int station1,int station2,int line){
    //判断这条边是否已经存在
    if(!this->edges.contains(Edge(station1,station2))){
        //针对整个图增加边
        insertEdge(station1,station2);
        //针对线路增加边
        this->lines[line].edges.insert(Edge(station1,station2));
        this->lines[line].edges.insert(Edge(station2,station1));

        return true;
    }
    return false;//存在无需添加
}


//-----------------------计算类成员函数-----------------------
//求时间最短线路
bool subwayGraph::queryTransfer_minTime(int station1,int station2,QList<int>&stationList, QList<Edge>&edgeList){
    //清空上一次的求解结果
    stationList.clear();
    edgeList.clear();
    //同站进出
    if(station1==station2){
        stationList.push_back(station1);
        stationList.push_back(station2);
        return false;
    }
    //正常情况
    createGraph();

    //按下标存储路径
    std::vector<int> path(this->stations.size(),-100);
    //距离
    std::vector<double>dist(this->stations.size(),std::numeric_limits<double>::max());
    //优先队列
    std::priority_queue<Node,std::vector<Node>,std::greater<>> pq;

    //初始化起点
    dist[station1]=0;
    pq.push(Node(station1,0));

    //dijkstra算法求解
    while(!pq.empty()){
        Node top=pq.top();
        pq.pop();

        if(top.station_id!=station2){//还没有到达终点，遍历当前top节点的所有邻接节点
            for(auto& adjacent:this->Graph[top.station_id]){
                if(top.distance+adjacent.distance<dist[adjacent.station_id]){
                    path[adjacent.station_id]=top.station_id;//增加路径
                    dist[adjacent.station_id]=top.distance+adjacent.distance;
                    pq.push(Node(adjacent.station_id,dist[adjacent.station_id]));
                }
            }
        }
        else{//到达终点，回溯路径
            break;
        }
    }
    //回溯路径
    if(path[station2]==-100){
        //无合适路径
        return false;
    }
    else{//从终点开始回溯到起点
        for(int s=station2;path[s]!=-100;s=path[s]){
            stationList.push_front(s);
            edgeList.push_front(Edge(path[s],s));
        }
        //添加起点站
        stationList.push_front(station1);
    }

    //成功找到路径
    return true;

}
//求换乘最少线路
bool subwayGraph::queryTransfer_minTrans(int station1,int station2,QList<int>&stationList, QList<Edge>&edgeList){
    //清空上一次的求解结果
    stationList.clear();
    edgeList.clear();
    //同站进出
    if(station1==station2){
        stationList.push_back(station1);
        stationList.push_back(station2);
        return false;
    }
    //正常情况
    createGraph();

    //工作变量
    std::vector<bool>visited(this->lines.size(),false);//访问标记数组
    std::vector<int>path(this->stations.size(),-100);
    std::queue<int>q;
    //初始化
    path[station1]=-50;//区分起点
    q.push(station1);

    //BFS算法求解
    while(!q.empty()){
        int front=q.front();
        q.pop();
        for(auto &l:this->stations[front].lines){
            if(visited[l]==false){//该条线路尚未被访问
                visited[l]=true;//标记已访问
                for(auto& s:this->lines[l].stationSet){
                    if(path[s]==-100){//当前站点未被访问
                        path[s]=front;
                        q.push(s);
                    }
                }
            }
        }
    }

    //回溯路径
    if(path[station2]==-100){
        //station2没有被访问到，说明无路径
        return false;
    }
    else{
        int s=station2;

        while(path[s]!=-50){
            //得到中间非途径站
            getMidStations(path[s],s,stationList,edgeList);
            s=path[s];
        }
        //添加起点
        stationList.push_front(station1);

        return true;
    }
}

//dfs-寻找同一线路上两个站点之间的站点
void subwayGraph::getMidStations(int station1,int station2,QList<int>&stationlist,QList<Edge>&edgelist){
    QVector<int>path(this->stations.size(),-100);
    QVector<bool>visited(this->stations.size(),true);
    QList<int> sharedlines=getSharedLines(station1,station2);
    for(auto&sline:sharedlines){
        for(auto&s:this->getOneLineStationsList(sline)){
            visited[getOneStationHash(s)]=false;
        }
    }
    //工作队列
    std::queue<int>q;
    //寻找路径
    q.push(station1);
    while(!q.empty()){
        int front=q.front();
        q.pop();
        for(auto&adj:this->Graph[front]){
            if(visited[adj.station_id]==false){
                visited[adj.station_id]=true;
                path[adj.station_id]=front;
                q.push(adj.station_id);
            }
        }
    }
    //按照结点顺序加入stationList和edgelist
    int s=station2;
    while(s!=station1){
        stationlist.push_front(s);
        edgelist.push_front(Edge(path[s],s));
        s=path[s];
    }
}

//-----------------------数据管理函数-----------------------
//清空数据
void subwayGraph::deleteData(){
    this->stations.clear();
    this->lines.clear();
    this->stationsHash.clear();
    this->linesHash.clear();
    this->edges.clear();
    this->Graph.clear();
}
//更新边界经纬度数据
void subwayGraph::updateLongiLati(){
    double minLongi=200,minLati=200,maxLongi=0,maxLati=0;
    //求最小最大值
    for (int i=0;i<int(this->stations.size());i++){
        station s=this->stations[i];
        minLongi=qMin(minLongi,s.longi);
        minLati=qMin(minLati,s.lati);
        maxLongi=qMax(maxLongi,s.longi);
        maxLati=qMax(maxLati,s.lati);
    }
    //更新station类的MinMax常量
    station::min_longi=minLongi;
    station::min_lati=minLati;
    station::max_longi=maxLongi;
    station::max_lati=maxLati;
}


//-----------------------图结构管理函数-----------------------
//更改图结构-插入边
bool subwayGraph::insertEdge(int node1,int node2){
    //判读改变是否已经存在
    if(this->edges.contains(Edge(node1,node2)) || this->edges.contains(Edge(node2,node1)))
        return false;
    else{
        this->edges.insert(Edge(node1,node2));
        return true;
    }
}
//生成图结构
void subwayGraph::createGraph(){
    //清除原有结构
    this->Graph.clear();
    //申请邻接矩阵空间
    this->Graph=QVector<QVector<Node>>(this->stations.size(),QVector<Node>());
    //无向图邻接矩阵赋值
    for(auto &e:this->edges){
        //边的权值即节点间的距离，调用station类的getDistance方法计算
        double weight=this->stations[e.first].getDistance(this->stations[e.second]);
        //向矩阵元素赋值
        this->Graph[e.first].push_back(Node(e.second,weight));
        this->Graph[e.second].push_back(Node(e.first,weight));
    }
}
