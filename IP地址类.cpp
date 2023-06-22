//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//int ip[33] = { 0 }, ym[33] = { 0 };
//class IPAddr
//{
//    int n, m;
//    int IP[4] = { 0 }, YM[4] = { 0 }, ID[4] = { 0 };
//public:
//    IPAddr(int a, int b) :n(a), m(b) { }
//    void showIPInfo()
//    {
//        long long int N = this->n;
//        //负数二进制用补码表示
//        if (N < 0) N += pow(2, 32);
//
//        for (int i = 32; i > 0; i--)
//        {
//            ip[i] = N % 2;
//            N /= 2;
//        }
//        //IP地址
//        for (int i = 0; i < 4; i++)
//        {
//            for (int j = i * 8 + 1; j < i * 8 + 9; j++)
//            {
//                IP[i] += ip[j] * pow(2, i * 8 + 8 - j);
//            }
//            cout << IP[i];
//            if (i < 3)cout << ".";
//
//        }
//        cout << endl;
//        //子网掩码
//        int M = m;
//        for (int i = 1; M > 0; M--)
//        {
//            ym[i++] = 1;
//        }
//        for (int i = 0; i < 4; i++)
//        {
//            for (int j = i * 8 + 1; j < i * 8 + 9; j++)
//            {
//                YM[i] += ym[j] * pow(2, i * 8 + 8 - j);
//            }
//            cout << YM[i];
//            if (i < 3)cout << '.';
//        }
//        cout << endl;
//        //网络IP地址
//        for (int i = 1; i <= 32; i++)
//        {
//            if (ym[i] == 0)ip[i] = 0;
//        }
//        for (int i = 0; i < 4; i++)
//        {
//            for (int j = i * 8 + 1; j < i * 8 + 9; j++)
//            {
//                ID[i] += ip[j] * pow(2, i * 8 + 8 - j);
//            }
//            cout <<ID[i];
//            if (i < 3)cout << ".";
//
//        }
//        cout << endl;
//    }
//};
//int main() {
//    int n, m;
//    cin >> n >> m;
//    IPAddr myip(n, m);
//    myip.showIPInfo();
//    return 0;
//}
