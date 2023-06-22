//#include<bits/stdc++.h>
//
//using namespace std;
//int s[10001], r[10001], d[10001], c[10001];
//int father[10001];
//int vis[10001];
//int cnt;
//int Find(int x)
//{
//    if (father[x] == x)
//        return x;
//    return father[x] = Find(father[x]);
//}
//void Union(int x, int y)
//{
//    int xx = Find(x);
//    int yy = Find(y);
//    if (xx != yy)
//        father[xx] = yy;
//}
//int main()
//{
//    int n, m;
//    char a;
//    cin >> n >> m;
//    for (int i = 1; i <= 2 * n; i++)
//        father[i] = i;
//
//    while (m--)
//    {
//        int p, x, y;
//        cin >> a >> x >> y;
//        if (a == 'F')
//            Union(x, y);
//        else
//        {
//            Union(x, y + n);
//            Union(x + n, y);
//        }
//    }
//
//    int cnt = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        int temp = Find(i);
//        if (!vis[temp])
//        {
//            vis[temp] = 1;
//            cnt++;
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}