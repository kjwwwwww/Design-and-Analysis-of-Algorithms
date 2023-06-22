//#include<bits/stdc++.h>
//using namespace std;
//struct House {
//	int B, E, T;
//}a[500001];
//bool cmp1(House A, House B)
//{
//	return A.E <= B.E;
//}
//bool cmp2(int a, int b)
//{
//	return a > b;
//}
//map<int, int> Map;//权重
//
//bool b[300001];
//int main() {
//
//	int N, M;
//	cin >> N >> M;
//	int SUMT = 0;
//	int sum = 0;
//	for (int i = 1; i <= M; i++)
//	{
//		cin >> a[i].B >> a[i].E >> a[i].T;
//		sum += a[i].T;
//	}
//	if (sum == 0)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	sort(a + 1, a + 1 + M, cmp1);//按照右端点从小到达排序
//	
//		for (int i = 1; i <= M; i++)
//		{
//			int  count = 0;
//			for (int j = a[i].B; j <= a[i].E; j++)
//			{
//				if (b[j] == 1)
//					count++;
//
//			}
//			if (count < a[i].T)
//			{
//				for (int k = a[i].E; k >= a[i].B; k--)
//				{
//					if (b[k] == 0)
//					{
//						b[k] = 1;
//						count++;
//						SUMT++;
//					}
//					if (count == a[i].T)
//						break;
//				}
//			}
//		}
//		
//	
//	cout << SUMT << endl;
//
//	return 0;
//}