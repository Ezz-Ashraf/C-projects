#include "stack.h"

void InitializeStack(Stack *ps)
{
   /* ps->top=0;
    ps->entry[ps->top++]=0;
    */
    ps->top=-1;
 // ps->top=-1;
}
void PushItem(StackEntry data,Stack *ps)
{

ps->entry[++ps->top] =data;

}
int StackFull(Stack *ps)
{
    if (ps->top==MAX-1)
 return 1;
 else
    return 0;
}
void PopItems(StackEntry *e,Stack *ps)
{
    *e=ps->entry[ps->top--];

}
int StackEmpty(Stack *ps)
{
    if (ps->top==-1)
    return 1;
    else
        return 0;
}
