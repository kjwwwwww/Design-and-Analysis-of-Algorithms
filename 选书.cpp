//#include<bits/stdc++.h>
//using namespace std;
//map<string, char> Map;//最终存储方案
//int manyi[6][6] = {  {0,0,0,0,0,0},
//					{0,0,0,1,1,0},
//					{0,1,1,0,0,1},
//					{0, 0 ,1, 1,0,0},
//					{0,0,0,0,1,0},
//					{0,0,1, 0, 0,1} };
//int xx = 0;
//bool b[6] = { 0 };
//char book(int i) {
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
//string student(int i) {
//	switch (i)
//	{
//	case 1:return "Student Zhang";
//	case 2:return "Student Wang";
//	case 3:return "Student Liu";
//	case 4:return "Student Sun";
//	case 5:return "Student Li";
//	default:
//		break;
//	}
//}
//void print() {
//	printf("answer %d:\n", ++xx);
//	for (int i = 1; i <= 5; i++) {
//		cout << student(i) << ':' << Map[student(i)] << endl;
//	}
//}
//void dfs(int k) {
//	for (int i = 1; i <= 5; i++) {//五种书的遍历
//
//		if (b[i] == 0 && manyi[k][i]==1) {
//			b[i] = 1;
//			Map[student(k)] = book(i);
//			if (k == 5)//表示第五个人
//			{
//				print(); 
//				
//			}
//			else      //不是最后一个人
//				dfs(k + 1);
//			b[i] = 0;
//
//		}
//
//	}
//	
//	
//}
//int main() {
//	
//	dfs(1);
//	
//	return 0;
//}