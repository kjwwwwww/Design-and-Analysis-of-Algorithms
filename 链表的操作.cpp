//#include<bits/stdc++.h>
//using namespace std;
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//struct SqList
//{
//	int *Data;
//	int N;
//	int MaxSize;
//
//};
//struct SqList* creatSqList(int M)
//{
//	struct SqList* L;
//	L = (struct SqList*)malloc(sizeof(struct SqList));
//	L->Data = (int*)malloc(sizeof(int) * M);
//	L->N = 0;
//	L->MaxSize = M;
//	return L;
//}
//int DeleteMin(struct SqList*L)
//{
//	int min=L->Data[0];
//	int n=0;
//	for (int i = 1; i < L->N; i++)
//	{
//		if (L->Data[i] < min)
//		{
//			min = L->Data[i];
//			n = i;
//		}
//	}
//	//删除
//	for (int i = n; i < L->N-1; i++)
//	{
//		L->Data[i] = L->Data[i + 1];
//	}
//	L->N--;
//	return min;
//}
//void printSqList(struct SqList* L)
//{
//	for (int i = 0; i < L->N; i++)
//	{
//		printf("%d ", L->Data[i]);
//	}
//	printf("\n");
//}
//void ReverseList(struct SqList* L)
//{
//	int head = 0;
//	int tail = L->N - 1;
//	while (head < tail)
//	{
//		int tem = L->Data[head];
//		L->Data[head] = L->Data[tail];
//		L->Data[tail] = tem;
//		head++;
//		tail--;
//	}
//}
//
//
//
//struct Node
//{
//	int Data;
//	struct  Node* Next;
//
//};
//
//void Insert(struct Node* L,int x)
//{
//	struct Node* p, * q;
//	p = L;
//	q = (struct Node*)malloc(sizeof(struct Node));
//	q->Data = x;
//	q->Next = p->Next;
//	p->Next = q;
//
//
//}
//
//
//void Sort(struct Node* L)
//{
//	struct Node* p, * q,*LL;
//	LL = (struct Node*)malloc(sizeof(struct Node));
//	LL->Next = NULL;
//	while (L->Next!=NULL)
//	{
//		q = L->Next;
//		L->Next= q->Next;
//		p = LL;
//		while (p->Next != NULL && p->Next->Data < q->Data)
//			p = p->Next;
//		q->Next = p->Next;
//		p->Next = q;
//	}
//	L->Next = LL->Next;
//	free(LL);
//}
//int Length(struct Node* L)
//{
//	int length=0;
//	struct Node* p=L->Next;
//	while ( p != NULL)
//	{
//		length++;
//		p = p->Next;
//	}
//	return length;
//}
//
//void Slim(struct Node* L)
//{
//	struct Node* p;
//	p = L->Next;
//	while (p != NULL)
//	{
//		if (p->Data == p->Next->Data)
//		{
//			p->Next = p->Next->Next;
//		}
//		p = p->Next;
//	}
//}
//
//void print(struct Node* L)
//{
//	struct Node* p;
//	p = L->Next;
//	while (p != NULL)
//	{
//		printf("%d ", p->Data);
//		p = p->Next;
//	}
//	printf("\n");
//}
//
//void Split(struct Node* A, struct Node* B, struct Node* C)
//{
//	struct Node* p=NULL,*bp=B,*cp=C;
//	
//	while (A->Next != NULL)
//	{
//		p = A->Next;
//		A->Next = p->Next;
//		p->Next = NULL;
//		if (p->Data < 0)
//		{
//			
//			bp->Next =p;
//			bp = bp->Next;
//		}
//		else
//		{
//			cp->Next = p;
//			cp = cp->Next;
//		}
//	}
//}
////int main()
////{
////
////
////	struct Node* A,*B,*C;
////	A= (struct Node*)malloc(sizeof(struct Node));
////	A->Next = NULL;
////	B = (struct Node*)malloc(sizeof(struct Node));
////	B->Next = NULL;
////	C = (struct Node*)malloc(sizeof(struct Node));
////	C->Next = NULL;
////	
////
////	int x;
////	for (int i = 0; i < 10; i++)
////	{
////		scanf("%d", &x);
////		Insert(A, x);
////	}
////	Sort(A);
////	print(A);
////	/*struct SqList* L;
////	int Max;
////	int x;
////	printf("请输入数组有几个元素\n");
////	scanf("%d", &Max);
////	L = creatSqList(Max);
////	printf("请依次输入数组元素\n");
////	for (int i = 0; i < Max; i++)
////	{
////		scanf("%d", &x);
////		L->Data[i] = x;
////		L->N++;
////	}
////	printf("原数组\n");
////	printSqList(L);
////	ReverseList(L);
////	printf("倒置后的\n");
////	printSqList(L);
////*/
////
////
////
////
////	/*int k = DeleteMin(L);
////	printf("删除出后数组\n");
////
////	printSqList(L);
////	printf("%d\n", k);*/
////	return 0;
////}
//
//
//
//
//struct student
//{
//	int num;
//	struct student* Next;
//};
////头部插入
//void Insert_head(struct student* H, int n)
//{
//	struct student* p, * q;
//	p = H;
//	q = (struct student*)malloc(sizeof(struct student));
//	q->num = n;
//	q->Next = p->Next;
//	p->Next = q;
//
//}
//
////尾部插入
//void Insert_tail(struct student* H,int n)
//{
//	struct student* p, * q;
//	p = H;
//	q = (struct student*)malloc(sizeof(struct student));
//	q->num = n;
//	while (p->Next != NULL) {
//		p = p->Next;
//	}
//	q->Next = p->Next;
//	p->Next = q;
//}
//void Print(struct student* H)
//{		
//	struct student* p;
//		p = H->Next;
//	while(p!=NULL)
//	{
//		printf("%d ", p->num);
//		p = p->Next;
//	}
//	printf("\n");
//}
//void Delete(struct student* H, int i)
//{
//	struct student* p,*q;
//	p = H;
//	while (p->Next->Next!=NULL && p->Next->num!=i)
//	{
//		p = p->Next;
//
//	}
//	q = p->Next;
//	p->Next = q->Next;
//	free(q);
//
//	
//
//}
//void Insert(struct student* H, int i)
//{
//	struct student* p, * q;
//	p = H;
//	q = (struct student*)malloc(sizeof(struct student));
//	q->num = i;
//	while (p->Next->Next != NULL && p->Next->num != i)
//	{
//		p = p->Next;
//	}
//	q->Next = p->Next;
//	p->Next = q;
//
//
//}
//int main()
//{
//	struct student* H;
//	struct student* tail;
//	H = (struct student*)malloc(sizeof(struct student));
//	H->Next = NULL;
//
//	int i;
//	int n;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &n);
//		Insert_tail(H, n);
//	}
//
//	Print(H);
//	/*Delete(H, 5);
//	Print(H);*/
//	Insert(H, 3);
//	Print(H);
//	return 0;
//}