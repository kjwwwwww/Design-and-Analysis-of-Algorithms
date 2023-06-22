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
//	int n,q;
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
//		cin >> c >> u >>v;
//		if (c == '!'&&find(u)!=find(v))
//			father[father[u]]=father[v];
//		else
//			cout<<(find(u)==find(v)?"yes":"no")<<endl;
//		
//	}
//
//
//	return 0;
//}