//#include<bits/stdc++.h>
//using namespace std;
//int w, h, a, b, sum;char e;
//int c[201][201];
//bool d[201][201];
//int Dir[5][2] = { {0,0}, {0, 1}, { 0,-1 }, { 1,0 }, { -1,0 } };
//void dfs(int x, int y) {
//	if (x <1 || y > 20)return;
//	for (int i = 1; i <= 4; i++) {
//		int x1 = x + Dir[i][0];
//		int y1 = y + Dir[i][1];
//		if (x1 >= 1 && x1 <= h && y1 <= w && !d[x1][y1]&& c[x1][y1] == 1) {
//			d[x1][y1] = 1;
//			sum++;
//			dfs(x1, y1);
//		}
//	}
//}
//int main() {
//	while (cin >> w >> h,w,h) {
//		
//		if (w < 1 || h>20)break;
//		for(int j=1;j<=200;j++)
//		for (int i = 1; i <= 200; i++) {
//			c[i][j] = 0;
//		}
//		for (int j = 1; j <= 200; j++)
//		for (int i = 1; i <= 200; i++) {
//			d[i][j] = 0;
//		}
//		
//		for (int i = 1; i <= h; i++) {
//			for (int j = 1; j <= w; j++) {
//				cin >> e;
//				if (e == '@') {
//					a = i;
//					b = j;
//					c[i][j] = 1;
//				}
//				else if (e == '.') {
//					c[i][j] = 1;
//				}
//				else if (e == '#') {
//					c[i][j] = 0;
//					d[i][j] = 1;
//				}
//			}
//		}
//		d[a][b] = 1;
//		sum = 1;
//		dfs(a, b);
//		cout << sum << endl;
//	}
//	
//	return 0;
//}
