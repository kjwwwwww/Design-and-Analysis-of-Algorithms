//#include<bits/stdc++.h>
//using namespace std;
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//struct HuffmanTree
//{
//	int Data;
//	struct HuffmanTree* Lchild, * Rchild;
//};
// //HuffmanTree 的输出所有叶节点的值和编号
//void PrintEncode(struct HuffmanTree* T, int a[], int p)
//{
//	if (T != NULL)
//	{
//		if (T->Lchild != NULL)
//		{
//			a[p++] = 0;
//			PrintEncode(T->Lchild, a, p);
//			p--;
//
//		}
//		 if (T->Rchild != NULL)
//		{
//			a[p++] = 1;
//			PrintEncode(T->Rchild, a, p);
//			p--;
//		}
//		else if (T->Lchild == NULL && T->Rchild == NULL)
//		{
//			printf("该叶结点的值：%d\n", T->Data);
//			printf("该叶结点编号：");
//			for (int i = 0; i <= p - 1; i++)
//			{
//				printf("%d", a[i]);
//			}
//			printf("\n");
//		}
//	}
//
//}
//int main()
//{
//
//	return 0;
//}