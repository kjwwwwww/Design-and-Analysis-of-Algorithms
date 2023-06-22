//#include<bits/stdc++.h>
//using namespace std;
//char s1[201], s2[201];
//int A[201], B[201], C[201];
//int Check(char* x) {
//	int i;
//	for (i = 0; i <= strlen(x)-1; i++) {
//		if (x[i] < '0' || x[i]>'9')
//			break; 
//	}
//	if (i ==strlen(x))return 1;
//	else
//		return 0;
//     
//}
//int main() {
//	cin >> s1 >> s2;
//	if (!Check(s1)) {
//		cout << "input error!" << endl;
//		return 0;
//	}
//	if (!Check(s2)) {
//		cout << "input error!" << endl;
//		return 0;
//	}
//	//将字符串转换为数字数组
//	for (int i = 0; i < strlen(s1); i++) {
//		A[strlen(s1) - i] = s1[i] - '0';
//	}
//	for (int i = 0; i < strlen(s2); i++) {
//		B[strlen(s2) - i] = s2[i] - '0';
//	}
//	int Lc = max(strlen(s1), strlen(s2)) + 1;
//
//
//	//进行加法
//	for (int i = 1; i <= Lc; i++) {
//		C[i] += A[i] + B[i];
//		C[i + 1] = C[i] / 10;
//		C[i] = C[i] % 10;
//	}
//
//	while (C[Lc] == 0 && Lc > 1)Lc--;
//	for (int i = Lc; i >0; i--) {
//		cout << C[i];
//	}
//
//
//
//	return 0;
//}