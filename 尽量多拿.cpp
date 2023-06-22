//#include<bits/stdc++.h>
//using namespace std;
//int m, n, sum1;
//int f[10005][3005];
//struct ch {
//	int w; int c;
//}a[105];
//int main() {
//	cin >> m >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i].w >> a[i].c;
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int v = m; v > 0; v--) {
//			if (a[i].w <= v) {
//				f[i][v] = max(f[i - 1][v], f[i - 1][v - a[i].w] + a[i].c);
//				//	cout<<f[i][v]<<" ";
//			}
//			else f[i][v] = f[i - 1][v];
//		}
//		//cout<<endl;
//	}
//	//	cout<<endl;
//	cout << f[n][m] << endl;
//	return 0;
//}
