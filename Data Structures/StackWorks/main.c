#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
  /*    printf("Hello world!\n");
    Stack s,*ps;
    ps =&s;
     StackEntry e;
     StackEntry item1,item2,item3,item4;
     //item1=25;
    item2=85;
    item3=102;
    item4=10;
    InitializeStack(&s);
    while(!StackFull(&s))
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
    } */
    Stack s;
    char  c[15];
    InitializeStack(&s);
    printf("Enter char\n");
    gets(c);
    getch();
    PushItem(c,&s);
    int i=0;
    while(!StackFull(&s))
    {

    PushItem(c[i],&s);
    i++;
    }
    char e;
     while(!StackEmpty(&s))
    {
         PopItems(&e,&s);
        printf("%c",e);
    }
      if(StackEmpty(&s))
    {
        printf("\nStack is empty");
    }
    return 0;
}
