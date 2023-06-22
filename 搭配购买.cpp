//#include<cstdio>
//#include<iostream>
//using namespace std;
//int f[10001], father[10001], c[10001], w[10001];
//int n, m, t, x, y;
//int find(int x)
//{
//    if (x != father[x]) return father[x] = find(father[x]);
//    return father[x];
//}
//void unionn(int x, int y)
//{
//    int fa = find(x), fb = find(y);
//    if (fa < fb)
//    {
//        father[fb] = fa;
//        c[fa] += c[fb];
//        w[fa] += w[fb];//计算价格
//    }
//    else
//    {
//        father[fa] = fb;
//        c[fb] += c[fa];
//        w[fb] += w[fa];
//    }
//}
//int main()
//{
//    scanf_s("%d%d%d", &n, &m, &t);
//    for (int i = 1; i <= n; i++)
//    {
//        scanf_s("%d%d", &w[i], &c[i]);
//        father[i] = i;
//    }
//    for (int i = 1; i <= m; i++)
//    {
//        scanf_s("%d%d", &x, &y);
//        unionn(x, y);
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (father[i] == i)
//        {
//            for (int j = t; j >= w[i]; j--)
//            {
//                f[j] = max(f[j], f[j - w[i]] + c[i]);
//            }
//        }
//    }//01背包
//    printf("%d", f[t]);
//}