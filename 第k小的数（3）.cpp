//#include <bits/stdc++.h>
//#define inf 0x7f7f7f
//typedef long long ll;
//using namespace std;
//ll a[100010], b[100010], M, N, K;
//ll js(ll x) {
//    ll jg, k;
//    jg = 0, k = N - 1;
//    for (int i = 0; i < M; i++) {
//        while (k >= 0 && a[i] + b[k] > x)
//            k--;
//        jg += k + 1;
//        if (jg >= K)
//            return 1;
//    }
//    return 0;
//}
//int main() {
//    while (~scanf("%lld%lld%lld", &M, &N, &K)) {
//        for (ll i = 0; i < M; i++)
//            scanf("%d", &a[i]);
//        for (ll i = 0; i < N; i++)
//            scanf("%d", &b[i]);
//        sort(a, a + M);
//        sort(b, b + N);
//        ll l = a[0] + b[0], r = a[M - 1] + b[N - 1];
//        ll jg = l;
//        while (l <= r) {
//            ll mid = (l + r) / 2;
//            if (js(mid)) {
//                jg = mid;
//                r = mid - 1;
//            }
//            else
//                l = mid + 1;
//        }
//        printf("%lld\n", jg);
//    }
//    return 0;
//}
