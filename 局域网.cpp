//#include<bits/stdc++.h>
//#define inf 0x3f3f3f3f
//#define ll long long
//using namespace std;
//const int  maxn = 1e5 + 10;
//struct newt
//{
//    int from, to, cost;
//}e[maxn];
//int fa[110], n, m;
//int fi(int x)
//{
//    if (x == fa[x])return x;
//    return fa[x] = fi(fa[x]);
//}
//bool cmp(newt a, newt b)
//{
//    return a.cost < b.cost;
//}
//int main()
//{
//    scanf("%d%d", &n, &m);
//    for (int i = 1; i <= n; i++)fa[i] = i;
//    int ans = 0;
//    for (int i = 1; i <= m; i++)
//        scanf("%d%d%d", &e[i].from, &e[i].to, &e[i].cost), ans += e[i].cost;
//    sort(e + 1, e + m + 1, cmp);
//    for (int i = 1; i <= m; i++)
//    {
//        int f1 = fi(e[i].from), f2 = fi(e[i].to);
//        if (f1 != f2)
//        {
//            ans -= e[i].cost;
//            fa[f1] = f2;
//        }
//    }
//    printf("%d\n", ans);
//    return 0;
//}