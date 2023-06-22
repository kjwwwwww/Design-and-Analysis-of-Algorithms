//#include<bits/stdc++.h>
//using namespace std;
//struct Object {
//	double w, c,xjb;
//}object[20001];
//bool cmp(Object A,Object B) {
//	return A.xjb > B.xjb;
//}
//int main() {
//	
//	double V;
//	int n;
//	cin >> V >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> object[i].w >> object[i].c;
//		object[i].xjb = object[i].w / object[i].c;
//	}
//	double sum=0;
//	double  Vsum = 0;
//	sort(object + 1, object + 1 + n, cmp);
//	for (int i = 1; i <= n; i++) {
//		if (Vsum + object[i].c <= V)
//		{
//			Vsum += object[i].c;
//			sum += object[i].w;
//		}
//	}
//	if (sum == (int)sum)
//		printf("%d\n", (int)sum);
//	else
//		printf("%lf\n", sum);
//	return 0;
//}