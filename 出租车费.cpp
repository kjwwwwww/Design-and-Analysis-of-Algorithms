//#include<bits/stdc++.h>
//using namespace std;
//double f(double n) {
//	
//	double sum=0;
//	if (n <= 4) {
//		sum = 10;
//	}
//
//	else if (n >= 4 && n <= 8) {
//		sum = 10 + (n - 4) * 2;
//	}
//
//	else if (n > 8) {
//		while (n >= 8) {
//			sum += 18;
//			n -= 8;
//		}
//		if (n <= 4) {
//			sum += n*2.4;
//		}
//		else {
//			sum += 10+(n-4)*2;
//		}
//	}
//	return sum;
//
//}
//int main() {
//
//	double n;
//	while (cin >> n, n) {
//		
//		if (f(n) - (int)f(n) == 0) printf("%d\n", (int)f(n));
//		else printf("%.1lf\n", f(n));
//	}
//
//
//
//	return 0;
//}