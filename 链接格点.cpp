//#include <bits/stdc++.h>
//using namespace std;
//#define INF 0x3f3f3f3f
//#define ll long long
//#define x first
//#define y second
//typedef pair<int, int> PII;
//const int N = 1e3 + 10;
//int n, m, k, ans, ecnt;
//
//int fa[N * N];
//
//
//int findFa(int x) {
//	return x == fa[x] ? x : fa[x] = findFa(fa[x]);
//}
//
//int Union(int x, int y) {
//	int fx = findFa(x);
//	int fy = findFa(y);
//	if (fx != fy) {
//		fa[fx] = fy;
//		return 1;
//	}
//	return 0; 
//}
//
//int main() {
//
//	cin >> n >> m;
//
//	for (int i = 1; i <= n * m; i++)fa[i] = i;
//
//	int x1, y1, x2, y2;
//	while (cin >> x1 >> y1 >> x2 >> y2) {
//		int u = (x1 - 1) * m + y1, v = (x2 - 1) * m + y2; 
//		Union(u, v);
//	}
//
//
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j < n; j++) {
//			int u = (j - 1) * m + i, v = j * m + i;
//			if (Union(u, v))ans++;
//		}
//	}
//	
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j < m; j++) {
//			int u = (i - 1) * m + j, v = (i - 1) * m + j + 1; 
//			if (Union(u, v))ans += 2;
//		}
//	}
//	cout << ans;
//
//
//
//
//
//
//
//
//	return 0;
//}
//
//
