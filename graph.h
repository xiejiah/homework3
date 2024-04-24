#pragma once
#include<queue>
#include<string>
#define MAX 100000   //>=MAX即为无限远
class graph {   //地点信息的定义、贮存、运算部分
public:
	std::string vertlist[100];   //节点名称（如A B C...）
	double edgelist[34][34];   //邻接矩阵
	int n, e;   //n=nodes' count, e=edges' count
	bool visited[34];   //访问标记数组
	double distance[34];   //当前节点到各个节点的最短路径
	int pre[34];   //各个节点的前驱节点
	graph() {   //初始化构造函数
		this->n = 33;
		this->e = 57;
		double temp[34][34] = { 
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,0,4.5,5,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,5.4,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,4.5,0,1.8,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,8.4,MAX,MAX,MAX,MAX,MAX,MAX,7.1,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,5,1.8,0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,9.1,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,0,1.9,MAX,MAX,1.8,2.4,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,1.9,0,MAX,MAX,1.1,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,1.3,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,0,107,MAX,2.8,MAX,MAX,MAX,MAX,2.2,1.8,MAX,MAX,MAX,MAX,0.5,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,107,0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,1.5,MAX,MAX,MAX,MAX,1.9,MAX,MAX,4.1,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,1.8,1.1,MAX,MAX,0,MAX,MAX,MAX,2.8,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,5.2,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,2.4,MAX,2.8,MAX,MAX,0,0.7,MAX,MAX,MAX,2.4,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,0.7,0,3.8,MAX,MAX,2.6,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,0.6,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,3.8,0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,3.5,MAX,MAX,MAX,MAX,MAX,3.4,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,2.8,MAX,MAX,MAX,0,1.6,MAX,MAX,MAX,MAX,MAX,MAX,MAX,9.9,4.8,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,1.6,0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,8.5,4.9,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,10.7,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,2.2,MAX,MAX,2.4,2.6,MAX,MAX,MAX,0,2.6,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,2.1,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,1.8,1.5,MAX,MAX,MAX,MAX,MAX,MAX,2.6,0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,0,MAX,MAX,4.6,MAX,MAX,MAX,MAX,10.9,MAX,MAX,MAX,MAX,MAX,14,MAX,MAX,MAX,
0,MAX,8.4,9.1,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,0,MAX,2.2,MAX,MAX,MAX,MAX,MAX,3.7,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,3.7,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,4.6,2.2,MAX,0,MAX,MAX,MAX,MAX,MAX,4.1,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,1.3,0.5,1.9,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,9.9,8.5,MAX,MAX,MAX,MAX,MAX,MAX,MAX,0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,6.2,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,4.8,4.9,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,0,2.5,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,4.1,5.2,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,2.5,0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,
0,5.4,7.1,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,10.9,MAX,MAX,MAX,MAX,MAX,MAX,MAX,0,MAX,MAX,9.9,MAX,MAX,13.4,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,2.1,MAX,MAX,3.7,MAX,4.1,MAX,MAX,MAX,MAX,MAX,0,4.3,MAX,MAX,MAX,MAX,MAX,MAX,6.7,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,0.6,3.5,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,4.3,0,MAX,MAX,MAX,MAX,MAX,6.3,4.5,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,9.9,MAX,MAX,0,10.1,MAX,MAX,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,10.1,0,8.1,13.9,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,8.1,0,11.6,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,14,MAX,MAX,MAX,MAX,MAX,MAX,MAX,13.4,MAX,MAX,MAX,13.9,11.6,0,MAX,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,10.7,MAX,MAX,MAX,MAX,MAX,MAX,MAX,6.2,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,0,MAX,MAX,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,3.4,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,6.3,MAX,MAX,MAX,MAX,MAX,0,3.3,
0,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,MAX,3.7,MAX,MAX,MAX,MAX,MAX,MAX,6.7,4.5,MAX,MAX,MAX,MAX,MAX,3.3,0 };
		for (int i = 0; i <= this->n; i++) {
			this->visited[i] = false;
			this->distance[i] = 0;
			this->pre[i] = 0;
			for (int j = 0; j <= this->n; j++)
				this->edgelist[i][j] = temp[i][j];
		}
		vertlist[0] = "";
		vertlist[1] = "沈阳方特欢乐世界";
		vertlist[2] = "沈阳航天航空大学";
		vertlist[3] = "辽宁大学（蒲河校区）";
		vertlist[4] = "东北大学（沈河校区）";
		vertlist[5] = "北部战区总医院";
		vertlist[6] = "沈阳市第七中学";
		vertlist[7] = "沈阳市第二十七中学";
		vertlist[8] = "市图书馆";
		vertlist[9] = "中山公园";
		vertlist[10] = "太原街";
		vertlist[11] = "沈阳市第五人民医院";
		vertlist[12] = "辽宁体育馆";
		vertlist[13] = "世纪大厦";
		vertlist[14] = "八一公园";
		vertlist[15] = "沈阳故宫博物院";
		vertlist[16] = "辽宁技师学院";
		vertlist[17] = "北陵公园";
		vertlist[18] = "丁香湖";
		vertlist[19] = "皇姑英雄公园";
		vertlist[20] = "青年公园";
		vertlist[21] = "东北大学（浑南校区）";
		vertlist[22] = "沈阳建筑大学";
		vertlist[23] = "浑河森林公园";
		vertlist[24] = "中国医科大学（沈北校区）";
		vertlist[25] = "沈阳北站";
		vertlist[26] = "沈阳站";
		vertlist[27] = "银河广场";
		vertlist[28] = "沈阳怪坡风景区";
		vertlist[29] = "沈阳国家森林公园";
		vertlist[30] = "棋盘山风景区";
		vertlist[31] = "沈阳桃仙国际机场";
		vertlist[32] = "铁西区森林公园";
		vertlist[33] = "中国工业博物馆";
	}
	void Clear() {   //重置初始化函数
		for (int i = 0; i <= this->n; i++) {
			this->visited[i] = false;
			this->distance[i] = 0;
			this->pre[i] = 0;
		}
	}
	void Dijkstra(int flag) {   //从flag顶点出发，求到各个顶点的距离distance（Dijkstra算法）
		for (int i = 1; i <= this->n; i++) {
			this->distance[i] = this->edgelist[flag][i];
			this->visited[i] = false;
			this->pre[i] = flag;
		}
		this->visited[flag] = true;
		double sum = 0;
		int adjmin = 0;
		for (int i = 1; i < this->n; i++) {   //因为flag顶点已被选出，因此还需选出n-1个顶点
			adjmin = this->Findmin();
			this->visited[adjmin] = true;
			for (int j = 1; j <= this->n; j++) {
				if (!this->visited[j] && this->edgelist[adjmin][j] < MAX) {   //注：无向图一定要判断 g->edgelist[adjmin][j]<MAX
					sum = this->distance[adjmin] + this->edgelist[adjmin][j];
					if (sum < this->distance[j]) {
						this->distance[j] = sum;
						this->pre[j] = adjmin;   //记录前驱节点
					}
				}
			}
		}
	}
	int Findmin() {   //找到距离最近的顶点
		double min = MAX;
		int adjmin;
		for (int i = 1; i <= this->n; i++)
			if (!this->visited[i] && this->distance[i] < min) {
				min = this->distance[i];
				adjmin = i;
			}

		return adjmin;
	}
	std::string DFS(int begin, int end) {   //深度优先遍历
		if (begin == end)
			return(std::to_string(end) +". " +this->vertlist[begin]);
		std::string path = DFS(begin, this->pre[end]);
		return (path + " --->\n\n" + std::to_string(end) + ". " + this->vertlist[end]);
	}
	void BFS(int begin, int end) {   //从i顶点广度优先遍历（邻接矩阵）
		for (int i = 1; i <= this->n; i++) {
			this->pre[i] = begin;
			this->visited[i] = false;
		}
		std::queue<int> q;   //运用STL容器
		this->visited[begin] = true;
		q.push(begin);
		bool flag = true;
		int temp;
		while (!q.empty()) {
			 temp= q.front();
			q.pop();
			for (int j = 1; j <= this->n; j++) {
				if (!this->visited[j] && this->edgelist[temp][j] < MAX) {
					pre[j] = temp;
					if (j == end) {
						flag = false;
						break;
					}
					this->visited[j] = true;
					q.push(j);
				}
			}
			if (!flag)  break;
		}
	}
};