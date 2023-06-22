//#include<bits/stdc++.h>
//using namespace std;
//
//int n;
//int mp[1000], cnt = 0;//mp为桶排序  ,cnt为方案数
//char ret[1000];
//void dfs(int k) {
//	int flag = 0;
//	for (int i = 0; i < 28; i++) {//判断有没有没用过的数
//		if (mp[i] != 0) {//如果
//			flag = 1;
//			break;
//		}
//		
//	}
//	if (flag == 0) {
//		for (int i = 0; i < n; i++) {
//			printf("%c", ret[i]);
//		}
//		printf("\n");
//		cnt++;
//	     return;
//	}
//	for (int i = 0; i < 28; i++) {
//		if (mp[i] != 0) {
//			mp[i]--;
//			ret[k] = i + 'a';
//			dfs(k + 1);
//			mp[i]++;
//		}
//	}
//	
//}
//int main() {
//	
//	char str[1000];
//	scanf_s("%d", &n);
//	getchar();
//	for (int i = 0; i < n; i++) {
//		scanf_s("%c", &str[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		mp[str[i] - 'a']++;
//	}
//	dfs(0);
//	cout << cnt;
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	if(1){}
//	return 0;
//}