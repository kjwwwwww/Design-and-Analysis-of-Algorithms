//#include<bits/stdc++.h>
//long long  yt[100];
//long long  n, m;
//long long s = 0;
//using namespace std;
//
//int f(int s, int k) {
//	if (s == m)return 1;
//	if (s >m || k > n) {
//		return 0;
//	}
//
//	if (f(s +yt[k], k+1) == 1)return 1;
//	if (f(s , k + 1)==1)  return 1;
//	return 0;
//
//}
//
//int main() {
//	
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> yt[i];
//	}
//	f(0, 1)==1?printf("yes\n"):printf("no\n");
//	return 0;
//}