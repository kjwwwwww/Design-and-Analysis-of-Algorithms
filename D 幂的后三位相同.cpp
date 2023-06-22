//#include<bits/stdc++.h>
//using namespace std;
//long long b[1001];
//bool f = true;
//
//int main() {
//
//	int  A,n,m;
//	cin >> A;
//	for (int i = 1; i < 1001; i++)b[i] = 1;
//	int i = 1;
//	b[0] = 1;
//	while (f) {
//		//for (int j = 1; j <= 1; j++)b[i] = b[i] % 1000 * A;
//		b[i] = b[i - 1] *A %1000;
//		for (int j = 1; j < i; j++) {
//			if (b[i] == b[j]) {
//				f = false;
//				n= j;
//				m = i;
//			}
//		}
//		i++;
//
//
//	}
//	cout << n << ' ' << m;
//	
//	return 0;
//}