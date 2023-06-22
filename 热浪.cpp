//#include <iostream>
//#include <cstring>
//using namespace std;
//
//const int N = 2510;
//
//bool st[N];
//int n, m, s, e;
//int g[N][N], dist[N];
//
//void dijkstra()
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[s] = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		int t = -1;
//		for (int j = 1; j <= n; j++)
//			if (!st[j] && (t == -1 || dist[j] < dist[t]))
//				t = j;
//
//		st[t] = true;
//		for (int j = 1; j <= n; j++)
//			dist[j] = min(dist[j], dist[t] + g[t][j]);
//	}
//}
//
//int main()
//{
//	cin >> n >> m >> s >> e;
//
//	memset(g, 0x3f, sizeof g);
//
//	while (m--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		g[a][b] = g[b][a] = min(g[a][b], c);
//	}
//
//	dijkstra();
//
//	cout << dist[e] << endl;
//	return 0;
//}
