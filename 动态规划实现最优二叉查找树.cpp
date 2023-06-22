//#include<bits/stdc++.h>
//using namespace std;
//int optimal_bst(vector<double> p, vector<double> q, int n) {
//    // ��ʼ���������� w �� c
//    vector<vector<double>> w(n + 1, vector<double>(n + 1, 0));
//    vector<vector<double>> c(n + 1, vector<double>(n + 1, 0));
//
//    // ���� c[i][i], w[i][i], �� w[i][i+1]
//    for (int i = 1; i <= n; i++) {
//        c[i][i] = w[i][i] = q[i - 1];
//        if (i < n) {
//            w[i][i + 1] = q[i - 1] + q[i] + p[i];
//        }
//    }
//
//    // ������µľ���Ԫ��
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
//    // ������С����
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
//    cout << "��С����Ϊ: " << min_cost << endl;
//
//    return 0;
//}
