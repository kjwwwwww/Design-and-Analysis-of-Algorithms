//#include<bits/stdc++.h>
//using namespace std;
//int m, n;
//int total = 0;
//char ch;
//int a[101][101];
//bool b[101][101];
//#define MAX 1000000
//int bfs(int k) {
//	if (k == 1)return 1;
//	else return bfs(k - 1);
//}
//void dfs(int x, int y) {
//	a[x][y] = 0;
//	for (int i = -1; i <= 1; i++) {
//		for (int j = -1; j <= 1; j++) {
//			int x1 = x + i;
//			int y1 = y + j;
//			if (x1 >= 0 && x1 < m && y1 >= 0 && y1 < n && a[x1][y1] == 1) {
//				dfs(x1, y1);
//			}
//		}
//	}
//}
//int main() {
//
//	while (cin>>m>>n,m) {
//		
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> ch;
//				if (ch == '*') {
//					a[i][j] = 0;
//					b[i][j] = 1;
//				}
//				if (ch == '@') {
//					a[i][j] = 1;
//					b[i][j] = 0;
//				}
//			}
//		}
//		total = 0;
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < n; j++) {
//				if (a[i][j] == 1) {
//					dfs(i, j);
//					bfs(MAX);
//					total++;
//				}
//			}
//		}
//		
//		cout << total << endl;
//	}
//	return 0;
//}
//
//
