#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
void print(Entrytype *e)
{
printf("the character is %c \n",*e);
}
int main()
{
    Queue *pq ,q1,q2,result;
//    pq=&q;
    Entrytype item;
    int n=7;
    printf("Hello world!\n");
    CreateQueue(&q1);
    CreateQueue(&q2);
    CreateQueue(&result);
//print("Enter number of elements");

   for(int i=0;i<10;i++)
    {
        //printf("Enter a character\n");
        //scanf(" %c",&item);
item='a';
        EnQueue(&q1,item);
    }
    for(int j=10;j<20;j++)
    {
        //printf("Enter a character\n");
        //scanf(" %c",&item);
item='B';
        EnQueue(&q2,item);
    }
joinQueue(&q1,&q2,&result);
// TraverseQueue(&q1, &print);
 TraverseQueue(&result, &print);
    /*while(!QueueEmpty(&q))
    {
        DeQueue(&q,&item);
        printf("item = %c\n",item);
    }
*/
    return 0;
}
