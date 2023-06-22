//#include<bits/stdc++.h>
//using namespace std;
//map<int, int>m;
//int main() {
//	
//	m['A'] = 4;
//	m['B'] = 3;
//	m['C'] = 2;
//	m['D'] = 1;
//	m['F'] = 0;
//	string str;
//	while (getline(cin, str)) {
//		double ans = 0, num = 0;
//		bool flag = true;
//		for (int i = 0; i < str.size(); i++) {
//			if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C' || str[i] == 'D' || str[i] == 'F') {
//				ans += m[str[i]];
//				num++;
//			}
//			else if (str[i] == ' ') {
//
//			}
//			else {
//				flag = false;
//				break;
//			}
//		}
//		if (flag == false) {
//			cout << "Unknow" << endl;
//		}
//		else {
//			ans /= num;
//			cout << fixed << setprecision << ans << endl;
//		}
//	}
//	return 0;
//}