#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int main()
{
    printf("Hello world!\n");
    List l1;
   int i;
   int n;
    int pos=0;
       List l2;
   int j=0;
   int k;
    listEntry item;
    CreateList(&l1);
    CreateList(&l2);
    printf("Enter the number of values you will enter in l1\n");
    scanf("%i",&n);

  for(i=0;i<n;i++)
    {
        printf("Enter an item\n");
        scanf("%s",&item);
        InsertList(i,item,&l1);
    }


//  int siz=ListSize(&l1);
//  printf("%i \n",siz);
/*i=n;
    while(i>=0)
    {
        RetrieveList(i,&item,&l1);
        printf("item = %c\n",item);
        i--;
    }
 */
  //default operations
  /*
  printf("Enter a position to delete\n");
        scanf("%i",&pos);
        RetrieveList(pos,&item,&l1);
    printf("item = %c \n",item);
    printf("Enter a position to delete again\n");
    scanf("%i",&pos);
    RetrieveList(pos,&item,&l1);
    printf("item = %c\n",item);
        i=0;
*/
       /* while(!ListEmpty(&l))
        {
           RetrieveList(i,&item,&l);
        printf("item = %i\n",item);
        i++;
        }*/
//        siz=ListSize(&l);
//          printf("%i",siz);
printf("About list 2\n");
     //printf("Enter the number of values you will enter in l2\n");
   // scanf("%i",&k);
    getchar();
    for(j=0;j<7;j++)
    {
        printf("Enter an item\n");
        scanf("%c",&item);
        getchar();
        InsertList(j,item,&l2);
    }
   //  RetrieveList(pos,&item,&l2);
    //printf("item = %c\n",item);
// concatenation operations
    while(!(ListEmpty(&l1)) || !(ListEmpty(&l2)))
    {
        if(!ListEmpty(&l1))
        {
       RetrieveList(pos,&item,&l1);
      printf("item = %c\n",item);
        }
      if  (!ListEmpty(&l2))
        {

     RetrieveList(pos,&item,&l2);
      printf("item = %c\n",item);
    }
    }

    return 0;
}
