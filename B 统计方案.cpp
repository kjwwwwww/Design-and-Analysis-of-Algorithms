//#include<bits/stdc++.h>
//using namespace std;
//
//
//
//int main() {
//	int C, n;
//	cin >> C;
//	int a[101];
//	a[1] = 0;
//	a[2] = 3;
//	a[3] = 7;
//	for (int i = 4; i <= 21; i++) {
//		a[i] = 2 * a[i - 1] + a[i - 2];
//	}
//	while (C--) {
//		cin >> n;
//		if (n > 20)return 0;
//		cout << a[n+1]<<endl;
//	}
//	return 0;
//}