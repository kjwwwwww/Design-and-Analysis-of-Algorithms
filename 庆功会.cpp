//#include<bits/stdc++.h>
//using namespace std;
//int n, m, f[20005], p[30005], v[30005], s[30005];
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> p[i] >> v[i] >> s[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = m; j >0; j--)
//			for (int k = 0; k <= s[i]; k++)
//			{
//				if (j - k * p[i] < 0) break;
//				f[j] = max(f[j], f[j - k *p[i]] + k * v[i]);
//             }
//	}
//	cout <<f[m];
//	return 0;
//}