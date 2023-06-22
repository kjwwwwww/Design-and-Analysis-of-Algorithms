//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//
//struct Goods
//{
//	int i;//商品编号
//	struct Goods* Next;
//};
//struct Sqlist
//{
//	struct Goods** Supplier;
//	int N;//每个商户提供N个商品
//};
//
//void CountAllGoods(struct Sqlist* S)
//{
//	struct Sqlist* p;
//	p = S;
//	struct Goods* q;
//	int n ;
//	int sum=0;
//	for (int i = 0; i < S->N; i++)
//	{
//		n = 0;
//		while (p->Supplier[i]->Next != NULL)
//		{
//			n++;
//			p->Supplier[i] = p->Supplier[i]->Next;
//		}
//		printf("第%d个厂商提供%d个货\n", i, n);
//		sum += n;
//	}
//	
//	printf("一共有%d种货\n", sum);
//}
//void InsertG(struct Goods* G, int k)
//{
//	struct Goods* p,*q;
//	p = G;
//	q = (struct Goods*)malloc(sizeof(struct Goods));
//	q->i = k;
//	q->Next = p->Next;
//	p->Next = q;
//}
//void InsertS(struct Sqlist* S)
//{
//	struct Sqlist* p;
//	struct Goods* q;
//	p = S;
//	int n;
//	int k;
//	for (int i = 0; i < S->N; i++)
//	{
//		printf("请输入第%d个厂商提供几种货\n",i);
//		scanf("%d", &n);
//		for (int j = 0; j < n; j++)
//		{
//			
//			printf("请输入货编号\n");
//			scanf("%d", &k);
//			InsertG(S->Supplier[i], k);
//
//		}
//	}
//}
//int main()
//{
//	struct Sqlist * S;
//	S = (struct Sqlist*)malloc(sizeof(struct Sqlist));
//	int N;
//	printf("请输入一共几个厂商供货\n");
//	scanf("%d", &N);
//	S->N = N;
//	S->Supplier = (struct Goods**)malloc(sizeof(struct Goods*)*N);
//	for (int i = 0; i < N; i++)
//	{
//		S->Supplier[i] = (struct Goods*)malloc(sizeof(struct Goods));
//		S->Supplier[i]->Next = NULL;
//	}
//	InsertS(S);
//	CountAllGoods(S);
//
//	return 0;
//}