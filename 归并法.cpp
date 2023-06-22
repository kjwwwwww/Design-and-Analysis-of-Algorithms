//#include<bits/stdc++.h>
//using namespace std;
//int a[500001], t[500001];
//long long sum;
//void merge(int l, int m, int r) {
//	int p = l;
//	int i = l, j = m + 1;
//	while (i <= m && j <= r) {
//		if (a[i] > a[j]) {//往t数组存较小的值
//			t[p++] = a[j++];
//			sum += j-p;
//		}
//		else {
//			t[p++] = a[i++];
//		}
//
//	}
//	while (i <= m) 
//		t[p++] = a[i++];
//	while (j <= r)
//		t[p++] = a[j++];
//	for (int i = l; i <=r; i++) {
//		a[i] = t[i];
//	}
//}
//void mergesort(int l, int r) {
//	int m;
//	if (l < r) {
//		m = (l + r) >> 1;
//		mergesort(l, m);
//		mergesort(m + 1, r);
//		merge(l, m, r);
//	}
//
//}
//int main() {
//	int n, i;
//	while ((cin >> n), n) {
//		sum = 0;
//		for (int i = 0; i < n; i++) 
//			cin >> a[i];
//			mergesort(0, n - 1);
//			cout << sum << endl;
//		
//	}
//	
//	return 0;
//}