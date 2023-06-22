//#include <bits/stdc++.h>
//using namespace std;
//const int maxn = 1000 + 10;
//int n, m;
//int a[maxn][maxn];
//
//int main() {
//    cin >> n >> m;
//    memset(a, 0, sizeof(a)); 
//    for (int i = 0; i < m; i++) {
//        int x, y;
//        cin >> x >> y;
//        a[x][y] = 1; 
//    }
//    for (int k = 1; k <= n; k++) {
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//                if (a[i][k] && a[k][j]) a[i][j] = 1; 
//            }
//        }
//    }
//    int t, ans = 0;
//    for (int i = 1; i <= n; i++) {
//        t = 0;
//      
//        for (int j = 1; j <= n; j++) {
//            if (a[i][j]) t++;
//        }
//        if (t >= (n + 1) / 2) ans++;
//        t = 0;
//      
//        for (int j = 1; j <= n; j++) {
//            if (a[j][i]) t++;
//        }
//        if (t >= (n + 1) / 2) ans++;
//    }
//    cout << ans << "\n";
//    return 0;
//}