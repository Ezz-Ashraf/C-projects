#include "queue.h"
#include<stdlib.h>
void CreateQueue(Queue *pq)
{
    pq->Front=NULL;
    pq->Rear=NULL;
    pq->Size=0;
}
int QueueEmpty(Queue *pq)
{
    return !pq->Front;
}
int QueueFull(Queue *pq)
{
    return 0;
}
void EnQueue(Queue *pq,Entrytype item)
{
   QueueNode *pn=(QueueNode *)malloc(sizeof(QueueNode));
   pn->next=NULL;
   pn->entry=item;
   // take care if the queue is empty
   if(!pq->Rear)
   {
   pq->Front=pn;
   pq->Rear=pn;
   }
   else {
   pq->Rear->next=pn;
   pq->Rear=pn;
   pq->Size++;
}
}
void DeQueue(Queue *pq,Entrytype *item)
{
  QueueNode *pn=pq->Front;
  *item=pn->entry;
  pq->Front=pn->next;
  free(pn);
  if(!pq->Front)
    pq->Rear=NULL;
  pq->Size--;

}
void TraverseQueue(Queue *pq,void(*pf)(Entrytype *))
{
for(QueueNode *pn=pq->Front;pn;pn=pn->next){
(*pf)(&pn->entry);

}
}
int QueueSize(Queue *pq)
{
    return pq->Size;
}
void ClearQueue(Queue *pq)
{
    while(pq->Front)
    {
        pq->Rear=pq->Front->next;
        free(pq->Front);
        pq->Front=pq->Rear;
    }
    pq->Size=0;
}
void joinQueue(Queue *pq1,Queue *pq2,Queue *result)
{
  /*  QueueNode *pn=pq1->Front;
while (pn->next)
        pn=pn->next;
    pn->next=pq2->Front;
while (pn->next)
        pn=pn->next;*/
   // pq1->Front->next=pq2->Rear;
      result->Front=pq2->Front;
      pq2->Rear->next=pq1->Front;
    result->Rear=pq1->Rear;
    pq1->Front=NULL;
    pq1->Rear=NULL;
    pq2->Front=NULL;
    pq2->Rear=NULL;

    }
