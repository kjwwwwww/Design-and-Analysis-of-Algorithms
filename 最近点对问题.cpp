//#include<bits/stdc++.h>
//using namespace std;
//const int maxn = 1e6;
//double minx = 0x7ffffff;
//
//double x[maxn], y[maxn];
//double dis(double x1, double y1, double x2, double y2)
//{
//	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//}
//int main() {
//
//	int n;
//	cin >> n;
//	double x1, y1, x2, y2;
//	int dn, dm;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x[i] >> y[i];
//
//	}
//	for (int i = 0; i < n ; i++)
//	{
//		for (int j = i + 1; j < n ; j++)
//		{
//			double t = dis(x[i], y[i], x[j], y[j]);
//			if (minx > t)
//			{
//				minx = t;
//				dn = i;
//				dm = j;
//			}
//		}
//	}
//	cout << fixed << setprecision(5) << minx << ' ';
//	cout << fixed << setprecision(1) << x[dn] << ' ' << y[dn] << ' ' << x[dm] << ' ' << y[dm] << endl;
//	return 0;
//}