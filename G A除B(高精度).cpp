//#include<bits/stdc++.h>
//using namespace std;
//double POW(int a, int x) {
//	return pow(a, x);
//}
//int main() {
//	
//	int N, M;
//	cin >> N >> M;
//	cout << N << '/' << M << '=';
//	cout << int(N / M) << '.';
//	N %= M;
//	int P = 1;
//	while (P <= 20) {
//		N *= 10;
//		printf("%d", N/M);
//		N %= M;
//		if (N * POW(10, 20 - P) < M)
//			break;
//		P++;
//
//	}
//	printf("\n");
//	return 0;
//}