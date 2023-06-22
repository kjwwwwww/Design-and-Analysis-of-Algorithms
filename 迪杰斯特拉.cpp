//#include<bits/stdc++.h>
//using namespace std;
//#define MAX 0xff
//int n, s;
//int mat[51][51],dis[51],v[51];
//void dijkstra() {
//	int i, j, k;
//	for (i = 0; i < n; i++)
//	{
//		dis[i] = MAX;
//		v[i] = 0;
//	}
//	dis[s] = 0;
//	for (j = 0; j < n; j++)
//	{
//		k = -1;
//		for (i = 0; i < n; i++)
//		{
//			if (v[i] == 0&&(k==-1||dis[i]<dis[k]))
//			{
//				k = i;//ÕÒ×î¶Ì±ß
//
//			}
//		}
//		v[k] = 1;
//		for (i = 0; i < n; i++)
//		{
//			if (!v[i] && dis[k] + mat[k][i] < dis[i])
//			{
//				dis[i] = dis[k] + mat[k][i];//¸üÐÂ
//			}
//		}
//	}
//}
//int main() {
//
//
//	
//	cin >> n >> s;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			
//			cin >> mat[i][j];
//			if (i == j)
//				mat[i][j] = 0;
//			else
//			if (mat[i][j] == 0) {
//				mat[i][j] = MAX;
//			}
//		}
//	}
//	dijkstra();
//	for (int i = 0; i < n; i++) {
//		if (i != s)
//		{
//			if (dis[i] < MAX)
//			{
//				cout << dis[i]<<' ';
//			}
//			else
//				cout << -1<<' ';
//		}
//	}
//	return 0;
//}