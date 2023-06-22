//#include<bits/stdc++.h>
//using namespace std;
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//struct Stack
//{
//	int* Data;
//	int Top;//栈顶
//	int Maxsize;
//};
//struct Stack* CreateStack(int M)
//{
//	struct Stack* S;
//	S = (struct Stack*)malloc(sizeof(struct Stack));
//	S->Data = (int*)malloc(sizeof(int) * M);
//	S->Top = -1;
//	S->Maxsize = M;
//	return S;
//}
//void Push(struct Stack* S, int X)
//{
//	if (S->Top == S->Maxsize - 1)
//	{
//		printf("Error：stack is full\n");
//		return;
//	}
//	S->Data[++S->Top] = X;
//}
//int Pop(struct Stack* S)
//{
//	if (S->Top == -1)
//	{
//		printf("Error : Stack if empty\n"); return 0;
//    }
//	int temp = S->Data[S->Top--];
//	return temp;
//}
//void ConvertToBinary(int N)
//{
//	if (N == 0) {
//		printf("0\n");
//		return;
//}
//	struct Stack* S;
//	int Maxsize=0;
//	int s = N, i;
//	while (s) { Maxsize++; 
//	s /= 2;
//	}
//	S = CreateStack(Maxsize);
//	s = N;
//	while (s)
//	{
//		i = s % 2;
//		Push(S, i);
//		s = s / 2;
//	}
//	while (S->Top != -1)
//	{
//		printf("%d", Pop(S));
//	}
//	printf("\n");
//}//十进制转换成二进制
//int change(char *a,  int k, int i)
//{
//	int p=0;
//	int sum = 0;
//	for (; i>=k; i--,p++)
//	{
//		sum += (a[i] - '0') * pow(10, p);
//	}
//	return sum;
//}
//int main()
//{
//	printf("输入字符串\n");
//	char s[50];
//	gets_s(s);
//	struct Stack* S;
//	S = CreateStack(10);
//	for (int i = 0; i < strlen(s);)
//	{
//		if (s[i] == ' ') { 
//			i++;
//		      continue; 
//		}
//		
//		if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
//		{
//			int b = Pop(S);
//			int a = Pop(S);
//			switch (s[i])
//			{
//			case '+':Push(S, a + b);
//				break;
//			case '-':Push(S, a - b);
//				break;
//			case '*':Push(S, a * b);
//				break;
//			case '/':Push(S, a / b);
//			default:
//				break;
//			}
//			i++;
//		}
//		else {
//			int k = i;
//			while (s[i] != ' ' && s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/')
//			{
//				i++;
//			}
//			Push(S, change(s, k, i - 1));
//		}
//	}if(S->Top==0)
//	printf("%d\n", S->Data[0]);
//	else
//	{
//		printf("表达式错误\n");
//	}
//	return 0;
//}