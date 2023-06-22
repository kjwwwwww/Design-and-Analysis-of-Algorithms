//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//
//	int a[100001];
//	int n;
//	cin >> n;
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		sum += a[i];
//	}
//	int k = sum / n;
//	for (int i = 1; i <= n; i++) {
//		a[i] -= k;
//	}
//	int cs = 0;
//	for (int i = 2; i <= n; i++) {
//		if (a[i - 1] != 0) {
//			a[i] += a[i - 1];
//			cs++;
//		}
//	}
//	cout << cs << endl;
//	return 0;
//}