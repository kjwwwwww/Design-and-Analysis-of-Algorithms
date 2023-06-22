//#include<bits/stdc++.h>
//#define N 120
//int e[N][N], dis[N], book[N];
//int main()
//{
//	int i, j, k, m, n, min, count = 0, sum = 0, inf = 99999999;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		for (j = 1; j <= n; j++)
//			if (i == j)
//				e[i][j] = 0;
//			else
//				e[i][j] = inf;
//	for (i = 1; i <= n; i++)
//		for (j = 1; j <= n; j++)
//		{
//			scanf("%d", &e[i][j]);
//			//e[j][i]=e[i][j];
//			if (i != j && e[i][j] == 0)
//				e[i][j] = e[j][i] = inf;
//		}
//
//	for (i = 1; i <= n; i++)
//		dis[i] = e[1][i];
//	book[1] = 1;
//	count++;
//	while (count < n)
//	{
//		min = inf;
//		for (i = 1; i <= n; i++)
//		{
//			if (book[i] == 0 && dis[i] < min)
//			{
//				min = dis[i];
//				j = i;
//			}
//		}
//		book[j] = 1;
//		count++;
//		sum = sum + dis[j];
//		for (k = 1; k <= n; k++)
//		{
//			if (book[k] == 0 && dis[k] > e[j][k])
//				dis[k] = e[j][k];
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}