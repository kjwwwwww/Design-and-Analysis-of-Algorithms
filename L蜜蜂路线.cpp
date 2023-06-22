//#include<bits/stdc++.h>
//using namespace std;
//struct  Bee {
//    int a[1001];
//    int flag =0;
//}bee[1001];
//int main() {
//
//
//
//    int n, m;
//   
//    
//    while (cin >> n >> m) {
//        bee[n].a[1] = 1;
//        bee[n].flag = 1;
//        bee[n+1].a[1] = 1;
//        bee[n+1].flag = 1;
//        //i-1  +  i
//        int i, j;
//        for ( i = n+2; i <= m; i++) {
//            bee[i].flag = max(bee[i - 1].flag, bee[i - 2].flag);
//            for ( j = 1; j <= bee[i].flag; j++) {
//       
//                bee[i].a[j] += bee[i - 1].a[j] + bee[i - 2].a[j];
//                if (bee[i].a[j] /10&&bee[i].flag==j)bee[i].flag++;
//                bee[i].a[j + 1] += bee[i].a[j] / 10;
//                bee[i].a[j] %= 10;
//            }
//        }
//        for (int i = bee[m].flag; i >= 1; i--) {
//            cout << bee[m].a[i];
//        }
//        cout << endl;
//    }
//
//}