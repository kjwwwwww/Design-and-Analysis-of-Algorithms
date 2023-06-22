//#include<bits/stdc++.h>
//using namespace std;
//long int n, c;
//long int a[7001];
//bool v[7001];
//bool dfs(int n) {
//	int p = 0, sum = 0;
//	while (p >= 0)
//	{
//		if (!v[p])
//		{
//			v[p] = 1;
//			sum += a[p];
//			if (sum == c) return true;
//			else if (sum > c) {
//				v[p] = 0;
//				sum -= a[p];
//			}
//		}
//		p++;
//	}
//	if (p >= n) {
//		while (v[p - 1]) {
//			p--;
//			v[p] = 0;
//			if (p < 1)return 0;
//		}
//		while (!v[p - 1]) {
//			p--;
//			if (p < 1)return 0;
//		}
//		sum -= a[p - 1];
//		v[p - 1] = 0;
//	}
//	return 0;
//}
//int main() {
//	cin >> n >> c;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	if (dfs(n)) {
//		int first = 1;
//		for (int i = 0; i < n; i++) {
//			if (v[i]) {
//				if (first)
//					first = 0;
//				else cout << " ";
//				printf("%d", a[i]);
//			}
//		}
//		cout << endl;
//	}
//	else
//	printf("No Solution!");
//	
//	return 0;
//}
