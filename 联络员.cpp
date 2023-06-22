//#include<bits/stdc++.h>
//using namespace std;
//#define N 10005
//int qz, fa[N], n, t, ans, j;
//struct no {
//	int en, w, ne;
//} a[N];
//bool px(no a, no b) {
//	return a.w < b.w;
//}
//int xz(int x) {
//	return (fa[x] != x) ? (fa[x] = xz(fa[x])) : x;
//}
//int main() {
//	scanf("%d%d", &n, &t);
//	for (int i = 1; i <= n; i++) fa[i] = i;
//	for (int i = 1; i <= t; i++) {
//		scanf("%d%d%d%d", &j, &a[i].ne, &a[i].en, &a[i].w);
//		int x = xz(a[i].ne), y = xz(a[i].en);
//		if (j == 1) {
//			if (x < y) fa[y] = x;
//			else fa[x] = y;
//			ans += a[i].w;
//		}
//	}
//	sort(a + 1, a + t + 1, px);
//	for (int i = 1; i <= t; i++) {
//		int x = xz(a[i].ne), y = xz(a[i].en);
//		if (x != y) {
//			ans += a[i].w;
//			if (x < y) fa[y] = x;
//			else fa[x] = y;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}
