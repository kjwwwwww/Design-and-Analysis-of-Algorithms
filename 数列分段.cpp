//#include<iostream>
//using namespace std;
//int n, m;
//long long q[100002];
//long long sum, maxn;
//int l, r;
//int res = 0, cnt = 1;
//bool check(int mid) {
//    for (int i = 0; i < n; i++) {
//        if (res + q[i] <= mid) res += q[i];
//        else { res = q[i]; cnt++; }
//    }
//    return cnt > m;
//}
//int main() {
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        cin >> q[i];
//        if (maxn < q[i]) maxn = q[i];
//        sum += q[i];
//    }
//    l = maxn; r = sum;
//    while (l <= r) {
//        res = 0; cnt = 1;
//        int mid = (l + r) / 2;
//        if (check(mid)) l = mid + 1;
//        else r = mid - 1;
//    }
//    cout << l;
//    return 0;
//}
