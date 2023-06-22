//#include<bits/stdc++.h>
//using namespace std;
//int val[1001];
//int cmp(int a, int b)
//{
//	return a < b;
//}
//int main() {
//
//	int n, i, ans;
//	while (scanf("%d", &n) != EOF)
//	{
//		ans = 0;
//		for (i = 0; i < n; i++)
//		{
//			cin >> val[i];
//		}
//		for (i = 1; i < n; i++)
//		{
//			sort(val + i -1, val + n );
//			ans += val[i - 1] + val[i];
//			val[i] += val[i - 1];
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}