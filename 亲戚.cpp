//#include<bits/stdc++.h>
//using namespace std;
//int father[200001];
//int find(int x)
//{
//	if (father[x] != x)
//		return 	father[x] = find(father[x]);
//	else
//		return x;
//}
//int main() {
//	int n,q,xw;
//	cin >> n>>q;
//	for (int i = 1; i <= n; i++)
//	{
//		father[i] = i;
//	}
//
//	char c;
//	int u, v;
//	while (q--)
//	{
//		cin  >> u >> v;
//			father[father[u]]=father[v];
//		
//	}
//	cin >> xw;
//	while (xw--)
//	{
//		cin >> u >> v;
//		cout << (find(u) == find(v) ? "Yes" : "No") << endl;
//	}
//
//
//	return 0;
//}