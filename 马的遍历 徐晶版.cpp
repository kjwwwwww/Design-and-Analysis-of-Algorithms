//#include<bits/stdc++.h>
//using namespace std;
//
//int x[4] = { 1,2,2,1 };
//int y[4] = { 2,1,-1,-2 };
//int nx[50],ny[50];//临时
//int minx[50],miny[50];//最终解
//bool n[50][50];
//int loc;
//int minn = 99999;
//void print() {
//	if (loc < minn) {
//		minn = loc;
//		for (int i = 0; i < loc; i++) {
//			minx[i] = nx[i];
//			miny[i] = ny[i];
//
//		}
//	}
//}
//void dfs(int a,int b) {
//	for (int j = 0; j < 4; j++) {
//		a += x[j];
//		b += y[j];
//		if (a > 8 || a < 0 || b>4 || b < 0||n[j]) {
//			a -= x[j];
//			b -= y[j];//还回去
//			continue;
//		}
//		if (n[loc] == 0) {
//			nx[loc] = a;
//			ny[loc] = b;
//          n[a][b]=1;
//			n[loc++] = 1;//保存结果
//		}
//		if (a == 8 && b == 4) {
//			print();
//		}
//		else
//			dfs(a, b);
//		b -= y[j];
//		a -= x[j];
//		loc--;
//		n[loc] = 0;
//
//	}
//}
//int main() {
//
//	dfs(0, 0);
//	int i;
//	cout << "0,0->";
//	for (i = 0; i < minn - 1; i++) {
//		cout << miny[i] << ',' << minx[i] << "->";
//
//	}
//	cout << miny[minn - 1] <<','<<minx[minn-1]<< endl;
//	return 0;
//}