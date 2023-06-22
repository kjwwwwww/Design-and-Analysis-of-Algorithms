//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//const int MAX = 105;
//
//int main()
//{
//    char str1[MAX];
//    char str2[MAX];
//    int a[MAX][MAX] = { 0 };
//    int i, j;
//    while (cin >> str1 >> str2)
//    {
//        int len1 = strlen(str1);
//        int len2 = strlen(str2);
//        for (i = 1; i <= len1; i++)
//        {
//            for (j = 1; j <= len2; j++)
//                if (str1[i - 1] == str2[j - 1])
//                    a[i][j] = a[i - 1][j - 1] + 1;
//                else
//                    a[i][j] = max(a[i - 1][j], a[i][j - 1]);
//        }
//        cout << a[len1][len2] << endl;
//    }
//
//    return 0;
//}