//#include<bits/stdc++.h>
//#include<algorithm>
//using namespace std;
//int a[1001];	
//int N, M; 
//int F(int sum, int k) {
//	if (sum == M)return 1;
//
//
//	if (k > N||sum>M)return 0;
//
//
//	//对第k桶，选或不选
//
//	//若选择第k桶油并且满足条件，则返回1
//	if (F(sum + a[k], k + 1) == 1)return 1;
//
//	//若不选择第k桶  并且满足条件 则返回1；
//     if (F(sum, k + 1) == 1)return 1;
//
// 
// 
//	 return 0;
//
//
//}
//int main() {
//
//	//N为有N个油桶  M为需要M升油
//	cin >> N >> M;
//		
//		for (int i = 1; i <= N; i++) {
//			cin >> a[i];
//		}
//		sort(a, a + N);
//		F(0, 1) == 1 ? printf("yes\n") : printf("no\n");
//		return 0;
//}