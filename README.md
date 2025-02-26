# 公交出行查询程序
## 1	题目介绍
### 1.1 问题描述
开发一款沈阳公交出行查询程序，选取沈阳市内的实际地点及相对位置和距离，创建地图数据集合，通过某种数据结构储存，使用某种算法求出任意两个地点之间公交车用时最少的路线及费用最少的路线。
#### 1.1.1 问题背景
公交出行查询程序是城市智能交通系统的一部分，开创了智能公交新模式，该程序可以为出行者提供准确、及时的信息服务，从而吸引更多的出行者使用公共交通，有效地提高了用户出行效率和出行体验。
#### 1.1.2 主要任务
（1）	选出30个以上的沈阳市内的地点，创建地图数据集。（地点之间有时间和费用两种成本）。      
（2）	从所选的30处以上的地点中任意选择两处地点，计算两地公交用时最短的路线并按顺序显示途径的地点。      
（3）	从所选的30处以上的地点中任意选择两处地点，计算两地公交费用最少的路线并按顺序显示途径的地点。      
（4）	选择合适的数据结构储存地图数据集，界面要美观实用。      
（5）	按要求写出课程设计报告。
### 1.2 问题分析
（1）	待解决的问题：需要选出30个以上的沈阳市内的地点，创建地图数据集。      
解决方法：通过百度地图搜集沈阳市的地图，选择沈阳市内30处以上的地点，通过百度地图的标记和测距功能，从所选的30处以上的地点中任意选择可直接到达的两处地点进行测距。并把数据集通过邻接矩阵的形式储存。      
（2）	待解决的问题：从所选的30处以上的地点中任意选择两处地点，计算两地公交用时最短的路线和费用最少的路线并按顺序显示途径的地点。      
解决方法：此问题本质上是一个单源最短路径的求解问题，运用Dijkstra（迪杰斯特拉）算法、BFS（广度优先搜索）算法、DFS（深度优先搜索）算法相互配合可以很好的解决此问题。经过站点最少的路径即为费用最少的路线。因路程与时间成正比，用时最短的路线等效于路程最短的路线。      
（3）	待解决的问题：程序界面要美观实用。      
解决方法：运用C++ CLR用户控件，配合一个托管库<msclr\marshal_cppstd.h> 制作可视化窗体界面程序，使程序界面更   美观、更现代、更实用。
## 2 系统总体设计
本程序主要运用Visual C++ CLR控件创建，为窗体应用型程序。系统总体设计包含两大部分，分别为系统模块化功能设计和窗体程序的界面设计。
### 2.1 系统模块设计
本系统包含六大模块，分别对应六种功能：计算用时最短的路线功能，计算费用最短的路线功能，纠正用户输入功能，显示帮助提示信息功能，显示软件开发信息功能，退出系统功能。
## 3 总结
完成此次数据结构的课程设计后，感觉收获颇丰。自学了C++ CLR控件，并用时近一周的时间完成了可视化窗体的编写设计。目前网络上用C++语言结合CLR控件进行托管的学习资源少之又少，本人在编写过程中遇到各种各样的问题，利用网上少之又少的资源，自己深入琢磨研究，克服了种种困难，终于编出了一个可视化的应用程序。
此次数据结构的课程设计使我加深了对于Dijkstra，BFS，DFS等算法的理解，并使我可以熟练运用这些算法对一些实际问题进行求解，培养并锻炼了我的专业能力。Dijkstra算法是基于BFS（广度优先搜索思想）以起始点为中心向外层层扩展，直到扩展到终点为止。DFS（深度优先搜索算法）是一种用于遍历或搜索树或图的算法。 沿着树的深度遍历树的节点，尽可能深的搜索树的分支。当节点v的所在边都己被探寻过或者在搜寻时结点不满足条件，搜索将回溯到发现节点v的那条边的起始节点。整个进程反复进行直到所有节点都被访问为止。
未来，我将运用数据结构解决更多、更复杂的实际问题。
