#include <iostream>
using namespace std;
int n,m,s,d;

const int maxN = 1000;//ͼ����󶥵���
const  int inf = 0x3f3f3f; 

int  n ; // ͼ�ĵ���
int vis[maxn];// ��¼ͼ�и���ķ������ 
int dis[maxn];  // ��¼��㵽��������·������

int m[maxn][maxn]; // �ڽӾ�������¼������������

void Dijkstra(int s){
	fill(vis , vis+maxn , 0);//  ��ʼ�� ����δΪ����״̬  ������ʹ��memset���� 
	fill(dis , dis+maxn , inf); // ͬ�� ��diss ������г�ʼ��
	dis[s]= 0; 
	for(int i = 0; i< n;i++){  // ����ÿһ���ڵ㣬�ҳ���ǰ�����Ž� 
		int 
	} 
} 
int main(){
    // 0 1 2 3 4 
    // ��·�� 5 ���� �������� s ,  �յ�� �� d . 
    // ��Ӧ 20 30 40 10 ��Ԯ�ӵ���Ŀ
    // ����1 ����2  ���ٵ�·�ĳ��� 
    
    // �Ͻ�˹����
	 
    return 0 ;
}
