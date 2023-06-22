//#include<stdio.h>
//#define N 120
//int a[N][N], book[N], arr[N * N];
//int main()
//{
//	int n, head, tail, i, j;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", &a[i][j]);
//	head = tail = 0;
//	book[0] = 1;
//	arr[tail] = 0;
//	tail++;
//	printf("0 ");
//	while (head < tail)
//	{
//		for (i = 0; i < n; i++)
//			if (book[i] == 0 && a[arr[head]][i] == 1)
//			{
//				book[i] = 1;
//				printf("%d ", i);
//				arr[tail] = i;
//				tail++;
//			}
//		head++;
//	}
//	printf("\n");
//	return 0;
//}