//#include <bits/stdc++.h>
//using namespace std;
//double r, l;
//double mid;
//double fun(double x) {
//	return exp(x * log(2)) + exp(x * log(3)) - exp(x * log(4));
//}
//void solve(double a, double b) {
//	while (abs(b - a) > 1e-4) {
//		mid = (a + b) / 2;
//		if (fun(a) * fun(mid) < 0) {
//			b = mid;
//			//cout<<"ok";
//		}
//		else a = mid;
//	}
//	mid = (a + b) / 2;
//	cout << fixed << setprecision(10) << mid << endl;
//}
//int main() {
//	cin >> l >> r;
//	solve(l, r);
//	return 0;
//}
