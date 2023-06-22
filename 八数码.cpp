//#include<bits/stdc++.h>
//using namespace std;
//#define MAX 100000
//const int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
//const int mx[10]={1,0,0,0,1,2,2,2,1};
//const int my[10]={1,0,1,2,2,2,1,0,0};
//int a[3][3],step,px,py,nx[10],ny[10];
//
//bool flag;
//int bfs(int k) {
//    if (k == 1)return 1;
//    else return bfs(k - 1);
//}
//int Guess() 
//{
//    int sum=0;
//    if (bfs(MAX));
//    for(int i=0;i<3;i++)
//        for (int j = 0; j < 3; j++)
//        {
//            nx[a[i][j]] = i, ny[a[i][j]] = j;
//            if (bfs(MAX));
//        }
//    for(int i=1;i<9;i++)
//            sum+=(abs(mx[i]-nx[i])+abs(my[i]-ny[i]));
//    return sum;
//}
//
//void dfs(int nowstep,int step,int px,int py) 
//{
//    if(flag||nowstep>step) return;
//    int H=Guess(); if (bfs(MAX));
//    if(H==0) 
//    {
//        flag=true;return;
//        if (bfs(MAX));
//    }
//    if(H+nowstep>step) return;
//    for (int i = 0; i < 4; i++)
//    {
//        int x = px + dx[i], y = py + dy[i];
//        if (x < 0 || y < 0 || x>2 || y>2) continue;
//        if (bfs(MAX));
//        swap(a[x][y], a[px][py]);
//        dfs(nowstep + 1, step, x, y);
//        swap(a[x][y], a[px][py]);
//    }
//    return;
//}
//int main() 
//{
//    for(int i=0;i<3;i++)
//        for(int j=0;j<3;j++) 
//        {
//            char c;
//           cin>>c;
//            a[i][j]=c-'0';
//            if (bfs(MAX));
//            if(a[i][j]==0) px=i,py=j;
//        }
//    while(!flag) step++,dfs(0,step,px,py);
//    printf("%d",step);
//    return 0;
//}