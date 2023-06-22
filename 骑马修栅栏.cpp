//#include<bits/stdc++.h>
//using namespace std;
//const int N = 510;
//bool a[N][N];
//int du[N], n;
//vector<int> ans;
//void dfs(int x)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[x][i])
//		{
//			a[x][i] = a[i][x] = 0;
//			dfs(i);
//		}
//	}
//	ans.push_back(x);
//}
//int main() {
//	int m;
//	cin >> m;
//	while (m--)
//	{
//		int u, v;
//		cin >> u >> v;
//		a[u][v] = a[v][u] = 1;
//		du[u]++;
//		du[v]++;
//		n = max(n, max(u, v));
//	}
//	int y = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (du[i] & 1)//ÊÇ·ñÎªÆæÊý
//		{
//			y = i;
//			break;
//		}
//		
//	}
//	dfs(y);
//	reverse(ans.begin(), ans.end());
//	for (int x : ans)
//		cout << x << endl;
//	return 0;
//}