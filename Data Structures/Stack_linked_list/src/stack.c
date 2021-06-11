#include "stack.h"
#include<stdlib.h>

void  InitializeStack(Stack *ps)
{
    ps->top=NULL;
}
void PushItem(StackEntry data,Stack *ps)
{
    // malloc returns pointer of type void so you have to cast it
    StackNode *pn=/* casting*/(StackNode*)/*creating size for the pointer in the memory*/(malloc(sizeof(StackNode))); //This is a definition for the new pointer which carries the new element
    pn->entry=data;
    // make the next pointer points to the same point that the top points to first
    pn->next=ps->top;
    //then make the top pointer points to the new one
    ps->top=pn;
    //notice that the pn is the whole new node
}
void PopItems(StackEntry *e,Stack *ps)
{
    //creating temporary pointer
    StackNode *pn;
    //You should know from the push that top is a pointer points to a whole struct which contains entry and next pointer
    *e=ps->top->entry;
    //we want to hold the address of the element which will be popped in order to free it
    pn=ps->top;
    ps->top=ps->top->next;
    free(pn);
}
int StackEmpty(Stack *ps)
{
    return ps->top==NULL;
    //we can write it as return !ps->top; if it is = null 1 will be returned else will be 0
}
int StackFull(Stack *ps)
{
    return 0;
}

void joinStacks(Stack *ps1,Stack * ps2,Stack * result)
{

    while(ps1->top!=NULL || ps2->top!=NULL)
    {
    if(ps1->top!=NULL)
    {
         StackNode *pn=(StackNode *)malloc(sizeof(StackNode));
    pn->entry=ps1->top->entry;

    pn->next=result->top;
    ps1->top=ps1->top->next;
  result->top=pn;
}
    if(ps2->top!=NULL)
    {
         StackNode *pn=(StackNode *)malloc(sizeof(StackNode));
    pn->entry=ps2->top->entry;

    pn->next=result->top;
    ps2->top=ps2->top->next;
  result->top=pn;
}
    }
}
