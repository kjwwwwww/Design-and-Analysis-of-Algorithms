//#include<bits/stdc++.h>
//using namespace std;
//int n, h, f[30][400], d[30], t[30], dp[30][400];
//void inti()
//{
//    scanf("%d", &n);
//    memset(f, 0, sizeof(f));
//    scanf("%d", &h);
//    h = h * 12;
//
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &f[i][1]);
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &d[i]);
//    }
//    for (int i = 2; i <= n; i++)
//    {
//        scanf("%d", &t[i]);
//    }
//    t[1] = 0;
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int k = 2; k <= h; k++)
//        {
//            if (f[i][k - 1] <= d[i]) break;
//            f[i][k] = f[i][k - 1] - d[i];
//        }
//    }
//
//}
//void getdp()
//{
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= h; j++)
//        {
//            int sum = 0;
//            for (int k = 0; k <= h && dp[i][j] != -1; k++)
//            {
//                if (j + t[i + 1] + k > h) break;
//                dp[i + 1][j + t[i + 1] + k] = max(dp[i][j] + sum, dp[i + 1][j + t[i + 1] + k]);
//                if (f[i + 1][k + 1] > 0) sum += f[i + 1][k + 1];
//            }
//        }
//    }
//}
//void print(int MMAX)
//{
//    f[1][0] = h;
//    for (int i = 1; i < n; i++)
//    {
//        printf("%d, ", f[i][0] * 5);
//    }
//    printf("%d\n", f[n][0] * 5);
//    printf("Number of fish expected: %d\n\n", MMAX);
//
//}
//int main()
//{
//    //freopen("in.txt","r",stdin);
//    while (1)
//    {
//        inti();
//        if (n == 0)break;
//        memset(dp, -1, sizeof(dp));
//        dp[0][0] = 0;
//        getdp();
//        int mark = 1, MAX = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            if (MAX < dp[i][h])
//            {
//                MAX = dp[i][h];
//                mark = i;
//            }
//        }
//
//        int MMAX = MAX;
//        for (int i = mark; i >= 2; i--)
//        {
//            int sum = 0, k;
//            for (k = 0; k <= h; k++)
//            {
//                if (MAX == sum + dp[i - 1][h - k - t[i]])
//                {
//                    f[i][0] = k;
//                    break;
//                }
//                sum = sum + f[i][k + 1];
//            }
//            h = h - t[i] - k;
//            MAX -= sum;
//        }
//
//        print(MMAX);
//    }
//    return 0;
//}
