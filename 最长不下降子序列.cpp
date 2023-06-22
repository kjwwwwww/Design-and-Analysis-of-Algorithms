//#include<bits/stdc++.h>
//using namespace std;
//int a[10005][4];
//int main() {
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        cin >> a[i][1];
//        a[i][2] = 1;
//        a[i][3] = 0;
//    }
//    int l, k;
//    for (int i = n - 1; i >= 1; i--) {
//        l = 0; k = 0;
//        for (int j = i + 1; j <= n; j++) {
//            if (a[j][1] > a[i][1] && a[j][2] > l) {
//                l = a[j][2];
//                k = j;
//            }
//        }
//        if (l > 0) {
//            a[i][2] = l + 1;
//            a[i][3] = k;
//        }
//    }
//    k = 1;
//    for (int i = 1; i <= n; i++) {
//        if (a[i][2] > a[k][2]) k = i;
//    }
//    cout << a[k][2] << endl;
//    return 0;
//}
///*
//13 7 9 16 38 24 37 18 44 19 21 22 63 15
//*/
