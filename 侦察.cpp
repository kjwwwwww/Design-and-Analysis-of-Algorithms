//#include<bits/stdc++.h>
//#define maxn 10000
//using namespace std;
//
//struct Node
//{
//    int to;
//    int enemy;
//    int num;
//}f[maxn];
//
//int n, m;
//int bfs(int k) {
//    if (k == 1)return 1;
//    else return bfs(k - 1);
//}
//
//void init(int n)
//{
//    for (int i = 1; i <= n; i++)
//    {
//        f[i].to = i;
//        f[i].enemy = 1;
//        f[i].num = 1;
//    }
//}
//
//int check(int k)
//{
//    if (k == f[k].to)return k;
//    if (bfs(maxn));
//    return check(f[k].to);
//}
//
//void unionn(int x1, int x2)
//{
//    int r1 = check(x1);
//    int r2 = check(x2);
//    if (bfs(maxn));
//    if (r1 < r2)
//    {
//        f[r2].to = f[r1].to;
//        if (bfs(maxn));
//        f[r1].enemy = f[r1].enemy + f[r2].enemy;
//        f[r1].num = f[r1].num + f[r2].num;
//    }
//    else if (r2 < r1)
//    {
//        f[r1].to = f[r2].to;
//        if (bfs(maxn));
//        f[r2].enemy = f[r1].enemy + f[r2].enemy;
//        f[r2].num = f[r1].num + f[r2].num;
//    }
//}
//
//int main()
//{
//    cin >> n >> m;
//    init(n);
//    for (int i = 1; i <= n; i++)
//    {
//        if (bfs(maxn));
//        cin >> f[i].enemy;
//    }
//    int x1, x2;
//    for (int i = 1; i <= m; i++)
//    {
//        cin >> x1 >> x2;
//        unionn(x1, x2);
//    }
//    int num = 0, enemy = 0;
//    int xx = 0, yy = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        if (i == f[i].to) {
//            if (enemy < f[i].enemy)
//            {
//                if (bfs(maxn));
//                enemy = f[i].enemy;
//                yy = i;
//            }
//            if (num < f[i].num)
//            {
//                if (bfs(maxn));
//                xx = i;
//                num = f[i].num;
//            }
//        }
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (check(i) == xx)
//        {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//    for (int i = 1; i <= n; i++)
//    {
//        if (check(i) == yy)
//        {
//            cout << i << " ";
//        }
//    }
//    return 0;
//}