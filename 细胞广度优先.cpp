//#include<bits/stdc++.h>
//using namespace std;
//#define N 105
//struct Node {
//	int x, y;
//	Node() {}
//	Node(int a, int b) :x(a), y(b) {}
//
//};
//int n, m, cnt, dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//char mp[N][N];
//bool vis[N][N];
//void bfs(int sx,int sy)
//{
//	queue<Node> que;
//	vis[sx][sy] = true;
//	Node tmp;
//	tmp.x = sx, tmp.y = sy;
//	que.push(tmp);
//	while (que.empty() == false)
//	{
//		Node u = que.front();
//		que.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int x = u.x + dir[i][0], y = u.y + dir[i][1];
//			if (x >= 1 && x <= n && y >= 1 && y <= m && vis[x][y] == false && mp[x][y] != '0')
//			{
//				vis[x][y] = true;
//				tmp.x = x;
//				tmp.y = y;
//				que.push(tmp);
//			}
//		}
//	}
//}
//int main() {
//
//	cin >> n >> m;
//		for (int i = 1; i <= n; i++) 
//		{
//			for (int j = 1; j <=m; j++) 
//			{
//				cin >> mp[i][j];
//			}
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= m; j++) 
//			{
//				if (vis[i][j] == false&&mp[i][j]!='0')
//				{
//					
//					bfs(i, j);
//					cnt++;
//				}
//			}
//		}
//	
//		cout << cnt << endl;
//		return 0;
//	return 0;
//}