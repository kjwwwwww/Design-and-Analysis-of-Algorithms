//#include<bits/stdc++.h>
//using namespace std;
//map<char, string> Map;//���մ洢����
//map<char, string>  T;//��ʱ�洢����
//int work[6][6] = {  {0,0,0,0,0,0},
//					{0,13,11,10,4,7},
//					{0,13,10,10,8,5},
//					{0, 5 ,9, 7,7,4},
//					{0,15,12,10,11,5},
//					{0,10,11, 8, 8,4} };
//int sum = 0;
//int Tsum=0;
//bool b[6] = { 0 };
//char people(int i) {
//	switch (i)
//	{
//	case 1:return 'A';
//	case 2:return 'B';
//	case 3:return 'C';
//	case 4:return 'D';
//	case 5:return 'E';
//	default:
//		break;
//	}
//}
//string J(int i) {
//	switch (i)
//	{
//	case 1:return "J1";
//	case 2:return "J2";
//	case 3:return "J3";
//	case 4:return "J4";
//	case 5:return "J5";
//	default:
//		break;
//	}
//}
//void print() {
//	for (int i = 1; i <= 5; i++) {
//		cout << people(i)<< ':'<< Map[people(i)]<<endl;
//	}
//	cout << "supply:" << sum << endl;
//}
//void dfs(int k) {
//	
//	
//	for (int i = 1; i <= 5; i++) {//��5�ֹ���ѭ��
//		if (b[i] == 0) {
//			
//			T[people(k)] = J(i);//û�������Ͱѹ��������k
//			Tsum += work[k][i];
//			b[i] = 1;
//			if (k == 5) {//��ʾ���һ����
//				if (Tsum > sum)
//				{
//					sum = Tsum;
//					Map = T;
//
//				}
//				
//			}
//			else
//				dfs(k + 1);
//			b[i] = 0;//����
//			Tsum -= work[k][i];
//				
//		    
//			
//			
//			
//		}
//	}
//}
//int main() {
//	int n = 1;
//	dfs(1);
//	print();
//	
//	return 0;
//}