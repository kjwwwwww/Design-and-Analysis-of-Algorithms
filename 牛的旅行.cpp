//
//#include <bits/stdc++.h>
//using namespace std;
//const int N = 200, M = 1e5 + 10, INF = 0x7f7f7f7f;
//
//int n, bin[N];
//
//double g[N][N], max_to_go[N], diameter[N], ans = INF;
//
//struct Point {
//    int x, y;
//} p[N];
//
//int Find(int x) {
//    if (bin[x] == x) return x;
//    return bin[x] = Find(bin[x]);
//}
//
//void Union(int u, int v) {
//    int fu = Find(u), fv = Find(v);
//    if (fu != fv) {
//        bin[fu] = fv;
//    }
//}
//
//double get_dis(Point a, Point b) {
//    return sqrt(pow(a.x - b.x * 1.0, 2) + pow(a.y - b.y * 1.0, 2));
//}
//
//int main() {
//    cin >> n;
//    for (int i = 1; i <= n; i++) bin[i] = i;
//    for (int i = 1; i <= n; i++) {
//        cin >> p[i].x >> p[i].y;
//    }
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            char ch;
//            cin >> ch;
//            if (ch == '1' || i == j) {
//                g[i][j] = get_dis(p[i], p[j]);
//                Union(i, j);
//            }
//            else {
//                g[i][j] = INF;
//            }
//        }
//    }
//  
//    for (int k = 1; k <= n; k++) {
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
//            }
//        }
//    }
//    for (int i = 1; i <= n; i++) {
//        int fi = Find(i);
//        for (int j = 1; j <= n; j++) {
//            if (Find(i) != Find(j)) continue;
//
//            max_to_go[i] = max(max_to_go[i], g[i][j]);
//        }
//
//        diameter[fi] = max(diameter[fi], max_to_go[i]);
//    }
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (Find(i) == Find(j)) continue;
//      
//            double max_diameter = max(diameter[Find(i)], diameter[Find(j)]);
//
//            ans =
//                min(ans, max(max_to_go[i] + max_to_go[j] + get_dis(p[i], p[j]),
//                    max_diameter));
//        }
//    }
//        cout << fixed << setprecision(6) << ans << endl;
//    return 0;
//}
