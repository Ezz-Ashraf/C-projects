
typedef int StackEntry;
typedef struct stacknode
{
    StackEntry entry;
    struct stacknode *next;
} StackNode;
typedef struct
{
    StackNode *top;
}Stack;

void  InitializeStack(Stack *ps);
void PushItem(StackEntry data,Stack *ps);
int StackFull(Stack *ps);
void PopItems(StackEntry *e,Stack *ps);
int StackEmpty(Stack *ps);
