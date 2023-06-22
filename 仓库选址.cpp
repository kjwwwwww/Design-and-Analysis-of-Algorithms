//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//
//	long long N;
//	cin >> N;
//	long long a[100001];
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a + 1, a + 1 + N);
//	long long mid = N / 2;
//	long long sum=0;
//	for (int i = 1; i <= N; i++) {
//		sum += fabs(a[mid] - a[i]);
//	}
//	cout << sum << endl;
//	return 0;
//}