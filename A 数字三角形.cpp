//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//
//
//	int i, j,n;
//	cin >> n;
//	if ( n > 100)
//		return 0;
//	int a[101][101];
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			cin >> a[i][j];
//		}
//	}
//	for (i = n - 1; i >= 1; i--) {
//		for (j = 1; j <= i; j++)
//		{
//			a[i][j] += a[i + 1][j] > a[i + 1][j + 1] ? a[i + 1][j] : a[i + 1][j + 1];
//		}
//	}
//	cout << a[1][1] << endl;
//
//	return 0;
//}