//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int n, m, k;
//	int A[101][101];
//	int B[101][101];
//	int C[101][101];
//	int sum;
//	cin >> n >> m >> k;
//	// ‰»ÎAæÿ’Û
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> A[i][j];
//		}
//	}
//	// ‰»ÎBæÿ’Û
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <=k; j++) {
//			cin >> B[i][j];
//		}
//	}
//	//Cæÿ’Û
//	for (int i = 1; i <= n; i++) {
//		
//		for (int p = 1; p <= k; p++){
//				sum = 0;
//			for (int j = 1; j <= m; j++) {
//
//				sum += A[i][j] * B[j][p];
//			}
//			C[i][p] = sum;
//		}
//		}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= k; j++) {
//			cout << C[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//
//}