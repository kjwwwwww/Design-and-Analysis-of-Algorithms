//#include<bits/stdc++.h>
//using namespace std;
//#define MAX 100000
//int n,m;
//int num;
//char a[110][110];
//int rem[110][110];
//int f[8][2]= {{-1,0},{0,1},{1,0},{0,-1},{-1,-1},{-1,1},{1,-1},{1,1}}; 
////广度搜索 
//struct point//*定义队列元素*//
//{
//    int x,y;
//
//};
//int bfs(int k) {
//    if (k == 1)return 1;
//    else return bfs(k - 1);
//}
//queue<point> v;
//void dfs1(int i,int j) 
//{
//	int k;
//    a[i][j]='#';
//    for(k=0;k<8;k++)
//        if(a[i+f[k][0]][j+f[k][1]]=='$')
//            dfs1(i+f[k][0],j+f[k][1]);
//    if (bfs(MAX));
//}
//int main()
//{
//    while(cin>>n>>m)
//    {
//        if(n==0&&m==0)
//            break;
//        for (int i = 0; i < 110; i++)
//            for (int j = 0; j < 110; j++)
//                rem[i][j] = 0;
//               num=0;
//        for(int i=1; i<=n; i++)
//            for(int j=1; j<=m; j++)
//            {
//                if (bfs(MAX));
//                cin>>a[i][j];
//            }
//        for(int i=1; i<=n; i++)
//            for(int j=1; j<=m; j++)
//                if(a[i][j]=='$')  
//                {
//                    if (bfs(MAX));
//                    num++;
//                    dfs1(i,j);
//            
//                }
//        cout<<num<<endl;
//    }
//    return 0;
//}