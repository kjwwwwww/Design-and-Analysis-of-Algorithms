//#include<cstdio>
//#include<cmath>
//#include<cstring>
//#include<iostream>
//#include<algorithm>
//#include<climits>
//
//using namespace std;
//typedef long long ll;
//const int maxn = 0x3f3f3f3f;
//char a[110];
//int sum[10010], n;
//ll dp[10010];
//int cost(int i, int j) {
//    if (!(i ^ j)) {
//        if (!((sum[i] - sum[j - 1]) ^ n))
//            return 0;
//        return 500;
//    }
//
//    int blank = n - (sum[i] - sum[j - 1]);
//    int num = i - j;//·Ö¸îÊıÁ¿
//    if (blank < num)return maxn;
//    int avg = blank / num;
//    int y = blank - avg * num; avg--;
//    return num * 1LL * (avg) * (avg)+1LL * y * (avg << 1 | 1);
//}
//int main()
//{
//    int cnt = 1;
//    scanf("%d", &n);
//
//    while (~scanf("%s", a)) {
//        sum[cnt] = sum[cnt - 1] + strlen(a);
//        cnt++;
//    }
//
//    for (int i = 1; i <= cnt; i++)dp[i] = maxn;
//
//    for (int i = 1; i <= cnt - 1; i++) {
//        for (int j = 1; j <= i; j++) {
//            dp[i] = min(dp[i], dp[j - 1] + cost(i, j));
//        }
//    }
//    printf("Minimal badness is %lld.\n", dp[cnt - 1]);
//    return 0;
//}
//
