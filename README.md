# MetroMate
* A Visualization of Shanghai Subway Transfer System based on Qt Creator `v1.0.0`
* Visualization Project for `Tongji University Data Structure Course 2024`
## What is MetroMate
MetroMate is a desktop app for visualizing Shanghai Subway Transfer System, also a Qt visualization project from Data Structure couse, Tongji University. Users can download the `packageEXE` to run the app.
## How to use MetroMate
### View the whole subway network of Shanghai
* the initial interface is the whole view of Shanghai subway network, you can also click the button `全部线路` to view the network again after   other operations.
* Drag the scene to any direction as you want
* Zoom in and out with the buttons at lower-right corner
![image](https://github.com/RaraCai/Qt-SubwayTransformSystem/blob/master/images/view_network.png)
### View single line of the network
* select the single line you want to check from the selectbox above
* Click the button `查看单线` to view the result.
![image](https://github.com/RaraCai/Qt-SubwayTransformSystem/blob/master/images/view_singleline.png)
### Query subway transfering strategies
* select your `FROMs and TOs` on the sidebar, then click the button `OK` to view the strategy result.
* MetroMate provides two kinds of strategies for you to choose, one is `Consuming Least Time(速度最快)`, and the other is `Passing Least Transfers(换乘最少)`.
![image](https://github.com/RaraCai/Qt-SubwayTransformSystem/blob/master/images/query_strategy.png)
### Manage the subway network through adding lines and stations
* add lines
  Add your personal lines to manage the subway network, pay attetion that your managements shall be valid and reasonable. Those duplicate and irreasonable operations will not succeed.
![image](https://github.com/RaraCai/Qt-SubwayTransformSystem/blob/master/images/add_line.png)
* add stations
  Add your personal stations and create connections with currently existing stations, pay attetion that your managements shall be valid and reasonable. Those duplicate and irreasonable operations will not succeed.
![image](https://github.com/RaraCai/Qt-SubwayTransformSystem/blob/master/images/add_station.png)
## About the Author
Developed by @RaraCai, an undergraduate student from Tongji University, major in Computer Science  
Welcome exchanges and discussions, hope to make progress with all you guys!
