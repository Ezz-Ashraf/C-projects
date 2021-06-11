#include "list.h"
#include<stdio.h>
#include<stdlib.h>
void CreateList(List *pl)
{
*pl=NULL;
}
int ListEmpty(List *pl)
{
return *pl==NULL;
}
int ListFull(List *pl)
{
return 0;
}
/*
int ListSize(List *pl)
{
    return (*pl)->s;
}*/
void DestroyList(List *pl)
{
while(*pl)
{
    Node *q=*pl;
    *pl=(*pl)->next;
    free(q);

}
}
void RetrieveList(int pos,listEntry *pe,List *pl)
{
int i;
Node *q,*tmp;
if(pos==0)
{
    *pe=(*pl)->entry;
    tmp=(*pl);
    (*pl)=(*pl)->next;
    free(tmp);
}
else
{
    for(i=0,q=*pl;i<pos-1;i++)
        q=q->next;
    tmp=q->next;
    q->next=tmp->next;
    *pe=tmp->entry;
    free(tmp);
}
}
void InsertList(int pos,listEntry e,List *pl)
{
Node *p=(Node *)malloc(sizeof(Node));
   p->entry=e;
if(pos==0)
{
    p->next=*pl;
    *pl=p;
}
else

    {

    Node *q;
    int i;
for(i=0,q=*pl;i<pos-1;i++)
    q=q->next;
p->next=q->next;
q->next=p;
    }

printf("Done\n");
}
