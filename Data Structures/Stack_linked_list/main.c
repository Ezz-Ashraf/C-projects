#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main()
{
   /*   printf("Hello world!\n");
    Stack s,*ps;
    ps =&s;
     StackEntry e;
     StackEntry item1,item2,item3,item4;
     //item1=25;
    item2=85;
    item3=102;
    item4=10;
    InitializeStack(&s);
    int n;
    printf("Enter the size of the stack\n");
    scanf("%i",&n);
    while(n!=0)
    {
        printf("Enter the item\n");
       scanf("%i",&item1);
        PushItem(item1,&s);
        //PushItem(item2,&s);
       //PushItem(item3,&s);
       // PushItem(item4,&s);
      /*  PushItem(18,&s);

        PushItem(8,&s);
        PushItem(33,&s);
        PushItem(12,&s)  ;
        PushItem(2,&s);
        PushItem(14,&s);
        PushItem(7,&s);
        PushItem(40,&s);
    PushItem(85,&s) ;
    *//*
    n--;
    }
    if(StackFull(&s))
    {
        printf("Sorry sir the stack is full\n");
    }
    PopItems(&e,&s);
    printf("%i\n",e);
  PopItems(&e,&s);
   printf("%i\n",e);

   while(!StackEmpty(&s))
    {
         PopItems(&e,&s);
        printf("Value = %i \n",e);
    }
    if(StackEmpty(&s))
    {
        printf("Stack is empty");
    }
*/

Stack s1,s2,result;
StackEntry e,item1;
InitializeStack(&s1);
InitializeStack(&s2);
InitializeStack(&result);
    int n;
    printf("Enter the size of the stack 1 \n");
    scanf("%i",&n);
    while(n!=0)
    {
        printf("Enter the item\n");
       scanf("%i",&item1);
        PushItem(item1,&s1);
        n--;
    }
  printf("Enter the size of the stack 2\n");
    scanf("%i",&n);
    while(n!=0)
    {
        printf("Enter the item\n");
       scanf("%i",&item1);
        PushItem(item1,&s2);
        n--;
    }
    joinStacks(&s1,&s2,&result);
   while(!StackEmpty(&result))
    {
         PopItems(&e,&result);
        printf("Value = %i \n",e);
    }
    if(StackEmpty(&result))
    {
        printf("Stack is empty");
    }

 StackNode * s5=(StackNode * )malloc(sizeof(StackNode));
 return 0;

}
