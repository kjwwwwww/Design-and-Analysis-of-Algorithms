//#include<stdio.h>
//int main()
//{
//	int k = 0, a[100001], temp;
//	while (scanf("%d", &temp) != EOF) {//��������Ҫ�������е�������Ҫ�䱸��ϵͳ��
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
//			if (a[i] < a[j] && dp[i] < (dp[j] + 1))//����Ѱ�����������
//			{
//				dp[i] = dp[j] + 1;
//				MAX = dp[i] > MAX ? dp[i] : MAX;
//			}
//			if (a[i] >= a[j] && dp2[i] < (dp2[j] + 1))//����Ѱ��������Ҫ��ϵͳ��
//			{
//				dp2[i] = dp2[j] + 1;
//				MAX2 = dp2[i] > MAX2 ? dp2[i] : MAX2;
//			}
//		}
//	}
//	printf("%d\n%d", MAX, MAX2);
//	return 0;
//}
