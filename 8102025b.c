#include<stdio.h>
int main(){
    int i, max, a[10]={0,-1,10,12,-11,8,7,-8,9,20};
    max = a[0];
    for(i=0 , i<10; i++;)
    { if( a[i]>max)
     max= a[i];
     }
     printf("Maximum= %d", max);

}