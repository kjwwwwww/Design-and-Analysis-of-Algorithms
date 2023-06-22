//#include<bits/stdc++.h>
//using namespace std;
//int n, m, a[10], s = 0;
//void dfs(int k) {
//	if (n == 0)return;
//	if (k == m) {
//		if (n >= a[k - 1])
//			s++;
//		return;
//	}
//	for (int i = a[k - 1]; i <= n / (m - k + 1); i++) {
//		a[k] = i;
//		n = n - i;
//		dfs(k + 1);
//		n = n + i;
//	}
//}
//int main() {
//	
//	cin >> n >> m;
//	if (n <= 6 || n > 200 || m < 2 || m>6)
//		return 0;
//	a[0] = 1;
//	dfs(1);
//	cout << s << endl;
//
//
//
//	return 0;
//}