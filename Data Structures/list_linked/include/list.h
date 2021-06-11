
typedef char listEntry;
typedef struct node
{
    listEntry entry;
   struct node * next;
   int s;
}Node;
typedef Node * List;
void CreateList(List *pl);
int ListEmpty(List *pl);
int ListFull(List *pl);
int ListSize(List *pl);
void DestroyList(List *pl);
void RetrieveList(int pos,listEntry *pe,List *pl);
void InsertList(int pos,listEntry e,List *pl);
