#include "queue.h"

void CreateQueue(Queue *pq)
{
    pq->Front=0;
    pq->Rear=MAX-1;
    pq->Size=0;
}
int QueueEmpty(Queue *pq)
{
    return (pq->Size==0);
}
int QueueFull(Queue *pq)
{
    return (pq->Size==MAX);
}
void EnQueue(Queue *pq,Entrytype item)
{
    pq->Rear=(pq->Rear+1)%MAX;
    pq->entry[pq->Rear]=item;
    pq->Size++;
}
void DeQueue(Queue *pq,Entrytype *item)
{
    *item =pq->entry[pq->Front];
    pq->Front=(pq->Front+1)%MAX;
    pq->Size--;
}
void TraverseQueue(Queue *pq,void(*pf)(Entrytype *))
{
    int i, siz;
for(i=pq->Front, siz=0; siz<pq->Size; siz++){
(*pf)(&pq->entry[i]);
i=(i+1)%MAX;
}
}
