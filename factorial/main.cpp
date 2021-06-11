#include <stdio.h>

int factorial(unsigned int n){
if(n <= 1)
{
return 1;
}
else
{
return n * factorial(n -1);
}
}

int main()
{
    int n=5;
    printf("%i",factorial(n));
    return 0;
}
