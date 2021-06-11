#include<stdio.h>
#define MAX 10

typedef char Entrytype;
typedef struct que
{
    int Front;
    int Rear;
    int Size;
    Entrytype entry[MAX];
} Queue;
void CreateQueue(Queue *q);
int QueueEmpty(Queue *q);
int QueueFull(Queue *q);
void EnQueue(Queue *q,Entrytype item);
void DeQueue(Queue *q,Entrytype *item);
void TraverseQueue(Queue* pq, void (*pf)(Entrytype *));
