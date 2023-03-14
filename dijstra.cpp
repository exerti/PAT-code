#include <iostream>
using namespace std;
int n,m,s,d;

const int maxN = 1000;//图的最大顶点数
const  int inf = 0x3f3f3f; 

int  n ; // 图的点数
int vis[maxn];// 记录图中各点的访问情况 
int dis[maxn];  // 记录起点到个点的最短路径长度

int m[maxn][maxn]; // 邻接矩阵来记录个点的连接情况

void Dijkstra(int s){
	fill(vis , vis+maxn , 0);//  初始化 个点未为访问状态  ，可以使用memset函数 
	fill(dis , dis+maxn , inf); // 同样 对diss 数组进行初始化
	dis[s]= 0; 
	for(int i = 0; i< n;i++){  // 遍历每一个节点，找出当前的最优解 
		int 
	} 
} 
int main(){
    // 0 1 2 3 4 
    // 道路数 5 条， 出发地是 s ,  终点地 是 d . 
    // 对应 20 30 40 10 救援队的数目
    // 城市1 城市2  快速道路的长度 
    
    // 迪杰斯特拉
	 
    return 0 ;
}
