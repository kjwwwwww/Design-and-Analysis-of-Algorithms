//#include<bits/stdc++.h>
//using namespace std;
//#define MAX 0xffff
//
//int w[101][101];
//int main() {
//	int n,v0,ww;
//	string s;
//	cin >> n ;
//	memset(w, 0x3f, sizeof(w));
//	 for(int i=1;i<=n;i++)
//		for (int j = 1; j <= n; j++) {
//			cin >> s;
//			if (i == j)
//				w[i][j] = 0;
//			else {
//				if (s == "0") {
//					w[i][j] = MAX;
//				}
//				else
//					w[i][j] = stoi(s);
//			}
//			
//	}
//
//	 for (int k = 1; k <= n; k++) {
//		 for (int i = 1; i <= n; i++) {
//			 for (int j = 1; j <= n; j++) {
//				 if (w[i][j] > w[i][k] + w[k][j]) {
//					 w[i][j] = w[i][k] + w[k][j];
//				 }
//			 }
//		 }
//	 }
//	for(int i=1;i<=n;i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (w[i][j] == MAX)
//				cout << -1 << ' ';
//			else
//				cout << w[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}