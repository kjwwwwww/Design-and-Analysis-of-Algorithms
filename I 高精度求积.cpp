//#include<bits/stdc++.h>
//using namespace std;
//
//char s1[1010], s2[1010];
//int a[1010], b[1010], c[1010];
//int main() {
//	int La, Lb, Lc;
//	//输入高精度字符串
//	cin >> s1 >> s2;
//	La = strlen(s1);
//	Lb = strlen(s2);
//	//将字符串转换为高精度数，并在数组中倒置以便运算
//	for (int i = 0; i < La; i++) 
//		a[La - i] = s1[i] - '0';
//	for (int i = 0; i < Lb; i++) 
//		b[Lb - i] = s2[i] - '0';
//	
//	Lc = La + Lb;
//	for (int i = 1; i <= La; i++) {
//		for (int j = 1; j <= Lb; j++) {
//			c[i + j - 1] += a[i] * b[j];
//			c[i + j] += c[i + j - 1] / 10;
//			c[i + j - 1] %= 10;
//		}
//	}
//	//去除前导零
//	while(c[Lc] == 0 && Lc >1)Lc--;
//	for (int i = Lc; i > 0; i--) {
//		cout << c[i];
//	}
//
//	return 0;
//}