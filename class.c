#include <stdio.h>
int main() 
{
   int n,c;
     printf("Enter a number: ");
     scanf("%d", &n);
     c=0;
    while (n>0) 
    {
        n=n/10;
        c++;
    }
    printf("Total number of digits: %d ",c);
    return 0:
}
 