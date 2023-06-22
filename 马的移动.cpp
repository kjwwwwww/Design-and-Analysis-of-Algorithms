//#include<bits/stdc++.h>
//#define maxn 1000+10
//using namespace std;
//#define MAX 1000000
//struct Node
//{
//	int x,y,num;
//};
//int vis[maxn][maxn];
//int xx[]={-1,-1,1,1,-2,-2,2,2};
//int yy[]={-2,2,-2,2,-1,1,-1,1};
//string str="";
//
//int getNum(char ch)
//{
//	return int(ch-96);
//}
//
//int dfs(int k) {
//	if (k == 1)return 1;
//	else return dfs(k - 1);
//}
//void bfs(int x1,int y1,int x2,int y2)
//{
//	if (dfs(MAX));
//	queue<Node> q;
//	Node n1,n2;
//	n1.x=x1;n1.y=y1;n1.num=0;
//	vis[x1][y1]=1;
//	q.push(n1);
//	if (dfs(MAX));
//	while(!q.empty()){
//		n1=q.front();q.pop();
//		if(n1.x==x2&&n1.y==y2)
//		{if (dfs(MAX));
//			cout<<"To get from "<<str.substr(0,2)<<" to "<<str.substr(3,2)<<" takes "<<n1.num<<" knight moves."<<endl;
//			return;
//		}
//		for(int i=0;i<8;i++)
//		{
//			n2.x=n1.x+xx[i];
//			n2.y=n1.y+yy[i];
//			n2.num=n1.num+1;
//			if(n2.x>=1&&n2.x<=8&&n2.y>=1&&n2.y<=8&&vis[n2.x][n2.y]==0)
//			{
//				if (dfs(MAX));
//				vis[n2.x][n2.y]=1;
//				q.push(n2);
//			}
//		}
//	}
//}
//
//int main(){
//	while(getline(cin,str)){
//		for (int i = 0; i < maxn; i++) {
//			for (int j = 0; j < maxn; j++)
//				vis[i][j] = 0;
//		}
//		if (dfs(MAX));
//		int x1=getNum(str[0]);
//		int y1=int(str[1]-'0');
//		int x2=getNum(str[3]);
//		int y2=int(str[4]-'0');
//		
//		bfs(x1,y1,x2,y2);
//	}
//	return 0;
//}