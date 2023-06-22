//#include<bits/stdc++.h>
//using namespace std;
//int n, m, s;
//const int INF = 1e9;
//int a[105][105] = { 0 };
//int dis[105], v[105];
//int ls[105];
//void print(int x)
//{
//	if (x == s)
//		cout << s << " ";
//	else
//	{
//		print(ls[x]);
//		cout << x << " ";
//	}
//}
//void dijkstra() {
//	int i, j, k;
//	for (i = 0; i < n; i++) {
//		v[i] = 0;
//		dis[i] = 1e9;
//	}
//	dis[s] = 0;
//	for (j = 0; j < n; j++) {
//		k = -1;
//		for (i = 0; i < n; i++) {
//			if (!v[i] && (k == -1 || dis[i] < dis[k]))
//				k = i;
//		}
//		v[k] = 1;
//		for (i = 0; i < n; i++) {
//			if (!v[i] && dis[k] + a[k][i] < dis[i]) {
//				dis[i] = dis[k] + a[k][i];
//				ls[i] = k;
//			}
//
//		}
//	}
//}
//int main() {
//	cin >> n >> m >> s;
//	for (int i = 0; i < m; i++) {
//		int x, y, z;
//		cin >> x >> y >> z;
//		a[x][y] = z;
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i != j && a[i][j] == 0) {
//				a[i][j] = INF;
//			}
//		}
//	}
//	dijkstra();
//	for (int i = 0; i < n; i++) {
//		if (dis[i] == 0 || dis[i] == INF) {
//			cout << i << ":" << endl << "no" << endl;
//		}
//		else if (dis[i] == a[s][i]) {
//			cout << i << ":" << endl;
//			cout << "path:" << s << " " << i << endl;
//			cout << "cost:" << dis[i] << endl;
//		}
//		else {
//			cout << i << ":" << endl;
//			cout << "path:";//cout<<s<<" ";
//			print(i);
//			cout << "cost:" << dis[i] << endl;
//		}
//	}
//	return 0;
//}
