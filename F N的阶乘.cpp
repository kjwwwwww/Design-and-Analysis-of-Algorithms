//#include<bits/stdc++.h>
//using namespace std;
//int a[1001]={0,1};
//int main() {
//
//	int N;
//	cin >> N;
//	//进位标志
//	int x = 0;
//	int L = 1001;
//	for (int i = 2; i <= N; i++) {
//		x = 0;
//		for (int j = 1; j <=1001; j++) {
//				a[j] = a[j] * i + x;
//				x = a[j] / 10;
//				a[j] = a[j] % 10;
//		}
//		
//	}while (a[L] == 0 && L >= 1)L--;
//		for (int i = L; i >= 1; i--)
//			cout << a[i];
//	return 0;
//}