//#include<bits/stdc++.h>
//using namespace std;
//
//struct quyu {
//    int xi, xa, yi, ya;
//}qu[30];
//
//struct point {
//    int x, y;
//}po[30];
//
//int n, sum;
//int du[30], book[30][30], ans[30];
//
//void find(int x) {
//    sum++; du[x]--;
//
//    for (int i = 1; i <= n; i++) if (book[x][i]) {
//        ans[i] = x;
//        book[x][i] = 0;
//        for (int j = 1; j <= n; j++) {
//            if (book[j][i]) {
//                du[j]--;
//                book[j][i] = 0;
//                if (du[j] == 1) find(j);
//            }
//        }
//        break;
//    }
//    return;
//}
//
//int main() {
//  
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        scanf("%d %d %d %d", &qu[i].xi, &qu[i].xa, &qu[i].yi, &qu[i].ya);
//
//    }
//
//    for (int i = 1; i <= n; i++) {
//        scanf("%d %d", &po[i].x, &po[i].y);
//        int cnt = 0;
//        for (int j = 1; j <= n; j++) {
//            if (po[i].x <= qu[j].xa && po[i].x >= qu[j].xi &&
//                po[i].y <= qu[j].ya && po[i].y >= qu[j].yi) {
//                book[i][j] = 1, cnt++;
//           
//            }
//        }
//
//        du[i] = cnt;
//    }
//    for (int i = 1; i <= n; i++) if (du[i] == 1) find(i);
//    if (sum < n) printf("None");
//    else for (int i = 1; i <= n; i++)
//        printf("%c %d\n", char(i - 1 + 'A'), ans[i]);
//    return 0;
//}