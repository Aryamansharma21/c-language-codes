#include<stdio.h>
int main(){
    int score[4]={80,90,92,62};
int sum=0;
int i=0;
for (i=0;i<4;i++)
{
    sum+=score[i];  

}
printf("Sum of score:%d",sum);
score[1]= 90;
printf("New score:%d\n", score[1]);
return 0;

}