//#include<bits/stdc++.h>
//using namespace std;
//
//struct Node
//{
//    double w; 
//    int p, l, r; 
// 
//}node[201];
// struct Code
//{
//    int b[201]; 
//    int s; 
//}code[201];
//
//int dfs(int x)
//{
//    if (x <1)return 1;
//    else
//        return dfs(x - 1);
//}
//void codee(Code code[200], int n)
//{
//    Code cd; 
//    int c, p;
//    for (int i = 0; i < n; i++)
//    {
//        cd.s = n - 1;
//        c = i; 
//        p = node[c].p;
//        while (p != -1)
//        {
//            if (node[p].l == c)
//                cd.b[cd.s] = 0;
//            else
//            {
//                dfs(n);
//                cd.b[cd.s] = 1;
//            }
//            cd.s--; 
//            c = p; 
//            p = node[c].p;
//        }
//        for (int j = cd.s + 1; j < n; j++)
//        {
//            code[i].b[j] = cd.b[j];
//            dfs(j);
//        }
//        code[i].s = cd.s;
//    }
//}
//int main()
//{
//    for (int i = 0; i < 200; i++)
//    {
//        node[i].p = -1;
//    }
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        cin >> node[i].w;
//    int x1, x2; 
//    int m1, m2; 
//    for (int i = 0; i < n - 1; i++)
//    {
//        m1 = m2 = 1e6;
//        x1 = x2 = -1; 
//        
//        for (int j = 0; j < n + i; j++)
//        {
//            if (node[j].w < m1 && node[j].p == -1)
//            {
//                m2 = m1; 
//                x2 = x1;
//                dfs(j);
//                m1 = node[j].w; 
//                x1 = j;
//            }
//            else if (node[j].w < m2 && node[j].p == -1)
//            {
//                m2 = node[j].w;
//                dfs(j);
//                x2 = j;
//            }
//        }
//       
//        node[x1].p = n + i;
//        node[x2].p = n + i;
//        node[n + i].w = m1 + m2;
//        node[n + i].l = min(x1, x2);
//        node[n + i].r = max(x1, x2);
//    }
//    codee(code, n);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = code[i].s + 1; j < n; j++)
//            cout << code[i].b[j];
//        cout << endl;
//    }
//
//}