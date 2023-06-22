//#include<stdio.h>
//int main()
//{
//	int k = 0, a[100001], temp;
//	while (scanf("%d", &temp) != EOF) {//导弹数与要拦截所有导弹最少要配备的系统数
//		a[k++] = temp;
//	}
//	int i, j, dp[k], dp2[k], MAX = 1, MAX2 = 1;
//	for (i = 0; i < k; i++)
//	{
//		dp[i] = 1;
//		dp2[i] = 1;
//	}
//	for (i = 1; i < k; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (a[i] < a[j] && dp[i] < (dp[j] + 1))//降序寻找最长降序序列
//			{
//				dp[i] = dp[j] + 1;
//				MAX = dp[i] > MAX ? dp[i] : MAX;
//			}
//			if (a[i] >= a[j] && dp2[i] < (dp2[j] + 1))//升序寻找至少需要的系统数
//			{
//				dp2[i] = dp2[j] + 1;
//				MAX2 = dp2[i] > MAX2 ? dp2[i] : MAX2;
//			}
//		}
//	}
//	printf("%d\n%d", MAX, MAX2);
//	return 0;
//}
