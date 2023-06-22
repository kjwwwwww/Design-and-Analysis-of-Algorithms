//#include <iostream>
//using namespace std;
//int main() {
//	int p[205], n, dp[205] = { 0 }, path[205] = { 0 }, pre[205];
//	bool vis[205][205];
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> p[i];
//		dp[i] = p[i];
//	}
//	int u, v;
//	while (1) {
//		cin >> u >> v;
//		if (u == 0 && v == 0)break;
//		vis[u][v] = true;//vis[u][v]意思是u这个点可以到v这个点
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (vis[i][j] && dp[i] + p[j] > dp[j]) {
//				dp[j] = dp[i] + p[j];
//				path[j] = i;//记录路径
//			}
//		}
//	}
//	int k, ans = 0;
//	for (int i = 1; i <= n; i++) {
//		if (dp[i] > ans) {
//			ans = dp[i];
//			k = i;
//		}
//	}
//	pre[0] = k;//pre[i]作用是倒序记录path
//	int d = 1;
//	while (path[k] != 0) {
//		pre[d] = path[k];
//		k = path[k];
//		d++;
//	}
//	cout << pre[d - 1];
//	for (int i = d - 2; i >= 0; i--) {
//		cout << "-" << pre[i];
//	}
//	cout << '\n';
//	cout << ans;
//}
