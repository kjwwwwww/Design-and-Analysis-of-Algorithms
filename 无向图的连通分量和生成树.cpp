//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN = 100005;
//int n, m, s, t, a[1005][1005];
//bool vis[MAXN];
//vector<int>ans;
//void dfs(int x)
//{
//    printf("%d ", x - 1);
//    vis[x] = true;
//    for (int i = 1; i <= n; ++i)
//    {
//        if (a[x][i] && !vis[i])
//        {
//            dfs(i);
//        }
//    }
//    return;
//}
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 1; i <= n; ++i)
//        {
//            vis[i] = false;
//        }
//        for (int i = 1; i <= n; ++i)
//        {
//            for (int j = 1; j <= n; ++j)
//            {
//                scanf("%d", &a[i][j]);
//            }
//        }
//        for (int i = 1; i <= n; ++i)
//        {
//            if (!vis[i])
//            {
//                dfs(i);
//                printf("\n");
//            }
//        }
//    }
//    return 0;
//}
