/*#ifndef STACK_H
#define STACK_H
*/
#define MAX 15

typedef char StackEntry;
typedef struct
{
 StackEntry entry[MAX];
  int top ;
} Stack;
void PushItem(StackEntry data,Stack *ps);
int StackFull(Stack *ps);
void PopItems(StackEntry *e,Stack *ps);
void InitializeStack(Stack *ps);
int StackEmpty(Stack *ps);



//#endif // STACK_H
