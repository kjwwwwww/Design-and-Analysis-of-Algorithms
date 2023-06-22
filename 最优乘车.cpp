//#include <iostream>
//#include <cstring>
//#include <sstream>
//using namespace std;
//
//const int N = 510;
//
//int n, m;
//bool st[N];
//int dist[N], g[N][N], station[N];
//
//void dijkstra()
//{
//    memset(dist, 0x3f, sizeof dist);
//    dist[1] = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        int t = -1;
//        for (int j = 1; j <= n; j++)
//            if (!st[j] && (t == -1 || dist[j] < dist[t]))
//                t = j;
//
//        st[t] = true;
//        for (int j = 1; j <= n; j++)
//            dist[j] = min(dist[j], dist[t] + g[t][j]);
//    }
//}
//
//int main()
//{
//    cin >> m >> n;
//
//    string s;
//    getline(cin, s);                                    // ���˵��س�
//
//    memset(g, 0x3f, sizeof g);
//
//    while (m--)
//    {
//        getline(cin, s);
//        stringstream ssin(s);
//
//        int cnt = 0, k;
//        while (ssin >> k) station[cnt++] = k;
//
//        for (int i = 0; i < cnt; i++)
//            for (int j = i + 1; j < cnt; j++)
//                g[station[i]][station[j]] = 1;          // �� station[i] �� station[j] ֻҪ��һ�γ�
//    }
//
//    dijkstra();
//
//    if (dist[n] == 0x3f3f3f3f) cout << "NO" << endl;
//    else cout << dist[n] - 1 << endl;
//
//    return 0;
//}
