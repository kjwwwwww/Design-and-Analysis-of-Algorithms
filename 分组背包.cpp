//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<vector>
//using namespace std;
//int v, n, t;
//const int maxn = 50;
//const int maxv = 250;
//vector<int> bag[maxn];
//int w[maxn], val[maxn];
//int f[maxv];
//void solve() {
//	memset(f, 0, sizeof f);
//	for (int i = 1; i <= t; i++) {
//		for (int k = v; k > 0; k--) {
//			for (int j = 1; j <= bag[i].size(); j++) {
//				int p = bag[i][j - 1];
//				if (k >= w[p])
//					f[k] = max(f[k], f[k - w[p]] + val[p]);
//			}
//		}
//	}
//	printf("%d\n", f[v]);
//}
//int main() {
//	//freopen("123.in","r",stdin);
//	while (scanf("%d%d%d", &v, &n, &t) != EOF) {
//		for (int i = 1; i <= n; i++) {
//			int p;
//			scanf("%d%d%d", &w[i], &val[i], &p);
//			bag[p].push_back(i);
//		}
//		solve();
//	}
//	return 0;
//}