//#include<bits/stdc++.h>
//using namespace std;
//bool b[6][6] = {0};
//int Count = 0;
//
//int X[9] = { 0,1,2,2,1,-1,-2,-2,-1 };
//int Y[9] = { 0,2,1,-1,-2,-2,-1,1,2 };
//void dfs(int x,int y,int k) {
//	
//	if ( k == 25&&b[x][y]==0) {
//		Count++;
//		return ;
//	 }
//		
//	for (int i = 1; i <= 8; i++) {
//		if (b[x][y] == 0) {
//			b[x][y] = 1;
//			if (x + X[i] >= 1 && x + X[i] <= 5 && y + Y[i] >= 1 && y + Y[i] <= 5)
//				dfs(x + X[i], y + Y[i], k + 1);
//			b[x][y] = 0;
//		}
//	}
//}		
//int main(){
//
//	dfs(1, 1,1);
//
//	cout << Count << endl;
//	return 0;
//}