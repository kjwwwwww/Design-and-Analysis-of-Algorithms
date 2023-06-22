//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//bool s[7000000];
//int co = 0;
//struct node {
//    int i, j;
//}ans[10005];
//bool cmp(node x1, node x2) {
//    return x1.j < x2.j;
//}
//void cal(int m) {
//    for (int i =0; i <= m; i++) {
//        for (int j = 0; j <= i; j++) {
//            s[i * i+j * j] = true;
//        }
//    }
//}
//int pd(int a, int b) {
//    for (int i = 0; i < n; i++) {
//        if(!s[a + i * b])return 0;
//  }
//    return 1;
//}
//int main() {
//
//    int anss = 0;
//    cin >> n >> m;
//    if (n < 3 || n>25 || m < 1 || m>250) {
//        return 0; cout << "NONE" << endl;
//    }
//        cal(m);
// 
//        for (int i = 0; i <= 2 * m * m; i++) {
//            for (int j = 1; j <= 2 * m * m; j++) {
//                if (i + j * (n - 1) > 2 * m * m)
//                {
//                    break;
//                }
//                if (pd(i, j)) {
//                    ans[anss].i = i;
//                    ans[anss].j = j;
//                    anss++;
//                }
//            }
//        }
//        sort(ans, ans + anss, cmp);
//        if (anss == 0)
//            cout << "NONE" << endl;
//        else {
//            for (int i = 0; i < anss; i++) {
//                cout << ans[i].i << ' ' << ans[i].j << endl;
//            }
//        }
//        return 0;
//    }