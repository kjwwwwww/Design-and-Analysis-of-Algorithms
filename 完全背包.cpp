//#include<bits/stdc++.h>
//using namespace std;
//int n, m, f[20005];
//struct node {
//	int w;
//	int c;
//
//}d[305];
//int main() {
//	cin >> m >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> d[i].w >> d[i].c;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int v = 1; v <=m; v++)
//		{
//			if (d[i].w <= v)
//			{
//				f[v] = max(f[v], f[v - d[i].w] + d[i].c);
//			}
//		}
//	}
//	cout << "max="<<f[m];
//	return 0;
//}