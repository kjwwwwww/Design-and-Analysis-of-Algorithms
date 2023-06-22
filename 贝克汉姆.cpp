//#include<bits/stdc++.h>
//using namespace std;
//int m, n, sum1;
//int f[10005];
//struct ch {
//	int w; int c;
//}a[5005];
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i].w >> a[i].c;
//	}
//	for (int i = 1; i <= n; i++)
//		for (int v = m; v > 0; v--) {
//			if (a[i].w <= v) {
//				f[v] = max(f[v], f[v - a[i].w] + a[i].c);
//			}
//		}
//	cout << f[m] << endl;
//	return 0;
//}
