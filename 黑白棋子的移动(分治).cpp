//#include <bits/stdc++.h>
//using namespace std;
//int n;
//void print(char s[])
//{
//    for (int i = 0; i < 2 * n + 2; i++)
//        printf("%c", s[i]);
//    printf("\n");
//}
//void Swap(char s[], int i, int j)
//{
//    char temp;
//    temp = s[i];
//    s[i] = s[j];
//    s[j] = temp;
//
//    temp = s[i + 1];
//    s[i + 1] = s[j + 1];
//    s[j + 1] = temp;
//}
//void fun(char a[], int m, int x)
//{
//    if (m == 4)
//    {
//        printf("step %d:", x++); Swap(a, 3, 8); print(a);
//        printf("step %d:", x++); Swap(a, 3, 7); print(a);
//        printf("step %d:", x++); Swap(a, 1, 7); print(a);
//        printf("step %d:", x++); Swap(a, 1, 6); print(a);
//        printf("step %d:", x++); Swap(a, 0, 6); print(a);
//        return;
//    }
//    else {
//        printf("step%2d:", x++); Swap(a, m - 1, 2 * m); print(a);
//        printf("step%2d:", x++); Swap(a, m - 1, 2 * (m - 1)); print(a);
//        fun(a, m - 1, x);
//    }
//
//}
//int main()
//{
//    char a[200];
//    cin >> n;
//    int i;
//
//    for (i = 0; i < n; i++)
//        a[i] = 'o';
//    for (; i < 2 * n; i++)
//        a[i] = '*';
//    for (; i < 2 * n + 2; i++)
//        a[i] = '-';
//    printf("step%2d:", 0);
//    print(a);
//    fun(a, n, 1);
//    return 0;
//}
