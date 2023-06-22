//#include<bits/stdc++.h>
//using namespace std;
//
//struct Sum {
//	int s[3001] = { 0 };
//	int flag = 0;
//}a[3001];
//
//int Add(Sum* s, Sum* a, Sum* b, Sum* c) {
//	s->flag = max(a->flag, max(b->flag, c->flag));
//	for (int i = 1;  i<=s->flag; i++) {
//			s->s[i] += a->s[i] + b->s[i];
//			if (s->s[i] / 10 && s->flag == i)s->flag++;
//			s->s[i + 1]+= s->s[i] / 10;
//			s->s[i] = s->s[i] % 10;
//		}
//	for (int i = 1;  i <= s->flag; i++) {
//		s->s[i] +=  c->s[i];
//		if (s->s[i] / 10&&s->flag==i)s->flag++;
//		s->s[i + 1] += s->s[i] / 10;
//		s->s[i] = s->s[i] % 10;
//	}
//	return s->flag;
//}
//int main() {
//
//	
//	int p = 4;
//	a[1].s[1] = 1;
//	a[1].flag = 1;
//	a[2].s[1] = 2;
//	a[2].flag = 1;
//	a[3].s[1] = 4;
//	a[3].flag = 1;
//	int k;
//	for (int i = 4; i <= 3000; i++) {
//			a[i].flag=Add(a + i, a + i - 3, a + i - 2, a + i - 1);
//		}
//	while (cin >> k) {
//		
//		
//		int length;
//		for (int i = 1; i <= 3000; i++) {
//
//			if (a[k].s[i] == 0)
//			{
//				length = i-1;
//				break;
//			}
//		}
//		for (int i = a[k].flag; i >= 1; i--) {
//			cout << a[k].s[i];
//		}
//		cout << endl;
//	}
//	
//		return 0;
//	
//}