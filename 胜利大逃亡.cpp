//#include<bits/stdc++.h>
//using namespace std;
//#define MAX 1000000
//int a, b, c, t;
//int Map[51][51][51];
//int dis[6][3] = { {1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1} };
//bool bb[51][51][51];
//struct ch
//{
//    int x, y, z, step;
//};
//bool panduan(int x, int y, int z)
//{
//    if (x < 0 || y < 0 || z < 0 || x >= a || y >= b || z >= c)return 0;
//    if (bb[x][y][z] || Map[x][y][z])return 0;
//    return 1;
//}
//int dfs(int k) {
//    if (k == 1)return 1;
//    else return dfs(k - 1);
//}
//int bfs(int x, int y, int z)
//{
//    queue<ch>ha;
//    ch sta, next;
//    int i, j;
//    sta.x = x;
//    sta.y = y;
//    sta.z = z;
//    sta.step = 0;
//    bb[x][y][z] = 1;
//    ha.push(sta);
//    while (!ha.empty())
//    {
//        sta = ha.front();
//        ha.pop();
//        if (sta.x == a - 1 && sta.y == b - 1 && sta.z == c - 1)
//        {
//            return sta.step;
//        }
//        if (sta.step > t)
//        {
//            return -1;
//        }
//        for (i = 0; i < 6; i++)
//        {
//            next.x = sta.x + dis[i][0];
//            next.y = sta.y + dis[i][1];
//            next.z = sta.z + dis[i][2];
//            if (panduan(next.x, next.y, next.z))
//            {
//                next.step = sta.step + 1;
//                bb[next.x][next.y][next.z] = 1;
//                ha.push(next);
//            }
//        }
//    }
//    return -1;
//}
//int main()
//{
//    int i, j, z, n;
//    cin >> n;
//    while (n--)
//    {
//        cin >> a >> b >> c >> t;
//        for (i = 0; i < a; i++)
//        {
//            for (j = 0; j < b; j++)
//            {
//                for (z = 0; z < c; z++)
//                {
//                    cin>>Map[i][j][z];
//                }
//            }
//        }
//        for (int i = 0; i <= 50; i++) {
//            for (int j = 0; j <= 50; j++) {
//                for (int z = 0; z <= 50; z++) {
//                    bb[i][j][z] = 0;
//                }
//            }
//        }
//        if (dfs(MAX));
//        printf("%d", bfs(0, 0, 0));
//        printf("\n");
//    }
//    return 0;
//}
