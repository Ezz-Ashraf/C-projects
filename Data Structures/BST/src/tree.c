#include "tree.h"
#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
void printTree()
{
    printf("I am printing from the tree");
}
void CreateTree(TreeType *pt)
{
   *pt=NULL;
}
int EmptyTree(TreeType *pt)
{
  return(!(*pt));
}
int FullTree(TreeType *pt)
{
  return 0;
}
void In_order_Trav(TreeType *pt ,void (*pvisit)(EntryType ))
{
if(*pt)
{
    In_order_Trav(&((*pt)->left),(*pvisit));
    pvisit((*pt)->info);
    In_order_Trav(&((*pt)->right),(*pvisit));
}
}
void Pre_order_Trav(TreeType *pt ,void (*pvisit)(EntryType))
{
    if(*pt)
    {
          pvisit(&(*pt)->info);
   In_order_Trav(&((*pt)->left),(pvisit));
    In_order_Trav(&((*pt)->right),(pvisit));
}
}
void Post_order_Trav(TreeType *pt ,void (*pvisit)(EntryType))
{
  if(*pt)
    {
   In_order_Trav(&((*pt)->left),(&pvisit));
    In_order_Trav(&((*pt)->right),(&pvisit));
    pvisit(&(*pt)->info);
}
}
int TreeSize(TreeType *pt)
{
if(!(*pt))
{
    return 0;
}
return (1+TreeSize((*pt)->left)+TreeSize((*pt)->right));
}
void Ite_In_order_Trav(TreeType *pt ,void (*pvisit)(EntryType))
{
Stack s;
NodeType *q=(*pt);
do
{
    while(q)
    {
        PushItem(q,&s);
        q=q->left;
    }
    PopItems(&q,&s);
     pvisit(&q->info);
     q=q->right;
}while (!StackEmpty(&s) || (q));
}
void Display(EntryType *e)
{

    printf("Hello e=%i \n",e);
}
int TreeDepth(TreeType *pt)
{if(!(*pt))
return 0;
int a=1+((*pt)->left);
int b=1+((*pt)->right);
// or return 1+a and 1+b without adding in initialization
return (a>b? a:b);
}
void ClearTree(TreeType *pt)
{
if(*pt)
{
    ClearTree(&(*pt)->left);
       ClearTree(&(*pt)->right);
}
*pt=NULL;
free(*pt);
}
void Insert_tree(TreeType *pt,EntryType e)
{
NodeType *p=(NodeType *)malloc(sizeof(NodeType));
    p->info=e;
    p->left=NULL;
    p->right=NULL;
    if(!(*pt))
        *pt=p;
    else {
    NodeType *cur=*pt;
    NodeType * prev= NULL;
    while(cur)
    {
        prev = cur;
        if(e<cur->info)
            cur=cur->left;
            else
            cur =cur->right;
    }
    if(e<prev->info)
        prev->left=p;
        else
        prev->right=p;
    }
    printf("Done \n");
}
int DeleteItemTree(TreeType *pt,EntryType e)
{
    int found=0;
    NodeType *p=*pt;
    NodeType *r=NULL;
    while(p && !(found=(e==p->info)))
    {
        r=p;
        if(e<p->info)
            p=p->left;
    else
        p=p->right;

    }

    if (found)
    {
        if(!r)
            DeleteNode(pt);
        else if(e<r->info)
        DeleteNode(&r->left);
        else
            DeleteNode(&r->right);
    }

    return found;
}
void DeleteNode(TreeType *pt)
{
    NodeType *p=*pt;
    if(!p->right)
        *pt=p->left;
  if(!p->left)
        *pt=p->right;
        else
            {
            p=p->left;
        NodeType *r=NULL;
        while(p->right)
        {
            r=p;
            p=p->right;
        }
        (*pt)->info=p->info;
        if(r)
            r->right=p->left;
        else
            (*pt)->right=p->left;
            }
free(p);
}
