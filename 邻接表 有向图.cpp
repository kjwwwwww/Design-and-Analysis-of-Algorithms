//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable:4996)
//#define INFINITY 32767 // һ������ֵ����ʾ����
//struct EdgeNode {
//    int VertexIndex; // �����±�
//    int Weight; // �ߵ�Ȩֵ
//    struct EdgeNode* Next;
//};
//struct VertexEntry {
//    char VertexData; // ������������Ϊchar
//    struct EdgeNode* EdgeList;
//};
//struct Graph {
//    struct VertexEntry* AdjacentList;
//    int VertexNum, EdgeNum; // ͼ�Ķ�����������
//};
//
//
//struct Graph* G;
//int InDegree[6] = { 0 };
//int flag[6] = { 0 };
//char TopOrder[7];
////������ͼ
//struct Graph* CreateGraph(int n, char a[])
//{
//    struct Graph* G;
//    G = (struct Graph*)malloc(sizeof(struct Graph));
//    G->VertexNum = n; 
//    G->EdgeNum = 0;
//    G->AdjacentList =(struct VertexEntry*)malloc(sizeof(struct VertexEntry) * n);
//    for (int i = 0; i < n; i++)
//    {
//        G->AdjacentList[i].EdgeList = NULL;
//        G->AdjacentList[i].VertexData = a[i];
//    }
//    return G;
//}
////���߲嵽ͼ��
//void Insert(struct Graph* G, char b[])
//{
//    int i, j;
//    struct EdgeNode* E, * P;
//    G->EdgeNum++;
//    for (i = 0; i < G->VertexNum; i++)
//    {
//        if (b[0] == G->AdjacentList[i].VertexData) break;
//    }
//    E = (struct EdgeNode*)malloc(sizeof(struct EdgeNode));
//    E->Next = NULL;
//    E->Weight = 0;
//    for (j = 0; j < G->VertexNum; j++)
//    {
//        if (b[2] == G->AdjacentList[j].VertexData) break;
//    }
//    E->VertexIndex = j;
//    InDegree[j]++;
//    P = G->AdjacentList[i].EdgeList;
//    G->AdjacentList[i].EdgeList = E;
//    E->Next = P;
//    E = NULL;
//}
////��������
//void Topsort(struct Graph* G)
//{
//    int i, j;
//    struct EdgeNode* P;
//    for (j = 0; j < G->VertexNum; j++)
//    {
//        for (i = 0; i < G->VertexNum; i++)
//        {
//            if (InDegree[i] == 0 && flag[i] == 0) { flag[i] = 1; break; }
//        }
//        P = G->AdjacentList[i].EdgeList;
//        TopOrder[j] = G->AdjacentList[i].VertexData;
//        while (P != NULL)
//        {
//            InDegree[P->VertexIndex]--;
//            P = P->Next;
//        }
//    }
//    for (j = 0; j < G->VertexNum; j++)
//    {
//        printf("%c", TopOrder[j]);
//    }
//}
//int main()
//{
//    int VertexNum, EdgeNum;
//    char VertexList[10], EdgeList[4];
//    scanf("%d\n", &VertexNum);
//    gets_s(VertexList);
//    scanf("%d\n", &EdgeNum);
//    G = CreateGraph(VertexNum, VertexList);
//    for (int i = 0; i < EdgeNum; i++)
//    {
//        gets_s(EdgeList);
//        Insert(G, EdgeList);
//    }
//    printf("Toposort:");
//    Topsort(G);
//    return 0;
//}
