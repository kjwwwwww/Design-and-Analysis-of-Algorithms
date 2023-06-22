//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 810, M = 3000, INF = 0x3f3f3f3f;
//int n, p, c;
//int sh[N];
//int h[N], w[M], e[M], ne[M], idx;
//int d[N];
//bool st[N];
//void add(int a, int b, int v)
//{
//    w[idx] = v;
//    e[idx] = b;
//    ne[idx] = h[a];
//    h[a] = idx++;
//}
//
//int spfa(int v)
//{
//    queue<int> heap;
//    memset(d, 0x3f, sizeof d);
//    //memset(st,false,sizeof st);
//    d[v] = 0;
//    st[v] = true;
//    heap.push(v);
//    while (heap.size())
//    {
//        auto t = heap.front();
//        heap.pop();
//        st[t] = false;
//        for (int i = h[t]; ~i; i = ne[i])
//        {
//            int j = e[i];
//            if (d[j] > d[t] + w[i])
//            {
//                d[j] = d[t] + w[i];
//                if (!st[j])
//                {
//                    st[j] = true;
//                    heap.push(j);
//                }
//            }
//        }
//    }
//    int out = 0;
//    for (int i = 0; i < n; i++)
//    {
//        int now = sh[i];
//        if (d[now] == INF) return INF;
//        out += d[now];
//    }
//    return out;
//}
//int main()
//{
//    memset(h, -1, sizeof h);
//    scanf("%d%d%d", &n, &p, &c);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &sh[i]);
//    for (int i = 0; i < c; i++)
//    {
//        int a, b, v;
//        scanf("%d%d%d", &a, &b, &v);
//        add(a, b, v), add(b, a, v);
//    }
//    int ans = 0x3f3f3f3f;
//    for (int i = 1; i <= p; i++)
//    {
//        ans = min(ans, spfa(i));
//    }
//    cout << ans << endl;
//    return 0;
//}
//
