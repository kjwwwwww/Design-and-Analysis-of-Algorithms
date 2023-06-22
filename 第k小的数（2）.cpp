//#include <bits/stdc++.h> 
//#define inf 0x7f7f7f7f
//using namespace std;
//int s[100010], ss[100010], M, N, K;
//int find(int* s1, int cd1, int* s2, int cd2, int k) {
//    if (cd1 > cd2)
//        return find(s2, cd2, s1, cd1, k);
//    if (cd1 == 0)
//        return s2[k - 1];
//    if (k == 1)
//        return min(s1[0], s2[0]);
//    int k1 = min(k / 2, cd1);
//    int k2 = k - k1;
//    if (s1[k1 - 1] > s2[k2 - 1])
//        return find(s1, cd1, s2 + k2, cd2 - k2, k - k2);
//    else if (s1[k1 - 1] < s2[k2 - 1])
//        return find(s1 + k1, cd1 - k1, s2, cd2, k - k1);
//    else
//        return s1[k1 - 1];
//}
//int main() {
//    scanf("%d%d%d", &N, &M, &K);
//    for (int i = 0; i < N; i++)
//        scanf("%d", &s[i]);
//    for (int i = 0; i < M; i++)
//        scanf("%d", &ss[i]);
//    int cnt = find(s, N, ss, M, K);
//    cout << cnt << endl;
//    return 0;
//}
