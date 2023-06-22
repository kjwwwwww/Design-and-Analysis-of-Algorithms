//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN = 5000005;
//int n, k;
//int a[55][55];
//int visit[55];
//int ans[55];
//void DFS(int x) {
//    int i, j;
//
//    ans[k] = x;
//    ++k;
//    visit[x] = 1;
//    if (k == n) {
//        return;
//    }
//    for (j = 0; j < n; j++) {
//        if (a[x][j] == 1 && visit[j] == 0) {
//            DFS(j);
//        }
//    }
//    return;
//}
//
//int main() {
//    int i, j;
//    while (cin >> n) {
//        for (i = 0; i < n; i++)
//            for (j = 0; j < n; j++)
//                cin >> a[i][j];
//        k = 0;
//        for (j = 0; j < n; j++) //0代表未访问，1代表已经访问
//            visit[j] = 0;
//        for (i = 0; i < n; i++) {
//            if (visit[i] == 0)
//                DFS(i);
//        }
//        for (i = 0; i < n; i++) cout << ans[i] << " ";
//        cout << endl;
//    }
//    return 0;
//}
