//#include<bits/stdc++.h>
//using namespace std;
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//struct BsTree
//{
//	int Data;
//	struct BsTree* Lchild, *Rchild;
//};
//struct BsTree* Insert(struct BsTree* T, int X)
//{
//	if (T == NULL)
//	{
//		T = (struct BsTree*)malloc(sizeof(struct BsTree));
//		T->Data = X;
//		T->Lchild = NULL;
//		T->Rchild = NULL;
//
//	}
//	else if (X < T->Data)
//	{
//		T->Lchild = Insert(T->Lchild, X);
//	}
//	else if (X > T->Data)
//	{
//		T->Rchild = Insert(T->Rchild, X);
//	}
//	return T;
//
//}
//struct BsTree* FindMin(struct BsTree* T)
//{
//	if (T == NULL)
//		return NULL;
//	else
//		return (T->Lchild == NULL) ? T : FindMin(T->Lchild);
//}
//struct BsTree* FindMax(struct BsTree* T)
//{
//	if (T == NULL)
//		return NULL;
//	else
//		return (T->Rchild == NULL) ? T : FindMin(T->Rchild);
//}
//struct BsTree* Delete(struct BsTree* T, int X)
//{
//	struct BsTree* p;
//	if (T == NULL)
//		return NULL;
//	else if (X < T->Data)
//		T->Lchild = Delete(T->Lchild, X);
//	else if (X > T->Data)
//		T->Rchild = Delete(T->Rchild, X);
//	else //X==T->Data
//	{
//		if (T->Lchild != NULL && T->Rchild != NULL)//左右子树不为空
//		{
//			p = FindMin(T->Rchild);//在右树找一个最小节点
//			T->Data = p->Data;//将右树的最小节点赋值到要删除的节点
//			T->Rchild = Delete(T->Rchild, p->Data);
//
//
//		}
//		else//左右子树至少有一个为空
//		{
//			p = T;
//			if (T->Lchild == NULL)
//				T = T->Rchild;
//			else if (T->Rchild == NULL)
//				T = T->Lchild;
//			free(p);
//		}
//
//	}
//	return T;
//
//}
//void Preorder(struct BsTree* T)
//{
//	if (T != NULL)
//	{
//		printf("%d", T->Data);
//		Preorder(T->Lchild);
//		Preorder(T->Rchild);
//		
//	}
//}
//int main()
//{
//
//	struct BsTree* T;
//	T = (struct BsTree*)malloc(sizeof(struct BsTree));
//	T = NULL;
//	int c;
//	printf("请输入初始化序列:\n");
//	for (int i = 0; i < 8; i++)
//	{
//		scanf("%d", &c);
//		T = Insert(T, c);
//	}
//	Preorder(T);
//	printf("\n");
//	printf("请输入想删除的数据\n");
//	scanf("%d", &c);
//	T = Delete(T,c);
//	Preorder(T);
//	return 0;
//}