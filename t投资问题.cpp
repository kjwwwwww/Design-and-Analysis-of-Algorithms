//#include <bits/stdc++.h>
//using namespace std;
//int m, n;
//int dp[1005][1005], v[1005][1005];
//int main() {
//	cin >> m >> n;
//	for (int i = 0; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> v[j][i];
//		}
//	}
//	for (int i = 1; i <= m; i++) {
//		dp[1][i] = v[1][i];
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			int maxn = 0; 
//			for (int xk = 0; xk <= j; xk++) {
//				maxn = max(maxn, v[i][xk] + dp[i - 1][j - xk]);
//			}
//			dp[i][j] = maxn;
//		}
//	}
//	cout << dp[n][m] << endl;
//	return 0;
//}
