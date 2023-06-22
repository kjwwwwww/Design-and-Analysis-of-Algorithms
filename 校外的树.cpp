//#include<bits/stdc++.h>
//using namespace std;
//struct QJ {
//long long s, e;
//
//}qj[101];
//bool b[101];
//bool cmp(QJ a, QJ b) {
//	return a.s < b.s;
//}
//int main() {
//
//
//	long long L, M;
//	cin >> L >> M;
//	
//	for (int i = 1; i <= M; i++) {
//		cin >> qj[i].s >> qj[i].e;
//
//	}
//	sort(qj + 1, qj +1+M, cmp);
//	//区间合并
//	for (int i = 2; i <= M; i++) {
//		if (qj[i - 1].s == qj[i].s)
//		{
//
//			if (qj[i - 1].e > qj[i].e)
//			{
//				qj[i].e = qj[i - 1].e;
//			}
//			b[i - 1] = 1;
//		}
//		else if (qj[i - 1].e >= qj[i].s) 
//		{
//			qj[i].s = qj[i - 1].s;
//			if (qj[i - 1].e > qj[i].e) {
//				qj[i].e = qj[i - 1].e;
//			}
//			b[i - 1] = 1;
//
//		}
//
//	}
//	long long LL = 0;
//	for (int i = 1; i <= M; i++) {
//		if (!b[i])
//		{
//			LL += (qj[i].e - qj[i].s) + 1;
//		}
//	}
//	printf("%ld\n", L + 1 - LL);
//	return 0;
//}