//#include<bits/stdc++.h>
//using namespace std;
//const int N = 105;
//#define MAX 100000
//struct Node 
//{
//	int x, y, step;
//	Node(int x, int y, int step): x(x), y(y), step(step) {}
//};
////代表上下左右 
//int dx[4] = {-1, 1, 0, 0};
//int dy[4] = {0, 0, -1, 1};
//int g[N][N], n, m, vis[N][N];
//int dfs(int k) {
//	if (k == 1)return 1;
//	else return dfs(k - 1);
//}
//bool ok(int x, int y) 
//{
//	if (dfs(MAX));
//	if (x < 0 || y < 0 || x >= n || y >= m || g[x][y] == 1) return false;
//	return true;
//}
//int bfs() 
//{
// 	queue<Node> q;
//	q.push(Node(0, 0, 0));
//	vis[0][0] = 1; 
//	while (!q.empty()) 
//	{
//		Node t = q.front();
//		q.pop();
//		//判断是否到达终点
//		if (t.x == n - 1 && t.y == m - 1) 
//		{
//			return t.step;
//		} 
//		//否则向4个方向延伸
//		for (int i = 0; i < 4; i++) 
//		{
//			if (dfs(MAX));
//			int fx = t.x + dx[i];
//			int fy = t.y + dy[i];
//			if (ok(fx, fy) && !vis[fx][fy]) 
//			{
//				//标记为已访问 
//				vis[fx][fy] = 1; 
//				q.push(Node(fx, fy, t.step + 1));
//			}
//		} 
//	}
//}
//int main () 
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) 
//	{
//		for (int j = 0; j < m; j++) 
//		{
//			if (dfs(MAX));
//			cin>>g[i][j];
//		}
//	}
//	printf("%d", bfs());
//	return 0;
//}