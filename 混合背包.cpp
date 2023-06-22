//#include <bits/stdc++.h>
//using namespace std;
//const int MaxM = 210;
//const int MaxN = 50;
//int m, n;
//int  v[MaxN], w[MaxN], c[MaxN];
//int f[MaxM];	// f[j] 表示背包容量是j能装的物品的最大值
//
//int main()
//{
//	scanf("%d%d", &m, &n);
//	for (int i = 1; i <= n; ++i)
//	{
//		scanf("%d%d%d", &v[i], &w[i], &c[i]);
//	}
//	memset(f, 0xcf, sizeof f);
//	f[0] = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		if (!c[i])	//按完全背包处理
//		{
//			for (int j = v[i]; j <= m; ++j)
//			{
//				f[j] = max(f[j], f[j - v[i]] + w[i]);
//			}
//
//		}
//		else {		//按 01 背包处理，直接拆分法
//			for (int k = 1; k <= c[i]; ++k)
//			{
//				for (int j = m; j >= v[i]; --j)
//				{
//					f[j] = max(f[j], f[j - v[i]] + w[i]);
//				}
//			}
//		}
//	}
//	int ans = 0;
//	for (int j = 1; j <= m; ++j)
//	{
//		ans = max(ans, f[j]);
//	}
//	printf("%d\n", ans);
//	return 0;
//}
