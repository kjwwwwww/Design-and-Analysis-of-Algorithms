//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int s[8] ;
//bool b[8] = { 0 };
//void print() {
//	for (int i = 1; i <= n; i++) {
//		cout << s[i]<<' ';
//	}
//	cout << endl;
//}
//void dfs(int k) {
//	for (int i = 1; i <= n; i++)
//	{
//		if (b[i] == 0) {
//			b[i] = 1;
//			s[k] = i;
//
//			if (k == n) {
//				print();
//			}
//			else 
//				dfs(k + 1); 
//			b[i] = 0;
//		}
//
//	}
//}
//int main() {
//
//cin >> n;
//	dfs(1);
//	return 0;
//}