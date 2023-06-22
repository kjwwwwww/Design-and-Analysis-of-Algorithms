//#include<bits/stdc++.h>
//using namespace std;
//int m, n;
//const int MAXN = 33, MAXM = 5;
//int MatchList[MAXN][MAXN];
//
//int main() {
//	cin >> m;
//	n = pow(2,m);
//	int k = 1, half = 1;
//	MatchList[0][0] = 1;
//	while (k <= m)
//
//	{
//		for (int i = 0; i < half; i++)
//		{
//			for (int j = 0; j < half; j++)
//			{
//				MatchList[i][j + half] = MatchList[i][j] + half;
//
//			}
//
//		}
//		for (int i = 0; i < half; i++)
//		{
//			for (int j = 0; j < half; j++)
//			{
//				MatchList[i + half][j] = MatchList[i][j + half];
//				MatchList[i + half][j + half] = MatchList[i][j];
//
//			}
//		}
//		half *= 2;
//		k++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << MatchList[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}