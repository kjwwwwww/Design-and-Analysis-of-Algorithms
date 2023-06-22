//#include<bits/stdc++.h>
//using namespace std;
//int n, m, ans = 0;
//int dis[101][101], a[10001];
//int main() {
//    scanf("%d%d", &n, &m);
//    for (int i = 1; i <= m; i++) {
//        scanf("%d", &a[i]);
//    }
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            scanf("%d", &dis[i][j]);
//        }
//    }
//   
//    for (int k = 1; k <= n; k++) {
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//              
//                dis[i][j] = min(dis[i][k] + dis[k][j], dis[i][j]);
//            }
//        }
//    }
//    for (int i = 2; i <= m; i++) {
//     
//        ans += dis[a[i - 1]][a[i]];
//    }
//    printf("%d", ans);
//    return 0;
//}