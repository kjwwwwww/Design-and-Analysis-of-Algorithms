//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int n;
//	long long a[10001];
//	long long tili = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	
//	sort(a + 1, a + 1 + n);
//	for (int i = 2; i <= n; i++) {
//	
//		a[i] += a[i - 1];
//		tili += a[i];
//		sort(a + i, a + n +  1);
//	}
//	cout <<tili<<endl;
//	return 0;
//}