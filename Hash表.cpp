//#include<bits/stdc++.h>
//using namespace std;
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//#include<time.h>
//enum EntryType { Legitimate, Empty, Deleted };
//struct HashEntry {
//    int Data;
//    enum EntryType Info;
//};
//struct HashTable {
//    int TableSize;
//    struct HashEntry* Cells; /* 存放条目的数组 */
//};
//void Insert(struct HashTable* H, int k);
//int NextPrime(int M)
//{
//    int i;
//    while (M) {
//        for (i = 2; i < sqrt(M); i++)
//        {
//            if (M % i == 0)
//                break;
//        }
//        if (i > sqrt(M))
//            return M;
//        else
//            M++;
//    }
//}
//struct HashTable* CreatHash(struct HashTable* H, int M)
//{
//    int i;
//    H = (struct HashTable*)malloc(sizeof(struct HashTable));
//    H->TableSize = NextPrime(M); /* 得到素数作为表大小 */
//    H->Cells = (struct HashEntry*)malloc(sizeof(struct HashEntry) * H->TableSize);
//    for (i = 0; i < H->TableSize; i++)
//        H->Cells[i].Info = Empty;
//
//
//    return H;
//
//}
//void ReHash(struct HashTable* H)
//{
//    int n = H->TableSize;
//    struct HashEntry* tem = (struct HashEntry*)malloc(sizeof(struct HashEntry) * n);
//    for (int i = 0; i < n; i++)
//    {
//        tem[i].Info = H->Cells[i].Info;
//        tem[i].Data = H->Cells[i].Data;
//    }
//    free(H->Cells);
//    H->TableSize = NextPrime(n * 2);
//    H->Cells = (struct HashEntry*)malloc(sizeof(struct HashEntry) * H->TableSize);
//    for (int i = 0; i < H->TableSize; i++)
//        H->Cells[i].Info = Empty;
//    for (int i = 0; i < n; i++)
//    {
//        if (tem[i].Info == Legitimate)
//        {
//            Insert(H, tem[i].Data);
//        }
//    }
//}
//int Hash(struct HashTable* H, int k)
//{
//    return k % H->TableSize;
//}
//int Find(struct HashTable* H, int k)
//{
//    int Pos, NewPos;
//    int CNUM = 0;
//    Pos = Hash(H, k);
//    NewPos = Pos;
//    while (H->Cells[NewPos].Info != Empty && H->Cells[NewPos].Data != k)
//    {
//        CNUM++;
//        if (CNUM > 5)return - 1;
//        NewPos = (Pos + CNUM) % H->TableSize;
//    }
//    return NewPos;
//}
//void Insert(struct HashTable* H, int k)
//{
//    int Pos;
//    Pos = Find(H, k);
//    if (Pos == -1) {
//        ReHash(H);
//        Insert(H, k);
//    }
//    else if(H->Cells[Pos].Info != Legitimate)
//    {
//        H->Cells[Pos].Info = Legitimate;
//        H->Cells[Pos].Data = k;
//    }
//}
//void PrintHash(struct HashTable* H)
//{
//    for (int i = 0; i < H->TableSize; i++)
//    {
//        if (H->Cells[i].Info == Empty || H->Cells[i].Info == Deleted)
//            printf("-1 ");
//        else
//            printf("%d ", H->Cells[i].Data);
//    }
//    printf("\n");
//}
//
//int main()
//{
//    srand((int)time(NULL));
//    struct HashTable* H;
//    H = (struct HashTable*)malloc(sizeof(struct HashTable));
//    H = CreatHash(H, 100);
//    printf("原始表长：%d\n",H->TableSize);
//    
//        Insert(H, 1);
//        Insert(H, 2);
//        Insert(H, 3);
//        Insert(H, 4);
//        Insert(H, 5);
//        Insert(H, 6);
//        Insert(H, 102);
//   
//    PrintHash(H);
//    printf("插入后表长：%d\n", H->TableSize);
//    printf("输入要查找的数\n");
//    int k;
//    scanf("%d", &k);
//    int i = Find(H, k);
//    printf("所查元素下标：");
//    if (H->Cells[i].Info == Legitimate)printf("%d", i);
//    else
//        printf("not find\n");
//    return 0;
//}
