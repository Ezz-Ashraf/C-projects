#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
void print(Entrytype *e)
{
printf("the character is %c \n",*e);
}
int main()
{
    Queue *pq ,q;
    pq=&q;
    Entrytype item;
    printf("Hello world!\n");
    CreateQueue(&q);
    while(!QueueFull(&q))
    {
        printf("Enter a character\n");
       scanf(" %c",&item);

        EnQueue(&q,item);
    }
 TraverseQueue(&q, &print);
    while(!QueueEmpty(&q))
    {
        DeQueue(&q,&item);
        printf("item = %c\n",item);

    }

    return 0;
}
