#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include<string>
#include<conio.h>
struct books
{ char name[100];
 int id;
 int quantity;
} ;
int insbook(books[],int s);
books delbook(books [],int s);
int srchbook_id(books library [],int key,int s);int srchbook_name(books [],int low,char [],int high);
void sortbook ();void unsortbook();
FILE *fPtr;
books namesort[100];
int n;
char c;
   int i=0;
   int j=0;
   struct books library[50] ;
int s;
int main()
{
printf("welcome to our library\n");
   do{
   if ( (fPtr = fopen ( "books.txt","r"))==NULL)
    printf("file couldn't be found");
   else
   {
       while (!feof(fPtr))
       {
        fscanf( fPtr,"%[^.]%*c\t%d\t%d\n",library[i].name,&library[i].id , &library[i].quantity );
       s=i+1;
       i++;

       }
   }
    fclose(fPtr);
    i=0;
    printf("enter :\n1 to insert book \n2 to remove book \n3 to search by id \n4 to search by name \n5 to view books sorted \n6 to view unsorted\n");
scanf("%i",&n);
    switch (n)
    {
case 1:
    s++;
    insbook(library,s);
    break;
case 2:
    s--;
   delbook(library,s);
   break;
case 3:
    int key,pos;
    printf("enter the id you want to search\n");
    scanf("%i",&key);
     pos =srchbook_id(library,key,s);
     if (pos==-1)
      {
          printf("id not found\n");
      }
     else{
     printf("it 's \n%s\t%i\t%i\n",library[pos].name,library[pos].id,library[pos].quantity);
     }
break;
case 4:{
   i=0;
    if ( (fPtr = fopen ( "books.txt","r"))==NULL)
    printf("file couldn't be found");
   else
   {
       while (!feof(fPtr))
       {
        fscanf( fPtr,"%[^.]%*c\t%d\t%d\n",library[i].name,&library[i].id , &library[i].quantity );
       s=i+1;
       i++;
       }
           fclose(fPtr);
   }
i++;
books temp[50];
    for(i = 0; i < s; i++)
    {for (j =i+1; j <s ; j++){
        int result = strcmp(library[i].name,library[j].name);
        if (result >0)
        {
            strcpy(temp[i].name,library[i].name);
            strcpy(library[i].name,library[j].name);
            strcpy(library[j].name,temp[i].name);
        }
    }
    }
char bookname[50];
     printf("enter the name of the book\n");
   getchar();
   gets(bookname);

    int result;
    result = srchbook_name(library,0,bookname,s-1);

    if(result!= -1){
             printf("it 's \n%s\t%i\t%i\n",library[result].name,library[result].id,library[result].quantity);
    }
        else

        {
        printf("book not exist\n");
    }

    }
break;
case 5:
    sortbook();

break;
case 6:
unsortbook();
break;
}
printf("\nif you want to continue enter Y \n");

scanf(" %c", &c);
printf("\nyour answer is %c\n", c);
}
while( c=='y' || c=='Y');
printf("thank you");
   return 0;
}

int insbook(books library[],int s)
{   i=0;
    if ( (fPtr = fopen ( "books.txt","r"))==NULL)
    printf("file couldn't be found");
   else
   {
       while (!feof(fPtr))
       {
        fscanf( fPtr,"%[^.]%*c\t%d\t%d\n",library[i].name,&library[i].id , &library[i].quantity );
       i++;

       }
       fclose(fPtr);
   }
 if ( (fPtr = fopen ( "books.txt","a"))==NULL)
    printf("file couldn't be found");
   else
   {
char str[30];
char ch;
int j =s-1;
        printf("\nEnter details of the book \n");
        printf("Enter name:\n");
        getchar();
        gets(library[j].name);

        printf("Enter id:\n");
        scanf("%i",&library[j].id);

        printf("Enter quantity:\n");
        scanf("%i", &library[j].quantity);

        fprintf(fPtr,"%s.\t%i\t%i\n",library[j].name,library[j].id , library[j].quantity);
   }

    fclose(fPtr);
}

