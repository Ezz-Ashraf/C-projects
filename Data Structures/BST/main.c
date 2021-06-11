#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main()
{
    int n;
    //printf("Hello world!\n");
   // printTree();
   //int e=7;
    TreeType t;
    CreateTree(&t);
    EntryType item;
    printf("Enter number of nodes you want to enter\n");
    scanf("%i",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter item\n");
        scanf("%i",&item);
    Insert_tree(&t,item);
    }
    printf("%d",TreeSize(&t));
    printf("Before deleting :\tIn order\n");
   In_order_Trav(&t,&Display);
   printf("Post order \n");
    Post_order_Trav(&t,&Display);
    printf("In order Iteraitively \n");
    Ite_In_order_Trav(&t,(&Display));
    printf("Pre order\n");
       Pre_order_Trav(&t,(&Display));
       printf("Enter the node you want to delete\n");
       scanf("%i",&item);
       printf("%i",DeleteItemTree(&t,item));
   printf("\nAfter Deleting:\t \tIn order\n");
   In_order_Trav(&t,(&Display));
   printf("Post order \n");
    Post_order_Trav(&t,(&Display));
    printf("In order Iteraitively \n");
    Ite_In_order_Trav(&t,(&Display));
    printf("Pre order\n");
       Pre_order_Trav(&t,(&Display));
    //printf("%i\n",FullTree(&t));
    //Display(&item);
    return 0;
}
