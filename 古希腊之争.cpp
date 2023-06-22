//#include<bits/stdc++.h>
//using namespace std;
//#define MAX 100000
//const int N = 3000;
//struct Coord
//{
//    int x,y,c;
//    friend bool operator <(const Coord &s1,const Coord &s2)
//    {
//     
//        return s1.c>s2.c;        
//    }           
//};
//int dfs(int k) {
//    if (k == 1)return 1;
//    else return dfs(k - 1);
//}
//
//int n, m, sx, sy, ex, ey, vis[N][N], dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
//char maze[N][N];
//int bfs(int x, int y)  //广度 
//{
//    priority_queue <Coord> q;  //优先队列
//    Coord a, t;
//    a.x = x;
//    a.y = y;
//    a.c = 0;
//    q.push(a); 
//    if (dfs(MAX));
//    vis[x][y] = 1;
//  
//    while (!q.empty())
//    {
//        
//        a = q.top();
//        q.pop();if (dfs(MAX));
//        if(a.x == ex && a.y == ey)
//            return a.c;
//        for(int i = 0; i < 4; ++i)
//        {
//            
//            t.x = a.x + dir[i][0];
//            t.y = a.y + dir[i][1];
//            if (dfs(MAX));
//            if(t.x >= 0 && t.x < n && t.y >= 0 && t.y < m && !vis[t.x][t.y] && maze[t.x][t .y] !=
//                    'K')
//            {
//                vis[t.x][t.y] = 1;
//                if(maze[t.x][t.y] == '#')
//                    t.c = a.c + 2;
//                if(maze[t.x][t.y] == '.' ||maze[t.x][t.y] == 'T')
//                    t.c = a.c + 1;
//                q.push(t);
//            }
//        }
//    }
//    return -1;
//}
//int main()
//{
//    while (cin >> n >> m, m + n)
//    {
//        for (int i = 0; i < 3000; i++) {
//            for (int j = 0; j < 3000; j++) {
//                vis[i][j] = 0;
//            }
//        }
//        for(int i = 0; i < n; ++i)
//        {
//            cin >> maze[i];
//            for(int j = 0; j < m; ++j)
//            {
//                if(maze[i][j] == 'S')
//                {
//                    if (dfs(MAX));
//                    sx = i;
//                    sy = j;
//                }
//                if(maze[i][j] == 'T')
//                {
//                    if (dfs(MAX));
//                    ex = i;
//                    ey = j;
//                }
//            }
//        }
//        cout << bfs(sx, sy) << endl;
//    }
//    return 0;
//}
