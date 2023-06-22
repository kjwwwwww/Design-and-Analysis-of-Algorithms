//#include<iostream>
//using namespace std;
//int n, k,C;
//char a[10][10];
//int b[10] ;
//void dfs(int x, int k1) {
//	if (k1 == 0) {
//		C++;
//		return;
//	}
//	if (x > n) return;
//	for (int j = 1; j <= n; j++) {
//		if (a[x][j] == '#' && !b[j]) {
//			b[j] = 1;
//			dfs(x + 1, k1 - 1);
//			b[j] = 0;
//		}
//	}
//	dfs(x + 1, k1);
//	return;
//}
//int main() {
//	while (1) {
//		scanf("%d%d", &n, &k);
//		if (n > 8 || k > n)break;
//		if (n == -1 && k == -1)return 0;
//		for (int i = 1; i <= n; i++) {
//			cin >> a[i] + 1;
//		}
//		C = 0;
//		dfs(1, k);
//		cout <<C << endl;
//	}
//
//	return 0;
//}
