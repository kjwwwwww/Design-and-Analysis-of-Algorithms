//#include<bits/stdc++.h>
//using namespace std;
//#define M 50005
//
//map<char, char>mm;
//vector<int>G[150];
//
//int n, cnt;
//int in[150], use[150];
//
//string s[M], sim, ans;
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		cin >> s[i];
//	cin >> sim;
//	for (int i = 2; i <= n; i++) {
//		int len = min(s[i].length(), s[i - 1].length());
//		for (int j = 0; j < len; j++) {
//			if (s[i][j] != s[i - 1][j]) {
//				G[s[i - 1][j] - 'a' + 1].push_back(s[i][j] - 'a' + 1);
//				in[s[i][j] - 'a' + 1] ++;
//				use[s[i][j] - 'a' + 1] ++;
//				use[s[i - 1][j] - 'a' + 1] ++;
//				break;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		if (use[i])
//			cnt++;
//	}
//	for (int i = 1; i <= cnt; i++) {
//		int j = 1;
//		while (j < 27 && (in[j] || !use[j]))
//			j++;
//		if (j > 26) {
//			printf("0\n");
//			return 0;
//		}
//		mm[j + 'a' - 1] = 'a' + i - 1;
//		in[j] = -1;
//		int siz = G[j].size();
//		for (int k = 0; k < siz; k++) {
//			int son = G[j][k];
//			in[son] --;
//		}
//	}
//	for (int i = 0; i < sim.length(); i++) {
//		if (!mm[sim[i]]) {
//			printf("0\n");
//			return 0;
//		}
//		ans[i] = mm[sim[i]];
//	}
//	for (int i = 0; i < sim.length(); i++)
//		cout << ans[i];
//	return 0;
//}
