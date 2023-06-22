//#include<bits/stdc++.h>
//using namespace std;
//int n, c;
//int sum = 0;
//int a[101];
//bool b[101];
//void dfs(int s, int k) {
//	if (s == c) {
//		printf("%d\n", s);
//		exit(0);
//	}
//	if (s > c) return;
//	if (s > sum) sum = s;
//	for (int i = k; i <= n; i++) {
//		if (!b[i] && s + a[i] <= c) {
//			b[i] = 1;
//			s += a[i];
//			dfs(s, k+1);
//			s -= a[i];
//			b[i] = 0;
//		}
//	}
//}
//int main() {
//	cin >> n >> c;
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d",a+i);
//	}
//	sort(a + 1, a + n);
//	dfs(0, 1);
//	printf("%d\n", sum);
//	return 0;
//}
