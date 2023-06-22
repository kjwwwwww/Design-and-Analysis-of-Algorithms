//#include<bits/stdc++.h>
//using namespace std;
//long int n, c;
//long int a[7001];
//bool b[7001] = { 0 };
//void dfs(int sum, int k) {
//	if (sum > c) return;
//	if (sum < c) {
//		int sum1 = 0;
//		for (int i = k; i <= n; i++) {
//			if (!b[i]) sum1 += a[i];
//		}
//		if (sum + sum1 < c) return;
//	}
//	if (sum == c) {
//		for (int i = 1; i <= n; i++) {
//			if (b[i]) cout << a[i] << " ";
//		}
//		exit(0);
//	}
//
//	for (int i = k; i <= n; i++) {
//		if (!b[i] && sum + a[i] <= c) {
//			sum += a[i];
//			b[i] = 1;
//			dfs(sum, k++);
//			b[i] = 0;
//			sum -= a[i];
//		}
//	}
//}
//int main() {
//	scanf_s("%d%d", &n, &c);
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &a[i]);
//	}
//	//	sort(a+1,a+n); 
//	dfs(0, 1);
//	printf("No Solution!");
//
//	return 0;
//}
