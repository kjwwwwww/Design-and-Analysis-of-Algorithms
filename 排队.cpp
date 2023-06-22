//#include<bits/stdc++.h>
//using namespace std;
//int a[30001];
//int b[30001];
//int main() {
//
//
//	int N;
//	cin >> N;
//	if (N > 30000 || N < 1)return 0;
//	int ans = 10000000;
//	int P1 = 0, P2 = 0;
//	for (int i = 1; i <= N; i++) {
//		cin >> a[i];
//		if (a[i] == 2)
//			b[i] = 1;
//		//记录第i个之前的2以及他自己
//		b[i] += b[i - 1];
//	}
//	for (int i = 1; i <=N; i++) {
//		//第i个之前要改的数量  为2的数
//		int befor = b[i - 1];
//		//第i个之后要改的数量
//		//N-i : 后面的数
//		//b[N]-b[i] 后面的2的个数
//
//	   //为1的数
//		int last = (N - i) - (b[N] -b[i]);
//		ans = min(befor + last, ans);
//	}
//	cout << ans << endl;
//	return 0;
//}