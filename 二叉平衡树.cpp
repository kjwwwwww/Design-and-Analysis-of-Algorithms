#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
struct AVLTree
{
	int Data;
	int Height;
	struct AVLTree* Lchild, * Rchild;
};
int GetHeight(struct AVLTree* T)
{
	if (T == NULL)
		return 0;
	else
		return T->Height;
}
//左单旋
struct AVLTree* FindMin(struct AVLTree* T)
{
	if (T == NULL)
		return NULL;
	else
		return (T->Lchild == NULL) ? T : FindMin(T->Lchild);
}
struct AVLTree* FindMax(struct AVLTree* T)
{
	if (T == NULL)
		return NULL;
	else
		return (T->Rchild == NULL) ? T : FindMin(T->Rchild);
}
struct AVLTree* LL(struct AVLTree* K2)
{
	struct AVLTree* K1;
	K1 = K2->Lchild;
	K2->Lchild = K1->Rchild;
	K1->Rchild = K2;
	//平衡后更新高度值
	K2->Height = max(GetHeight(K2->Lchild), GetHeight(K2->Rchild)) + 1;
	K1->Height = max(GetHeight(K1->Lchild), K2->Height)+1;
	return K1;
}
//右单旋
struct AVLTree* RR(struct AVLTree* K2)
{
	struct AVLTree* K1;
	K1 = K2->Rchild;
	K2->Rchild = K1->Lchild;
	K1->Lchild = K2;
	K2->Height = max(GetHeight(K2->Lchild), GetHeight(K2->Rchild)) + 1;
	K1->Height = max(K2->Height, GetHeight(K1->Rchild)) + 1;
	return K1;
}
//左双旋（先右旋再左旋）
struct AVLTree* LR(struct AVLTree* K2)
{
	K2->Lchild = RR(K2->Lchild);//先对K2的左子树进行右旋
	K2 = LL(K2);//再对K2进行左旋
	return K2;

}//右双旋（先左旋再右旋）
struct AVLTree* RL(struct AVLTree* K2)
{
	K2->Rchild = LL(K2->Rchild);//先对K2的右子树进行左旋
	K2 = RR(K2);//再对K2进行右旋
	return K2;
}
//插入
struct AVLTree* Insert(struct AVLTree* T, int X)
{
	if (T == NULL)
	{
		T = (struct AVLTree*)malloc(sizeof(struct AVLTree));
		T->Data = X;
		T->Height = 1;
		T->Lchild = NULL;
		T->Rchild = NULL;

	}
	else if (X < T->Data)
	{
		T->Lchild = Insert(T->Lchild, X);
		if (GetHeight(T->Lchild) - GetHeight(T->Rchild) == 2)
		{
			if (X < T->Lchild->Data)//说明插在左子树的左子树,用左单旋即可
				T = LL(T);
			else if (X > T->Lchild->Data)//说明插在左子树的右子树上,先右旋再左旋
				T = LR(T);
		}

	}
	else if (X > T->Data)
	{
		T->Rchild = Insert(T->Rchild, X);
		if (GetHeight(T->Rchild) - GetHeight(T->Lchild) == 2)
		{
			if (X > T->Rchild->Data)//说明插在右子树的右子树上，用右单旋即可
				T = RR(T);
			else if (X < T->Rchild->Data)//说明插在右子树的右子树上，先左旋再右旋
				T = RL(T);
		}
	}
	T->Height = max(GetHeight(T->Lchild), GetHeight(T->Rchild)) + 1;
	return T;

}
//删除
struct AVLTree* Delete(struct AVLTree* T ,int X)
{
	struct AVLTree* p;
	if (T == NULL)
		return NULL;
	else {
		if (X < T->Data)
		{
			T->Lchild = Delete(T->Lchild, X);
			if (GetHeight(T->Rchild) - GetHeight(T->Lchild) == 2)
				T = RR(T);
		}

		else if (X > T->Data)
		{
			T->Rchild = Delete(T->Rchild, X);
			if (GetHeight(T->Lchild) - GetHeight(T->Rchild) == 2)
				T = LL(T);
		}
		else//X==T->Data
		{
			if (T->Lchild != NULL && T->Rchild != NULL)//左右子树不为空
			{
				p = FindMin(T->Rchild);
				T->Data = p->Data;
				Delete(T->Rchild, p->Data);
			}
			else //左右子树至少有一个为空
			{
				p = T;
				if (T->Lchild== NULL)
					T = T->Rchild;
				else if (T->Rchild == NULL)
					T = T->Lchild;
				free(p);
			}
		}

	}
	if(T!=NULL)
	T->Height = max(GetHeight(T->Lchild), GetHeight(T->Rchild)) + 1;
	return T;
}

void Preorder(struct AVLTree* T)
{
	
	if (T != NULL)
	{
		printf("%d ", T->Data);
		Preorder(T->Lchild);
		Preorder(T->Rchild);
		
	}
}
int main()
{
	struct AVLTree* T;
	int c;
	T = (struct AVLTree*)malloc(sizeof(struct AVLTree));
	T = NULL;
	printf("请输入八个整数\n");
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &c);
		T = Insert(T, c);
	}
	printf("\n");
	cout << "前序遍历:" << endl;
	Preorder(T);
	return 0;
}