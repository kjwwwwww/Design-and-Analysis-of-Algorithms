//#include<bits/stdc++.h>
//using namespace std;
//#define N 105
//int n, m, cnt=0, dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//char mp[N][N];
//bool vi[N][N];
//void dfs(int sx,int sy) {
//	for (int i = 0; i < 4; i++) 
//	{
//		int x = sx + dir[i][0], y = sy + dir[i][1];
//		if (x >= 1 && x <= n && y >= 1 && y <= m && vi[x][y] == false && mp[x][y] != '0')
//		{
//			vi[x][y] = true;
//			dfs(x, y);
//		}
//	}
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) 
//	{
//		for (int j = 1; j <=m; j++) 
//		{
//			cin >> mp[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++) 
//		{
//			if (vi[i][j] == false&&mp[i][j]!='0')
//			{
//				vi[i][j] = true;
//				dfs(i, j);
//				cnt++;
//			}
//		}
//	}
//
//	cout << cnt << endl;
//	return 0;
//}