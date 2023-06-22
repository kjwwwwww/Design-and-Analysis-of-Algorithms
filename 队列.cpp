//#include<bits/stdc++.h>
//using namespace std;
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//struct Queue
//{
//	int* Data;
//	int Front, Rear;
//	int size,Maxsize;
//};
//struct Queue* Creat(struct Queue* Q,int M)
//{
//	Q = (struct Queue*)malloc(sizeof(struct Queue));
//	Q->Data = (int*)malloc(sizeof(int) * M);
//	Q->Front = Q->Rear = 0;
//	Q->Maxsize = M;
//	Q->size = 0;
//	return Q;
//}
//void Enqueue(struct Queue* Q, int X)
//{
//	if (Q->size == Q->Maxsize) {
//		printf("queue is full\n");
//		return;
//	}
//	Q->Data[Q->Rear++] = X;
//	if (Q->Rear == Q->Maxsize)Q->Rear = 0;
//	Q->size++;
//
//}
//int Dequeue(struct Queue* Q)
//{
//	if (Q->size == 0)
//	{
//		printf("queue id empty\n");
//		return false;
//	}
//	int tmp = Q->Data[Q->Front++];
//	Q->size--;
//	if (Q->Front == Q->Maxsize)Q->Front = 0;
//	return tmp;
//}
//void PrintQueue(struct Queue* Q)
//{
//	printf("队头坐标：%d\n队尾坐标：%d\n", Q->Front, Q->Rear);
//	int h=Q->Front, t=Q->Rear;
//	if (Q->size == 0)
//	{
//		printf("queue is empty\n");
//		return;
//	}
//	while (h != t)
//	{
//		
//		printf("%d ",Q->Data[h++]);
//		if (h == Q->Maxsize)
//			h = 0;
//	}printf("\n");
//	
//	
//}
//int main()
//{
//
//	struct Queue* Q{};
//	Q = Creat(Q, 11);
//	for (int i = 0; i < 10; i++)
//	{
//		Enqueue(Q, i);
//
//	}
//	PrintQueue(Q);
//	printf("删两个\n");
//	for (int i = 0; i < 2; i++)
//	{
//		Dequeue(Q);
//	}
//	PrintQueue(Q);
//	return 0;
//}