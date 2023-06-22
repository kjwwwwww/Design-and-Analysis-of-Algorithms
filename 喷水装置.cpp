//#include<bits/stdc++.h>
//using namespace std;
//struct PT {
//	double l, r;
//
//}pt[15001];
//
//bool b[15001];
//bool cmp(PT A, PT B)
//{
//	return A.l-A.r <  B.l-B.r;//
//}
//int main() {
//
//
//
//	double T, L, W;
//	int n;
//	int flag=0;
//	int cnt=0;
//	int NUM = 0;
//	cin >> T;
//	while (T--)
//	{
//		cnt = 0;
//		flag = 0;
//		NUM = 0;
//		cin >> n >> L >> W;
//		for (int i = 1; i <= n; i++) {
//			double X, r;
//			cin >> X>> r;
//			double x = 1.0 * sqrt((1.0 * r * r) - ((W / 2.0) * (W / 2.0))); 
//			if (r * 2 <= W) continue;
//			++cnt;
//			pt[cnt].l = max((double)0, X - x); 
//			pt[cnt].r = min((double)L, X + x); 
//			
//		}
//		double MR = 0.0;
//		while (MR < L)
//		{
//			double NL = MR;
//			for (int i = 1; i <= cnt; i++)
//				if (pt[i].l <= NL && pt[i].r > MR)//ÕÒ·¶Î§×î´ó
//					MR = pt[i].r;
//
//				if (MR == NL)
//				{
//					flag = 1;
//					break;
//				}
//				NUM++;
//		}
//		
//		if (flag == 1)cout << -1 << endl;
//		else
//			cout << NUM << endl;
//		
//	}
//	return 0;
//}