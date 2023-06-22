//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//
//
//	string N;
//	int s,flag=0;
//	cin >> N>>s;
//	int a[241];
//	for (int i = 1; i <= N.length(); i++) {
//		a[i] = N[i - 1]-'0';
//		
//	}
//	while(s--){
//		for (int i = 1; i <= N.length(); i++) {
//
//			if (a[i] > a[i + 1]) {
//				for (int j = i; j <= N.length(); j++) {
//					a[j] = a[j + 1];
//				}
//				break;
//			}
//		}
//
//		}
//		int F = 0;
//		for (int i = 1; i <= N.length(); i++) {
//			if (a[i] > 0) {
//				F = i;
//				break;
//			}
//
//	}
//	for (int i = F; i <= N.length(); i++) {
//		if (a[i]>0) {
//			cout << a[i];
//		}
//		
//
//		
//	}
//	cout << endl;
//	return 0;
//}