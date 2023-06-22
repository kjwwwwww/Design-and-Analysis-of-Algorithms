//#include<bits/stdc++.h>
//using namespace std;
//#define MAXN 10000
//int n, a[MAXN], r[MAXN];
//long long ans = 0;
//void MergSort(int s, int t)
//{
//	if (s == t)
//		return;
//	int m = (s + t) / 2;
//	MergSort(s, m);
//	MergSort(m+1,t);
//	//归并已经完成，左右都有序
//	int i = s;
//	int j = m + 1;
//	int k = s;
//	while (i <= m && j <= t)
//	{
//		if (a[i] <= a[j])
//		{
//			r[k++] = a[i++];
//		}
//		else
//		{
//			ans +=m - i + 1;
//			r[k++] = a[j++];
//		}
//	}
//	while (i <= m)
//	{
//		r[k++] = a[i++];
//	}
//	while (j <= t)
//		r[k++] = a[j++];
//	for (i = s; i <= t; i++)
//	{
//		a[i] = r[i];
//	}
//}
//int main() {
//
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	MergSort(1,n);
//	cout << ans << endl;
//
//	return 0;
//}