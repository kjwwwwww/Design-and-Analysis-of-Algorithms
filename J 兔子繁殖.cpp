//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//
//	int n;
//	cin >> n;
//
//	if (n > 50)return 0;
//	long  a[201];
//	a[1] = a[2] = 1;
//	for (int i = 3; i <= n; i++) {
//		a[i] = a[i - 2] + a[i - 1];
//	}
//	cout << a[n ] << endl;
//	return 0;
//}