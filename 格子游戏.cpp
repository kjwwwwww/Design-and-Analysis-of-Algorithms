//#include<bits/stdc++.h>
//using namespace std;
//struct Node
//{
//	int x, y;
//
//}f[301][301],k1,k2;
//struct Node find(struct Node K)
//{
//	if (f[K.x][K.y].x == K.x && f[K.x][K.y].y == K.y)
//		return K;
//	
//		return f[K.x][K.y] = find(f[K.x][K.y]);
//		
//	
//}
//int main() {
//
//	int n, m,x,y;
//	cin >> n >> m;char c;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			f[i][j].x = i;
//			f[i][j].y = j;
//		}
//	}
//
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> x >> y >> c;
//		if (c == 'D')
//		{
//			k1 = find(f[x][y]);
//			k2 = find(f[x+1][y]);
//
//		}
//		if (c == 'R')
//		{
//			k1 = find(f[x][y]);
//			k2 = find(f[x][y+1]);
//		}
//		if (k1.x == k2.x && k1.y == k2.y)
//		{
//			cout << i << endl;
//			return 0;
//		}
//		else
//			f[k1.x][k1.y] = k2;//k1的父节点指向k2
//	}
//	cout << "draw" << endl;
//
//	return 0;
//}