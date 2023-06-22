//#include<iostream>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//int n, m, k;
//int f[30][100];
//
//int main()
//{
//	cin >> n >> m >> k;
//
//	memset(f, 0x3f, sizeof f);
//	f[0][0] = 0;
//
//
//	while (k--)
//	{
//		int v1, v2, w;
//		cin >> v1 >> v2 >> w;
//
//		for (int i = n; i >= 0; i--)
//			for (int j = m; j >= 0; j--)
//				f[i][j] = min(f[i][j], f[max(0, i - v1)][max(0, j - v2)] + w);
//	}
//
//	cout << f[n][m];
//
//	return 0;
//}