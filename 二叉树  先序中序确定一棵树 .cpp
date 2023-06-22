//#include<bits/stdc++.h>
//using namespace std;
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>                        
//#include<stdlib.h>
//#include<math.h>
//struct Tree {
//	int Data;
//	struct Tree* Lchild;
//	struct Tree* Rchild;
//
//};
//int Count(struct Tree* T)
//{
//	if (T == NULL)
//		return 0;
//	return 1 + Count(T->Lchild) + Count(T->Rchild);
//}
//int Countleaf(struct Tree* T)
//{
//	if (T == NULL)
//		return 0;
//	if (T->Lchild == NULL && T->Rchild == NULL)
//		return 1;
//	else
//		return Countleaf(T->Lchild) + Countleaf(T->Rchild);
//
//}
//int TreeDepth(struct Tree* T)
//{
//	if (T == NULL)
//		return 0;
//	else
//		return 1 + max(TreeDepth(T->Lchild), TreeDepth(T->Rchild));
//}
//void Copy(struct Tree* T, struct Tree* TT)
//{
//	if (T == NULL)
//	{
//		TT = NULL;
//		return;
//	}
//	else
//	{
//		TT->Data = T->Data;
//		TT->Lchild = (struct Tree*)malloc(sizeof(struct Tree));
//		TT->Rchild = (struct Tree*)malloc(sizeof(struct Tree));
//		Copy(T->Lchild,TT->Lchild);
//		Copy(T->Rchild, TT->Rchild);
//	}
//}
//
//void CreatTree(struct Tree*&T,int Ps[],int L1,int R1,int Is[],int L2,int R2) {
//	T = (struct Tree*)malloc(sizeof(struct Tree));
//	T->Data = Ps[L1];
//	int root;
//	for (root = 0; root <= R2; root++)
//	{
//		if (Ps[L1] == Is[root])
//			break;
//	}
//	if (root - L2 != 0)
//	{
//		//如果中序序列的左子树不为空，递归创建左子树
//		CreatTree(T->Lchild, Ps, L1 + 1, L1 + root - L2, Is, L2, root - 1);
//	}
//	else
//		T->Lchild = NULL;
//	if (R2 - root != 0)
//	{
//		//如果中序序列右子树不为空，递归创建右子树
//		CreatTree(T->Rchild, Ps, R1 - (R2 - root) + 1, R1, Is, root + 1, R2);
//
//	}
//	else
//		T->Rchild = NULL;
//	
//}
////后序遍历
//void Postorder(struct Tree* T)
//{
//	
//	if (T != NULL)
//	{
//		Postorder(T->Lchild);
//		Postorder(T->Rchild);
//		printf("%d ", T->Data);
//	}
//	
//}
//int main()
//{
//	int Ps[10], Is[10];
//	int L1, L2, R1, R2;
//	L1 = L2 = 0;
//	R1 = R2 = 9;
//	printf("请输入前序序列：\n");
//	for(int i=0;i<10;i++)
//		scanf("%d", &Ps[i]);
//	printf("请输入中序序列：\n");
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &Is[i]);
//	struct Tree* T;
//	T = NULL;
//	CreatTree(T, Ps, L1, R1, Is, L2, R2);
//	printf("后序输出:");
//	Postorder(T);
//	/*printf("\n");
//	printf("该树深度:%d\n", TreeDepth(T));
//    printf("结点总数:%d\n",Count(T));*/
//	return 0;
//}