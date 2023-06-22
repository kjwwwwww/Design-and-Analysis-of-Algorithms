//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//
//
//	int n = 1;
//	int sum = 0;
//	char c[1001];
//	int a[1001];
//	while ((cin >> n),n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%s%d", &c[i], &a[i]);
//
//		}
//		sort(a, a + n);
//		int j = 0;
//		sum = 0;
//		while (j < n - 1)//n-1Ìõ±ß
//		{
//			sum += a[j] + a[j + 1];
//			a[j + 1] = a[j] + a[j + 1];
//			j++;
//			sort(a + j, a + n);
//		}
//
//		if (n > 0)
//			cout << sum << endl;
//
//	}
//	return 0;
//}