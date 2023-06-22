//#include<bits/stdc++.h>
//#define rush() int T;cin>>T;while(T--)
//#define sf(a) scanf("%d\n",&a)
//#define sft(a,b) scanf("%d%d",&a,&b)
//#define go(a) while(cin>>a&&a)
//#define ms(a,b) memset(a,b,sizeof a)
//#define rep(i,a,b) for(int i=a;i<=b;i++)
//#define pf(a) printf("%.8lf",a)
//#define valu first
//#define num second
//#define E 1e-8
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//const double pi = acos(-1.0);
//const int inf = 0x3f3f3f3f;
//const int idata = 10000 + 5;
//
//int n, m, t;
//int maxx, minn;
//int i, j, k;
//int flag, sum;
//int fa[idata];
//struct point
//{
//    int x, y, fee;
//    const bool operator<(const point& b)
//        const {
//        return fee < b.fee;
//    }
//}a[idata];
//int Find(int son)
//{
//    return son == fa[son] ? son : fa[son] = Find(fa[son]);
//}
//void Union(int x, int y)
//{
//    x = Find(x), y = Find(y);
//    if (x != y)
//        fa[y] = x;
//}
//
//int main()
//{
//    cin.tie(0);
//    iostream::sync_with_stdio(false);
//    while (cin >> n >> m)
//    {
//        int tot = 0;
//        for (i = 0; i < m; i++)
//        {
//            int x, y, z;
//            cin >> x >> y >> z;
//            a[i].x = x, a[i].y = y, a[i].fee = z;
//            tot += z;
//        }
//        for (i = 1; i <= n; i++) fa[i] = i;
//        sort(a, a + m);
//        for (i = 0; i < m; i++)
//        {
//            if (Find(a[i].x) != Find(a[i].y))
//            {
//                Union(a[i].x, a[i].y);
//                flag++;
//                maxx = max(a[i].fee, maxx);
//            }
//            if (flag == n - 1) break;
//        }
//        cout << flag << " " << maxx << endl;
//    }
//    return 0;
//}
