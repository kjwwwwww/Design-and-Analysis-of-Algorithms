//#include<bits/stdc++.h>
//using namespace std;
//float a, b, c, d;
//int n;
//float ans[4];
//float f(float x)
//{
//	return a*x*x*x+b*x*x+c*x+d;
//}
//void solve(float l, float r)
//{
//	if (f(l) * f(r)>0 && ((r - l) < 1 || n >= 2))
//		return;
//		float m = (l + r)*1.0 / 2.0;
//		if (f(m) <= 1e-4 && f(m) >= -1e-4)
//		{
//			ans[++n] = m;
//				return;
//		}
//	   solve(l,m);
//		   solve(m,r);
//}
//int main() {
//	cin >> a >> b >> c >> d;
//	solve(-100, 100);
//	printf("%.2f %.2f %.2f\n", ans[1], ans[2], ans[3]);
//
//	return 0;
//}