//#include<bits/stdc++.h>
//using namespace std;
//int optimal_bst(vector<double> p, vector<double> q, int n) {
//    // 初始化两个矩阵 w 和 c
//    vector<vector<double>> w(n + 1, vector<double>(n + 1, 0));
//    vector<vector<double>> c(n + 1, vector<double>(n + 1, 0));
//
//    // 计算 c[i][i], w[i][i], 和 w[i][i+1]
//    for (int i = 1; i <= n; i++) {
//        c[i][i] = w[i][i] = q[i - 1];
//        if (i < n) {
//            w[i][i + 1] = q[i - 1] + q[i] + p[i];
//        }
//    }
//
//    // 填充余下的矩阵元素
//    for (int d = 2; d <= n; d++) {
//        for (int i = 1; i <= n - d + 1; i++) {
//            int j = i + d - 1;
//            w[i][j] = w[i][j - 1] + p[j - 1] + q[j];
//
//            c[i][j] = INT_MAX;
//            for (int r = i; r <= j; r++) {
//                double cost = c[i][r - 1] + c[r + 1][j] + w[i][j];
//                if (cost < c[i][j]) {
//                    c[i][j] = cost;
//                }
//            }
//        }
//    }
//
//    // 返回最小代价
//    return c[1][n];
//}
//
//int main() {
//    vector<double> p = { 0.15, 0.10, 0.05, 0.10, 0.20 };
//    vector<double> q = { 0.05, 0.10, 0.05, 0.05, 0.05, 0.10 };
//
//    int n = p.size();
//    int min_cost = optimal_bst(p, q, n);
//
//    cout << "最小代价为: " << min_cost << endl;
//
//    return 0;
//}