books delbook(books library[],int s)
{
     if ( (fPtr = fopen ( "books.txt","r"))==NULL)
    printf("file couldn't be found");
   else
   {
       while (!feof(fPtr))
       {
        fscanf( fPtr,"%[^.]%*c\t%d\t%d\n",library[i].name,&library[i].id , &library[i].quantity );
        s=i+1;
       i++;

       }
       fclose(fPtr);
   }
 int key,pos;
    printf("enter the id of the book you want to remove\n");
    scanf("%i",&key);
     pos =srchbook_id(library,key,s);
     if (pos==-1)
      {
          printf("id not found\n");
      }
     else{
               if ( (fPtr = fopen ( "books.txt","w"))==NULL)
    printf("file couldn't be found");
   else
   {
        s-=1;
     for(i=pos;i<s;i++){
        strcpy(library[i].name,library[i+1].name);
     library[i].id=library[i+1].id;
     library[i].quantity=library[i+1].quantity;
     }
     for(j=0;j<s;j++)
     {


    fprintf(fPtr,"%s.\t%d\t%d\n",library[j].name,library[j].id,library[j].quantity);
     }
     fclose(fPtr);
}
    }
}
int srchbook_id(books library [],int key,int s)
{ i=0;
    if ( (fPtr = fopen ( "books.txt","r"))==NULL)
    printf("file couldn't be found");
   else
   {
       while (!feof(fPtr))
       {
        fscanf( fPtr,"%[^.]%*c\t%d\t%d\n",library[i].name,&library[i].id , &library[i].quantity );
       i++;

       }
       fclose(fPtr);
   }
 if (s == 0) return -1;
 else if (library[s- 1].id == key) return s- 1;
 else return srchbook_id(library, key, s- 1);
}
 int srchbook_name(books library[],int low,char bookname[],int high)

 {
      if (low > high)
    return -1;
     int m =((low+high)/2);
   if (strcmp(bookname,library[m].name)==0 )
   {

        return m;
   }
else   if (strcmp(bookname,library[m].name) == -1)
   {
       return srchbook_name( library, low, bookname, m-1);
   }
   else if(strcmp(bookname,library[m].name ) ==1)
  {
    return  srchbook_name ( library , m+1, bookname, high);
  }
 }

void sortbook()
{  i=0;
    if ( (fPtr = fopen ( "books.txt","r"))==NULL)
    printf("file couldn't be found");
   else
   {
       while (!feof(fPtr))
       {
        fscanf( fPtr,"%[^.]%*c\t%d\t%d\n",library[i].name,&library[i].id , &library[i].quantity );
       s=i+1;
       i++;
       }
           fclose(fPtr);
   }
i++;
books temp[50];
int t;
    for(i = 0; i < s; i++)
    {for (j =i+1; j < s ; j++){
        int result = strcmp(library[i].name,library[j].name);
        if (result >0)
        {
            strcpy(temp[i].name,library[i].name);
            strcpy(library[i].name,library[j].name);
            strcpy(library[j].name,temp[i].name);
            t =library[i].id;
            library[i].id=library[j].id;
            library[j].id=t;
            t =library[i].quantity;
            library[i].quantity=library[j].quantity;
            library[j].quantity=t;
        }
    }
    }
    for(i=0;i<s;i++)
{

    printf("%s\t%d\t%d\n",library[i].name,library[i].id,library[i].quantity);

}
 }
void unsortbook()
{ int i=0;
if ( (fPtr = fopen ( "books.txt","r"))==NULL)
    printf("file couldn't be found");
   else
   {
       while (!feof(fPtr))
       {
        fscanf( fPtr,"%[^.]%*c\t%d\t%d\n",library[i].name,&library[i].id , &library[i].quantity );
       printf("%s\t%d\t%d\n",library[i].name,library[i].id , library[i].quantity );
       i++;
       }
   }
    fclose(fPtr);i++;
}
