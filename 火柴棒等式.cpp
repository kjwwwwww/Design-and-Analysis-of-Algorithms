//#include<bits/stdc++.h>
//using namespace std;
//int A = 0;
//int need[2000] = { 6,2,5,5,4,5,6,3,7,6 };
//void GM() {
//	for (int i = 10; i <2000; i++) {
//		int a = i;
//		int ans = 0;
//		while (a > 0) {
//			int r = a % 10;
//			ans+= need[r];
//			a = a / 10;
//		}
//		need[i] = ans;
//	}
//}
//int main() {
//	
//	int n;
//	cin >> n;
//	GM();
//	for (int i = 0; i <= 1999; i++) {
//		for (int j=i; j <=1999; j++) {
//			if (need[i] + need[j] > n - 6)
//				continue;
//			if (need[i] + need[j] + need[i + j] == n - 4&&i!=j)
//				A=A+2;
//			if (need[i] + need[j] + need[i + j] == n - 4 && i == j)
//				A++;
//		}
//		
//	}cout << A;
//	return 0;
//}