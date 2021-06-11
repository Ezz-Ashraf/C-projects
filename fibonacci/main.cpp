#include<stdio.h>
int fib( int n ){
if( ( n == 1 )||( n == 0 ) ){return n;}
else{return( fib( n-2) + fib( n-1) );}
}
int main(){
int x,i= 0;
printf("Enter the number of terms in the series : ");scanf("%d", &x);
printf("\n The Fibonnaci Series : ");
while( i<x ){
printf(" %d", fib( i));
i++;
}
return 0;
}
