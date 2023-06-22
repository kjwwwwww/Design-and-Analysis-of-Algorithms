//#include<bits/stdc++.h>
//using namespace std;
//int n, k,x;
//int b[1000001];
//map<int,int> m;
//int main() {
//
//
//	cin >> n >> k;
//	for (int i = 0; i <n; i++)
//	{
//		cin >>x;
//		b[x]++;
//		m[x] = i+1;
//	}
//	for (int i = 0; i <100001; i++)
//	{
//		
//		
//		while(b[i]!=0)
//		{
//			b[i]--;
//			k--;
//			if (k == 0)
//			{
//				cout << m[i] << endl;
//				return 0;
//			}
//		}
//			
//		
//	}
//	if (k > 0)
//		cout << "No result" << endl;
//	return 0;
//}