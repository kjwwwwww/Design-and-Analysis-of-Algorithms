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
//LL f[N][N];         //��Ҫ��long long������int������ԭ���ǿ��Կ������������������C15 3000����������long longҲ�ᱬ��
//
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) cin >> v[i];
//
//    f[0][0] = 1;    //ѡ0����ֵ�ܺ�Ϊ0�ķ���Ҳ��һ������
//    //���ذ���ȫ��������������Ż�Ϊһά˫ѭ�������忴��ȫ������ƪ���£������
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
