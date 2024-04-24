#pragma once
#include<queue>
#include<string>
#define MAX 100000   //>=MAX��Ϊ����Զ
class graph {   //�ص���Ϣ�Ķ��塢���桢���㲿��
public:
	std::string vertlist[100];   //�ڵ����ƣ���A B C...��
	double edgelist[34][34];   //�ڽӾ���
	int n, e;   //n=nodes' count, e=edges' count
	bool visited[34];   //���ʱ������
	double distance[34];   //��ǰ�ڵ㵽�����ڵ�����·��
	int pre[34];   //�����ڵ��ǰ���ڵ�
	graph() {   //��ʼ�����캯��
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
		vertlist[1] = "�������ػ�������";
		vertlist[2] = "�������캽�մ�ѧ";
		vertlist[3] = "������ѧ���Ѻ�У����";
		vertlist[4] = "������ѧ�����У����";
		vertlist[5] = "����ս����ҽԺ";
		vertlist[6] = "�����е�����ѧ";
		vertlist[7] = "�����еڶ�ʮ����ѧ";
		vertlist[8] = "��ͼ���";
		vertlist[9] = "��ɽ��԰";
		vertlist[10] = "̫ԭ��";
		vertlist[11] = "�����е�������ҽԺ";
		vertlist[12] = "����������";
		vertlist[13] = "���ʹ���";
		vertlist[14] = "��һ��԰";
		vertlist[15] = "�����ʹ�����Ժ";
		vertlist[16] = "������ʦѧԺ";
		vertlist[17] = "���깫԰";
		vertlist[18] = "�����";
		vertlist[19] = "�ʹ�Ӣ�۹�԰";
		vertlist[20] = "���깫԰";
		vertlist[21] = "������ѧ������У����";
		vertlist[22] = "����������ѧ";
		vertlist[23] = "���ɭ�ֹ�԰";
		vertlist[24] = "�й�ҽ�ƴ�ѧ����У����";
		vertlist[25] = "������վ";
		vertlist[26] = "����վ";
		vertlist[27] = "���ӹ㳡";
		vertlist[28] = "�������·羰��";
		vertlist[29] = "��������ɭ�ֹ�԰";
		vertlist[30] = "����ɽ�羰��";
		vertlist[31] = "�������ɹ��ʻ���";
		vertlist[32] = "������ɭ�ֹ�԰";
		vertlist[33] = "�й���ҵ�����";
	}
	void Clear() {   //���ó�ʼ������
		for (int i = 0; i <= this->n; i++) {
			this->visited[i] = false;
			this->distance[i] = 0;
			this->pre[i] = 0;
		}
	}
	void Dijkstra(int flag) {   //��flag����������󵽸�������ľ���distance��Dijkstra�㷨��
		for (int i = 1; i <= this->n; i++) {
			this->distance[i] = this->edgelist[flag][i];
			this->visited[i] = false;
			this->pre[i] = flag;
		}
		this->visited[flag] = true;
		double sum = 0;
		int adjmin = 0;
		for (int i = 1; i < this->n; i++) {   //��Ϊflag�����ѱ�ѡ������˻���ѡ��n-1������
			adjmin = this->Findmin();
			this->visited[adjmin] = true;
			for (int j = 1; j <= this->n; j++) {
				if (!this->visited[j] && this->edgelist[adjmin][j] < MAX) {   //ע������ͼһ��Ҫ�ж� g->edgelist[adjmin][j]<MAX
					sum = this->distance[adjmin] + this->edgelist[adjmin][j];
					if (sum < this->distance[j]) {
						this->distance[j] = sum;
						this->pre[j] = adjmin;   //��¼ǰ���ڵ�
					}
				}
			}
		}
	}
	int Findmin() {   //�ҵ���������Ķ���
		double min = MAX;
		int adjmin;
		for (int i = 1; i <= this->n; i++)
			if (!this->visited[i] && this->distance[i] < min) {
				min = this->distance[i];
				adjmin = i;
			}

		return adjmin;
	}
	std::string DFS(int begin, int end) {   //������ȱ���
		if (begin == end)
			return(std::to_string(end) +". " +this->vertlist[begin]);
		std::string path = DFS(begin, this->pre[end]);
		return (path + " --->\n\n" + std::to_string(end) + ". " + this->vertlist[end]);
	}
	void BFS(int begin, int end) {   //��i���������ȱ������ڽӾ���
		for (int i = 1; i <= this->n; i++) {
			this->pre[i] = begin;
			this->visited[i] = false;
		}
		std::queue<int> q;   //����STL����
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