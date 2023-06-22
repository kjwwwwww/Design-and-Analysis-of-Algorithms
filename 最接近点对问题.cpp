//#include<bits/stdc++.h>
//using namespace std;
//double dis(double x1, double y1, double x2, double y2) {
//	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//}
//int main() {
//	int n;
//	cin >> n;
//	vector<pair<double, double>>d(n);
//	for (int i = 0; i < n; i++) {
//		cin >> d[i].first >> d[i].second;
//	}
//	double mn;
//	int di, dj;
//	mn = 1e9;
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			double t = dis(d[i].first, d[i].second, d[j].first, d[j].second);
//			if (t < mn) {
//				mn = t;
//				di = i;
//				dj = j;
//			}
//		}
//	}
//	cout << fixed << setprecision(2) << mn / 2 << " ";
//	return 0;
//}