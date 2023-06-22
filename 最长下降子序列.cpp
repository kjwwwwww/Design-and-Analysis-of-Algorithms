//#include<bits/stdc++.h>
//using namespace std;
//int b[204][4];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i][1];
//		b[i][2] = 1;
//		b[i][3] = 0;
//	}
//	int l, k;
//	for (int i = n - 1; i >= 1; i--)
//	{
//		l = 0;
//		k = 0;
//		for (int j = i + 1; j <= n; j++)
//		{
//			if (b[j][1 > b[i][1]] && b[j][2] > l)
//			{
//				l = b[j][2];
//				k = j;
//
//			}
//
//		}
//		if (l > 0)
//		{
//			b[i][2] = l + 1;
//			b[i][3] = k;
//		}
//
//	}
//	k = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (b[i][2] > b[k][2])
//		{
//			k = i;
//		}
//	}
//	cout << b[k][2];
//	/*while (k != 0)
//	{
//		cout << " " << b[k][1];
//		k = b[k][3];
//	}*/
//	return 0;
//}