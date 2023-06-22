//#include<bits/stdc++.h>
//using namespace std;
//
//struct TV{
//	int s, e;
//
//}tv[105];
//bool cmp(TV &a, TV &b) {
//	return a.e < b.e;
//}
//int main() {
//	
//
//	int n,sum,fen=0;
//    cin >> n;
//	while (n) {
//		sum = 0;
//		for (int i = 1; i <= n; i++) {
//			cin >> tv[i].s >> tv[i].e;
//		}
//		sort(tv + 1, tv + 1 + n,cmp);
//		sum++;//第一个节目必看
//		fen = tv[1].e;
//		for (int i = 2; i <= n; i++) {
//			if (tv[i].s >= fen) {
//				sum++;
//				fen = tv[i].e;
//			}
//		}
//		cout << sum << endl;
//		cin >> n;
//		
//	}
//	return 0;
//}