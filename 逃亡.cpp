//#include<bits/stdc++.h>
//using namespace std;
//int dis, v1, v2;
//int main() {
//    cin >> dis >> v1 >> v2;
//    double x1 = 0, x2 = dis;
//    double time1, time2, mid;
//    while (x1 <= x2) {
//        mid = (x1 + x2) / 2;
//        time1 = mid / v2 + (dis - mid) / v1;
//        time2 = mid / v2 + (mid - mid / v2 * v1) / (v1 + v2) + (dis - (mid - mid / v2 * v1) / (v1 + v2) * v1 - mid / v2 * v1) / v2;
//        if (fabs(time1 - time2) < 1e-3) {//判断两个人到终点的时间是多少  如果差别不大  那就输出 
//            cout << fixed << setprecision(2) << time1 << endl;
//            return 0;
//        }
//        else if (time1 < time2) x2 = mid;
//        else if (time1 > time2) x1 = mid;
//    }
//    return 0;
//}