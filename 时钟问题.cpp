//#include <bits/stdc++.h>
//using namespace std;
//int mn = 2147483647, a[12], s[12], ans[12];
//
//int mp[12][12] = { {0},
//{0, 1, 1, 0, 1, 1},
//{0, 1, 1, 1},
//{0, 0, 1, 1, 0, 1, 1},
//{0, 1, 0, 0, 1, 0, 0, 1},
//{0, 0, 1, 0, 1, 1, 1, 0, 1},
//{0, 0, 0, 1, 0, 0, 1, 0, 0, 1},
//{0, 0, 0, 0, 1, 1, 0, 1, 1},
//{0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
//{0, 0, 0, 0, 0, 1, 1, 0, 1, 1} };
//void fill(int n) {
//	for (int i = 1; i <= 9; i++) {
//		s[i] = n % 4;
//		n /= 4;
//	}
//}
//bool work() {
//	for (int i = 1; i <= 9; i++) { 
//		int t = a[i]; 
//		for (int j = 1; j <= 9; j++) 
//			t += mp[j][i] * s[j]; 
//		if (t % 4) return false; 
//	}
//	return true;
//}
//int main() {
//	for (int i = 1; i <= 9; i++)
//		scanf_s("%d", &a[i]);
//	for (int i = 0; i < 1 << 18; i++) {
//		fill(i);
//		if (work()) { 
//			int cnt = 0;
//			for (int i = 1; i <= 9; i++) 
//				cnt += s[i];
//			if (cnt < mn) {
//				mn = cnt;
//				memcpy(ans, s, sizeof(ans)); 
//			}
//		}
//	}
//	for (int i = 1; i <= 9; i++) 
//		for (int j = 1; j <= ans[i]; j++)
//			printf("%d", i);
//	return 0;
//}
