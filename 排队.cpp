//#include<bits/stdc++.h>
//using namespace std;
//int a[30001];
//int b[30001];
//int main() {
//
//
//	int N;
//	cin >> N;
//	if (N > 30000 || N < 1)return 0;
//	int ans = 10000000;
//	int P1 = 0, P2 = 0;
//	for (int i = 1; i <= N; i++) {
//		cin >> a[i];
//		if (a[i] == 2)
//			b[i] = 1;
//		//��¼��i��֮ǰ��2�Լ����Լ�
//		b[i] += b[i - 1];
//	}
//	for (int i = 1; i <=N; i++) {
//		//��i��֮ǰҪ�ĵ�����  Ϊ2����
//		int befor = b[i - 1];
//		//��i��֮��Ҫ�ĵ�����
//		//N-i : �������
//		//b[N]-b[i] �����2�ĸ���
//
//	   //Ϊ1����
//		int last = (N - i) - (b[N] -b[i]);
//		ans = min(befor + last, ans);
//	}
//	cout << ans << endl;
//	return 0;
//}