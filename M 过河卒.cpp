//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//    long long  a[101][101]={0};
//	long long s[101][101]={0};
//	int n, m, x, y;
//	cin >> n >> m >> x >> y;
//	a[x][y] = 1;
//	if (x >= 2) {
//		a[x - 2][y - 1] = 1;
//		a[x - 2][y + 1] = 1;
//	}
//	if (y >= 2) {
//		a[x - 1][y - 2] = 1;
//		a[x + 1][y - 2] = 1;
//	}
//	a[x - 1][y + 2] = 1;
//	a[x + 1][y + 2] = 1;
//	a[x + 2][y - 1] = 1;
//	a[x + 2][y + 1] = 1;
//
//	s[0][0] = 1;
//	for (int i = 1; i <= m; i++) {
//		if (a[0][i] == 1)
//			s[0][i] =0;
//		else if (a[0][i] != 1) {
//			s[0][i] = s[0][i - 1];
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		if (a[i][0] == 1)
//			s[i][0] = 0;
//		else if (a[i][0] != 1) {
//			s[i][0] = s[i-1][0];
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (a[i][j] != 1)
//				s[i][j] = s[i - 1][j] + s[i][j - 1];
//		}
//	}
//	cout << s[n][m] << endl;
//	return 0;
//}