//#include<bits/stdc++.h>
//using namespace std;
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//
//struct Card {
//	int kind;
//	int num;
//	struct Card* Next;
//};
//struct suit
//{
//	int kind;
//	struct Card* C;
//	struct suit* Next;
//};
//void Insert(struct Card* tail,int i,int j)
//{
//	struct Card * q;
//	q = (struct Card*)malloc(sizeof(struct Card));
//	q->kind = i;
//	q->num = j;
//	q->Next = tail->Next;
//	tail->Next = q;
//
//}
//void print(struct Card* A)
//{
//	struct Card* p;
//	p = A->Next;
//	while (p != NULL)
//	{
//		printf("花色:%d 点数:%d\n", p->kind, p->num);
//		p = p->Next;
//	}
//}
//struct Card* Draw(struct Card* A,int x)//抽牌
//{
//	struct Card* p,*q;
//	p = A->Next;
//	for (; p->Next->Next!=NULL&&x >= 0; x--)
//	{
//		p = p->Next;
//	}
//	q = p->Next;
//	p->Next = q->Next;
//
//	return q;
//}
//void Insert1(struct Card* C, struct Card* q)
//{
//		struct Card* p;
//		p = C;
//		while (p->Next!=NULL &&q->num > p->Next->num)
//		{
//			p = p->Next;
//		}
//		q->Next = p->Next;
//		p->Next = q;
//
//}
//void print1(struct suit* S[5])
//{
//	for (int i = 1; i <= 4; i++)
//	{
//		struct Card* p;
//		p = S[i]->C->Next;
//		switch (i)
//		{
//		case 1:printf("黑桃：");
//			break;
//		case 2:printf("红心：");
//			break;
//		case 3:printf("梅花:");
//			break;
//		case 4:printf("方块:");
//			break;
//		default:
//			break;
//		}
//		while (p!= NULL)
//		{
//			printf("点数:%d ", p->num);
//			p = p->Next;
//		}
//		printf("\n");
//	}
//}
//void Insert2(struct Card *p, struct suit* S[5])
//{
//	struct Card* q,*k,*o,*tail;
//		for (int j = 1; j <= 4; j++)
//		{
//			k = S[j]->C;
//			while(k->Next!=NULL )
//			{
//				if (k->Next->num == p->num)
//				{
//					
//					q = k->Next;
//					k->Next = q->Next;
//					tail = p;
//					while (tail->Next!= NULL && q->kind > tail->Next->kind)
//						tail = tail->Next;
//					q->Next = tail->Next;
//					tail->Next = q;
//				}
//				else
//				{
//					k = k->Next;
//				}
//			}
//			
//		}
//}
//void print2(struct Card* DH[14])
//{
//	struct Card* p;
//	for (int i = 1; i <= 13; i++)
//	{
//		p = DH[i]->Next;
//		printf("点数:%d: ", i);
//		while (p != NULL)
//		{
//			switch (p->kind)
//			{
//			case 1:printf("黑桃 ");
//				break;
//			case 2:printf("红心 ");
//				break;
//			case 3:printf("梅花 ");
//				break;
//			case 4:printf("方块 ");
//				break;
//			default:
//				break;
//			}
//			p = p->Next;
//		}
//		printf("\n");
//	}
//}
//void Back(struct Card* DH[14], struct Card* A)
//{
//	struct Card* q;
//	for (int i = 1; i <= 13; i++)
//	{
//		while (DH[i]->Next != NULL)
//		{
//			q = DH[i]->Next;
//			DH[i]->Next = q->Next;
//			q->Next = A->Next;
//			A->Next = q;
//		}
//
//	}
//}
//int main()
//{
//	srand(time(NULL));
//	struct suit* S[5]{NULL};//四种花色（顺序表）
//	struct Card* A;//52张牌
//	A = (struct Card*)malloc(sizeof(struct Card));
//	A->Next = NULL;
//	struct Card* tail;
//	tail = A;
//	for (int i = 1; i <=4; i++)
//	{
//		for (int j = 1; j <=13; j++)
//		{
//			Insert(tail, i, j);
//			tail = tail->Next;
//		}
//	}
//
//	for (int i = 1; i <= 4; i++)
//	{
//		S[i] = (struct suit*)malloc(sizeof(struct suit));
//		S[i]->kind = i;
//		S[i]->C = (struct Card*)malloc(sizeof(struct Card));
//		S[i]->C->Next = NULL;
//	}
//	int a ;
//	//抽15张牌
//	for (int i = 1; i <= 15; i++)
//	{
//		a = rand() % 50;
//		struct Card* q;
//		q = Draw(A, a);
//		for(int i=1;i<=4;i++)
//			for (int j = 1; j <= 13; j++)
//			{
//				if (q->kind == i && j == q->num)
//				{
//					Insert1(S[i]->C, q);
//				}
//			}
//	}
//	printf("花色-点数：\n");
//	print1(S);
//	struct Card* DH[14];
//	for (int i = 1; i <= 13; i++)
//	{
//		DH[i] = (struct Card*)malloc(sizeof(struct Card));
//		DH[i]->num = i;
//		DH[i]->Next = NULL;
//		Insert2(DH[i], S);
//	}
//	printf("点数-花色\n");
//	print2(DH);
//	//插回:
//
//	Back(DH, A);
//	printf("插回去\n");
//	print(A);
//	return 0;
//}
//
