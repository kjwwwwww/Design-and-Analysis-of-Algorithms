//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable:4996)
//struct Graph {
//    char *VertexList;  // �������飬������������Ϊ�ַ�
//    int **AdjacentMatrix;  // �ڽӾ���
//    int VertexNum, EdgeNum; // ͼ�Ķ�����������
//};
//struct Queue
//{
//	char *Data;
//	int Front,Rear;
//	int Size;
//	int MaxSize;
//};
////ȫ��ͼ�Ͷ���
//struct Graph *G;
//struct Queue *Q;
////��������
//struct Queue * CreateQueue(int m)
//{
//    struct Queue *Q;
//    Q=(struct Queue*)malloc(sizeof(struct Queue));
//    Q->Data=(char*)malloc(sizeof(char)*m);
//    Q->Front=Q->Rear=0;
//    Q->Size=0;
//    Q->MaxSize=m;
//    return Q;
//}
//
////��Ӳ���
//void EnQueue(struct Queue *Q,char X)
//{
//    if(Q->Size==Q->MaxSize) return;
//    Q->Data[Q->Rear++]=X;
//    if(Q->Rear==Q->MaxSize) Q->Rear=0;
//    Q->Size++;
//}
////���Ӳ���
//char DeQueue(struct Queue *Q)
//{
//    char tmp;
//    tmp=Q->Data[Q->Front++];
//    if(Q->Front==Q->MaxSize) Q->Front=0;
//    Q->Size--;
//    return tmp;
//}
//
////�ж϶����Ƿ�Ϊ��
//int IsEmpty(struct Queue *Q)
//{
//    if(Q->Size==0) return 1;
//    else return 0;
//}
////����ͼ
//struct Graph* CreateGraph(int n,int m,char a[])
//{
//    struct Graph *G;
//    G=(struct Graph*)malloc(sizeof(struct Graph));
//    G->VertexList=a;
//    G->AdjacentMatrix=(int**)malloc(sizeof(int*)*n);
//    G->VertexNum=n;
//    G->EdgeNum = m;
//    for(int i=0;i<G->VertexNum;i++)
//    {
//        G->AdjacentMatrix[i]=(int*)malloc(sizeof(int)*n);
//    }
//    for(int i=0;i<n;i++)
//        for(int j=0;j<n;j++)
//            G->AdjacentMatrix[i][j]=0;
//    return G;
//}
////ͼ�Ĳ���
//void Insert(struct Graph *G,char b[])
//{
//    int i,j;
//    for(i=0;i<G->VertexNum;i++)
//    {
//        if(b[0]==G->VertexList[i]) break;
//    }
//    for(j=0;j<G->VertexNum;j++)
//    {
//        if(b[2]==G->VertexList[j]) break;
//    }
//    G->AdjacentMatrix[i][j]= G->AdjacentMatrix[j][i] = 1;//�Գƾ���
// 
//}
//
//
////���ʽڵ�
//void Visit(int X)
//{
//    printf("%c",G->VertexList[X]);
//}
//
//
////�����������
//void BFS(struct Graph *G)
//{
//    int k;
//    int visited[10];
//    for(int i=0;i<G->VertexNum;i++)
//    {
//        visited[i]=0;
//    }
//    Visit(0);
//    visited[0]=1;
//    EnQueue(Q,G->VertexList[0]);
//    while(!IsEmpty(Q))
//    {
//        for(int i=0;i<G->VertexNum;i++)
//        {
//            if(G->VertexList[i]==DeQueue(Q)){ k=i; break;}
//        }
//        for(int i=0;i<G->VertexNum;i++)
//        {
//            if(G->AdjacentMatrix[k][i]==1&&visited[i]==0)
//            {
//                Visit(i);
//                visited[i]=1;
//                EnQueue(Q,G->VertexList[i]);
//            }
//        }
//    }
//}
//int main()
//{
//    int n,m;
//    char Vertex[10],Edge[4];
//    scanf("%d\n",&n);
//    gets_s(Vertex);
//    scanf("%d\n",&m);
//    G=CreateGraph(n,m,Vertex);
//    Q=CreateQueue(10);
//    for(int i=0;i<m;i++)
//    {
//        gets_s(Edge);
//        Insert(G,Edge);
//    }
//    printf("BFS:");
//    BFS(G);
//    return 0;
//}
