//#include<bits/stdc++.h>
//using namespace std;
//
//bool b[21] = { 0 };
//int total = 0;
//int a[21] = { 0 };
//int n;
//void print() {
//	total++;
//	for (int j = 1; j <= n; j++) {
//		cout << a[j] << ' ';
//	}
//	
//	cout << endl;
//}
//bool pd(int x,int y) {
//	int a = x + y;
//	int i;
//	for (i = 2; i <= sqrt(a); i++) {
//		if (a%i == 0)break;
//	}
//	if (i > sqrt(a))return 1;
//	else
//		return 0;
//}
//void dfs(int t,int n) {
//
//	for (int i = 2; i <= n; i++) {
//
//		if (pd(a[t-1], i) && b[i]==0) {
//			a[t] = i;
//			b[i] = 1;
//			if (t == n) {
//				if (pd(a[n], a[1])) {
//					print();
//				}
//				
//			}
//			else
//				dfs(t + 1,n);
//			b[i] = 0;//»ØËÝ
//
//		}
//	}
//
//	/*if (t == n) {
//		if (pd(a[t], a[1])) {
//			print();
//		
//		}
//		return ;
//
//	}
//	for (int i = 2; i <= n; i++) {
//		if(pd(a[t-1],a[i])&&)
//	}*/
//}
//
//int main(){
//	int c = 0;
//	while (scanf("%d",&n)!=EOF) {
//		total = 0;
//		cout << "Case "<<++c<<':'<<endl;
//		a[1] = 1;
//		b[1] = 1;
//		dfs(2, n);
//		cout << endl;
//		memset(a, 0, 20);
//		memset(b, 0, 20);
//      
//	}
//	
//	return 0;
//}