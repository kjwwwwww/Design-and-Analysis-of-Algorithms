//#include<bits/stdc++.h>
//using namespace std;
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//struct Tree {
//		char Data;
//		struct Tree* Lchild;
//		struct Tree* Rchild;
//	
//};
//void CreatTree(struct Tree*& T)
//{
//	char c;
//	scanf("%c", &c);
//	if ( c== '#')
//	{
//		T = NULL;
//	}
//	else
//	{
//		T = (struct Tree*)malloc(sizeof(struct Tree));
//		T->Data = c;
//		CreatTree(T->Lchild);
//		CreatTree(T->Rchild);
//	}
//}
////HuffmanTree ���������Ҷ�ڵ��ֵ�ͱ��
//void PrintEncode(struct Tree* T, int a[], int p)
//{
//	if (T != NULL)
//	{
//		if (T->Lchild != NULL)
//		{
//			a[p++] = 0;
//			PrintEncode(T->Lchild, a, p);
//			p--;
//		}
//		 if (T->Rchild != NULL)
//		{
//			a[p++] = 1;
//			PrintEncode(T->Rchild, a, p);
//			p--;
//		}
//		 if (T->Lchild == NULL && T->Rchild == NULL)
//		{
//			printf("��Ҷ����ֵ��%c\n", T->Data);
//			printf("��Ҷ����ţ�");
//			for (int i = 0; i <= p - 1; i++)
//			{
//				printf("%d", a[i]);
//			}
//			printf("\n");
//		}
//	}
//
//}
//void AllRoad(struct Tree* T, char a[], int p)
//{
//	if (T != NULL)
//	{
//		a[p++] = T->Data;
//		AllRoad(T->Lchild, a, p);
//		AllRoad(T->Rchild, a, p);
//		if (T->Lchild == NULL && T->Rchild == NULL)
//		{
//			for (int i = 0; i <= p - 1; i++)
//			{
//				printf("%c", a[i]);
//				if (i <= p - 2)
//					printf("->");
//			}
//			printf("\n");
//		}
//	}
//}
////�������
//void Postorder(struct Tree* T)
//{
//
//	if (T != NULL)
//	{
//		Postorder(T->Lchild);
//		Postorder(T->Rchild);
//		printf("%c ", T->Data);
//	}
//}
//int main() {
//	char a[100];
//	int b[100];
//	int p = 0;
//	struct Tree* T;
//	T == NULL;
//	CreatTree(T);
//	printf("���������");
//	Postorder(T);
//	printf("\n");
//	printf("���ڵ㵽Ҷ�ڵ�����·��:\n");
//	AllRoad(T, a, p);
//	PrintEncode(T, b, 0);
//	return 0;
//}