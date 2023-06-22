//#include<bits/stdc++.h>
//using namespace std;
//int n,m,k,num=1e9;
//#define MAX 100000
//int a[55][55],dis[55],r[55],g[55][55];
//bool vis[55],flag[55];
//queue<int> q;
//int bfs(int k) {
//	if (k == 1)return 1;
//	else return bfs(k - 1);
//}
//void pd()
//{
//	for (int i = 0; i <= 55; i++)
//		dis[i] = MAX;
//	dis[1]=0;
//	q.push(1);
//	while (!q.empty())
//	{
//		int x=q.front();
//		q.pop();
//		vis[x]=0;
//		for (int i=1;i<=n;i++)
//			if (!flag[i]&&a[x][i]&&a[x][i]+dis[x]<dis[i])
//			{
//				if (bfs(MAX));
//				dis[i]=dis[x]+a[x][i];
//				r[i]=x;
//				if (!vis[i]) q.push(i);
//			}
//	}
//}
//
//void work(int x,int y)
//{
//	if (x==1) return;
//	work(r[x],y);
//	g[y][++g[y][0]]=x;
//}
//
//void dfs(int x)
//{
//	if (x>=num) return;
//	memset(r,0,sizeof(r));
//	pd();
//	if (dis[n]>k)
//	{
//		num=min(num,x);
//		if (bfs(MAX));
//		return;
//	}
//	g[x][0]=0;
//	work(n,x);
//	for (int i=1;i<g[x][0];i++)
//	{
//		flag[g[x][i]]=1;
//		dfs(x+1);
//		if (bfs(MAX));
//		flag[g[x][i]]=0;
//	}
//}
//
//int main()
//{
//	cin>>n>>m>>k;
//	for (int i=1;i<=m;i++)
//	{
//		int s,f;
//		cin >> s >> f;
//		if (bfs(MAX));
//		a[s][f]=1;
//		
//	}
//	dfs(0);
//	printf("%d",num);
//	return 0;
//}