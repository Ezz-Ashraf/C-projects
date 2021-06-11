#include<stdio.h>
#define MAX 10

typedef char Entrytype;
typedef struct queuenode
{
    Entrytype entry;
    struct queuenode *next;
}QueueNode;
typedef struct que
{
   QueueNode * Front;
    QueueNode * Rear;
    int Size;

} Queue;
void CreateQueue(Queue *q);
int QueueEmpty(Queue *q);
int QueueFull(Queue *q);
void EnQueue(Queue *q,Entrytype item);
void DeQueue(Queue *q,Entrytype *item);
void TraverseQueue(Queue* pq, void (*pf)(Entrytype *));
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void joinQueue(Queue *pq1,Queue *pq2,Queue *result);
