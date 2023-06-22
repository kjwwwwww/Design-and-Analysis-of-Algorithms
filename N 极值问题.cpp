//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//
//	
//	int a[3001];
//	a[1] = a[2] = 1;
//	int k;
//	cin >> k;
//	for (int i = 3; i <= 3000; i++) {
//		a[i] = a[i - 2] + a[i - 1];
//		if (a[i] + a[i - 1] > k) {
//			printf("m=%d\nn=%d\n", a[i - 1], a[i]);
//			break;
//		}
//	}
//	
//	
//	return 0;
//}