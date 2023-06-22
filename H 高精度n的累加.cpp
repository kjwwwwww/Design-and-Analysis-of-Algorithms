//#include<bits/stdc++.h>
//using namespace std;
//long long a[1001];
//int main() {
//
//
//	int n;
//	cin >> n;
//	int L = 1;//高精度数字长度
//	int x = 0;//进位标志
//	a[1] = 1;
//	for (int i = 2; i <= n; i++) {
//		x = 0;
//		for (int j = 1; j <= L; j++) {
//			if (j == 1)
//				a[j] = a[j] + i + x;
//			else
//      			a[j] = a[j] + x;
//
//			x = a[j] / 10;
//			a[j] = a[j]%10;
//			
//		}
//		if (x >0)
//			{
//				a[++L] = x;
//			}
//
//	}
//	while (a[L] == 0 && L >= 1)L--;
//		for (int i = L; i >=1; i--) {
//			cout << a[i];
//		}
//	return 0;
//}