//#include<bits/stdc++.h>
//using namespace std;
//
//struct rote {
//	int x, y;
//
//}r[3001];
//int flag = 0;
//void print() {
//	printf("0,0->1,2->2,4->3,6->4,8\n");
//}
//void dfs(int x,int y,int k) {
//	
//	
//	if (y == 8) {
//		if (x == 4&&flag==0) {
//			flag = 1;
//			print();
//	
//		}
//		return;
//	}
//	for (int i = 1; i <= 4; i++) {
//		int x1, y1;
//		switch (i)
//		{
//		case 1:x1 = x + 2;
//			y1 = y + 1;
//			break;
//		case 2:x1 = x + 1;
//			y1 = y + 2;
//			break;
//		case 3:x1 = x - 1;
//			y1 = y + 2;
//			break;
//		case 4:x1 = x - 2;
//			y1 = y + 1;
//			break;
//		default:
//			break;
//		}
//		if (x1 >= 0 && x1 <= 4 && y1 >= 0 && y1 <= 8) {
//			r[k + 1].x = x1;
//			r[k + 1].y = y1;
//			dfs(x1, y1, k + 1);
//		}
//
//	}
//	
//	
//
//
//	
//
//
//}
//int main() {
//
//	r[1].x = r[1].y = 0;
//	dfs(0,0,1);
//		return 0;
//}