//#include<bits/stdc++.h>
//using namespace std;
//#define MIN 100000
//int n, sum, mins, h, s;
//void dfs(int i) {
//	//	cout<<i<<endl; 
//	if (i > sum) return;
//	else {
//		for (int j = i; j * i <= sum; j++) {
//			if (sum % (i * j) == 0) {
//				h = sum / (i * j);
//				s = 2 * i * j + 2 * i * h + 2 * j * h;
//				if (s < mins) mins = s;
//			}
//		}
//		i++;
//		dfs(i);
//	}
//}
//int main() {
//	cin >> n;
//	if (n < 1 || n>10000)return 0;
//	while (n--) {
//		cin >> sum;
//		if (sum == 1) {
//			cout << "6" << endl;
//			continue;
//		}
//		mins = MIN;
//		s = 0;
//		dfs(1);
//		cout << mins << endl;
//	}
//	
//	return 0;
//}
