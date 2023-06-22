//#include<bits/stdc++.h>
//using namespace std;
//
//int sum = 0;
//int a[9];
//bool b[9] = { 0 };//列有无被用
//bool d[17] = { 0 };
//bool c[17] = {0};//
//void print() {
//	sum++;
//	cout << '<'<<sum<<'>';
//	for (int i = 1; i <= 8; i++) {
//		cout << a[i]<<' ';
//
//	}
//	cout << endl;
//}
//void dfs(int i) {
//	for (int j = 1; j <= 8; j++) {
//		if (!b[j] && !c[i + j] && !d[i - j + 7])//没被占用
//		{
//			a[i] = j;
//			b[j] = 1;
//			c[i + j] = 1;
//			d[i - j + 7] = 1;
//			if (i == 8)print();
//			else
//				dfs(i + 1);
//			b[j] = 0;
//			c[i + j] = 0;
//			d[i - j + 7] = 0;
//		}
//	}
//}
//int main() {
//	dfs(1);//第一列开始放棋子
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	if (1) {}
//	return 0;
//}