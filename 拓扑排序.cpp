//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN = 100005;
//int n, m, u, v, du[MAXN];
//vector<int>G[MAXN];
//vector<int>ans;
//stack<int>stk;
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 1; i <= n; ++i)
//        {
//            G[i].clear();
//            du[i] = 0;
//        }
//        while (!stk.empty())stk.pop();
//        ans.clear();
//        for (int u = 1; u <= n; ++u)
//        {
//            for (int v = 1; v <= n; ++v)
//            {
//                int f;
//                scanf("%d", &f);
//                if (f)
//                {
//                    du[v]++;
//                    G[u].push_back(v);
//                }
//            }
//        }
//
//        for (int i = 1; i <= n; ++i)
//        {
//            if (!du[i])
//            {
//                stk.push(i);
//            }
//        }
//        while (!stk.empty())
//        {
//            int now = stk.top();
//            stk.pop();
//            for (int i = 0; i < G[now].size(); ++i)
//            {
//                du[G[now][i]]--;
//                if (!du[G[now][i]])
//                {
//                    stk.push(G[now][i]);
//                }
//            }
//            ans.push_back(now);
//        }
//        if (ans.size() != n)
//        {
//            printf("ERROR\n");
//        }
//        else
//        {
//            for (int i = 1; i <= n; ++i)
//            {
//                printf("%d ", ans[i - 1] - 1);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
