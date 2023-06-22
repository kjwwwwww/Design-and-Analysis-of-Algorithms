//#include <cmath>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//typedef long long LL;
//const int N = 3010;
//int n, m;
//int v[N];
//LL f[N][N];         //需要开long long，否则爆int，具体原因是可以看作是组合数问题来求，C15 3000，遇到最坏情况long long也会爆掉
//
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) cin >> v[i];
//
//    f[0][0] = 1;    //选0个面值总和为0的方案也算一个方案
//    //朴素版完全背包，这里可以优化为一维双循环，具体看完全背包那篇文章，有详解
//    for (int i = 1; i <= n; i++) {
//        for (int j = 0; j <= m; j++) {
//            for (int k = 0; k * v[i] <= j; k++) {
//                f[i][j] += f[i - 1][j - k * v[i]];
//            }
//        }
//    }
//    cout << f[n][m];
//    return 0;
//}
//
