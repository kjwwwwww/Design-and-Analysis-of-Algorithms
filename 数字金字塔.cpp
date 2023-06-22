//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int n, x, y=0;
//	int a[51][51][4];
//	while (cin >> n, n) {
//		memset(a, 0, sizeof(a));
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= i; j++)
//			{
//				cin >> a[i][j][1];
//				a[i][j][2] = a[i][j][1];
//				a[i][j][3] = 0;
//
//
//			}
//		}
//		for (int i = n - 1; i >= 1; i--)
//		{
//			for (int j = 1; j <= i; j++)
//			{
//				if (a[i + 1][j][2] > a[i + 1][j + 1][2])
//				{
//					a[i][j][2] = a[i + 1][j][2] + a[i][j][1];
//					a[i][j][3] = 0;
//
//				}
//				else
//				{
//					a[i][j][2] = a[i + 1][j + 1][2] + a[i][j][1];
//					a[i][j][3] = 1;
//				}
//			}
//		}
//		cout << a[1][1][2] << endl;
//	}
//	//Â·¾¶Êä³ö
//	/*int j = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		cout << a[i][j][1] << '->';
//		y = y + a[i][j][3];
//	}
//	cout << a[n][y][1] << endl;*/
//	return 0;
//}