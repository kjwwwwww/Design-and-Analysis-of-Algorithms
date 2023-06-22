//#include<bits/stdc++.h>
//using namespace std;
//
//struct QJ {
//	int s, e;
//}qj[100001];
//bool b[100001];
//bool cmp(QJ a, QJ b) {
//	return a.s < b.s;
//}
//int main() {
//
//	long long n;
//	cin >> n;
//	int sum=0;
//	for (int i = 1; i <= n; i++) {
//		cin >> qj[i].s >> qj[i].e;
//	}
//	sort(qj + 1, qj + 1 + n, cmp);
//	
//	for (int i = 2; i <= n; i++) {
//		if (qj[i - 1].s == qj[i].s) 
//		{
//			
//			if (qj[i - 1].e > qj[i].e) 
//			{
//				qj[i].e = qj[i - 1].e;
//
//			}
//			b[i - 1] = 1;
//		}
//		else if (qj[i - 1].e >= qj[i].s) {
//			qj[i].s = qj[i - 1].s;
//         if (qj[i - 1].e > qj[i].e) {
//				qj[i].e = qj[i - 1].e;
//			}
//			b[i - 1] = 1;
//
//		}
//
//	}
//	for (int i = 1; i <= n; i++) {
//		if (!b[i])
//			sum++;
//	}
//	cout << sum << endl;
//	return 0;
//}