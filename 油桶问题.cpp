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
//	//�Ե�kͰ��ѡ��ѡ
//
//	//��ѡ���kͰ�Ͳ��������������򷵻�1
//	if (F(sum + a[k], k + 1) == 1)return 1;
//
//	//����ѡ���kͰ  ������������ �򷵻�1��
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
//	//NΪ��N����Ͱ  MΪ��ҪM����
//	cin >> N >> M;
//		
//		for (int i = 1; i <= N; i++) {
//			cin >> a[i];
//		}
//		sort(a, a + N);
//		F(0, 1) == 1 ? printf("yes\n") : printf("no\n");
//		return 0;
//}