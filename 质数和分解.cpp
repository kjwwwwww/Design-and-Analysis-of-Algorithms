//
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//int f[N], n;
//int a[N], cnt;
//int prime[N];
//int vis[N];
//void init()
//{
//    memset(vis, 1, sizeof vis);
//    for (int i = 2; i <= 200; i++)
//    {
//        if (vis[i]) prime[++cnt] = i;
//        for (int j = 2; j * i <= 200; j++)
//            vis[j * i] = 0;
//    }
//
//}
//int main()
//{
//    init();
//    while (~scanf("%d", &n))
//    {
//        memset(f, 0, sizeof f);
//        f[0] = 1;
//        for (int i = 1; i <= cnt; i++)
//            for (int j = prime[i]; j <= n; j++)
//                f[j] += f[j - prime[i]];
//        cout << f[n] << endl;
//    }
//}
//
//
