// #include<stdio.h>
// int main(){
// char n;
//  printf("Enter a number");
// scanf("%c",&n);
//  printf("your name is %s",n);

//}

#include <stdio.h>
int main()
{
  char n[20];
  printf("Enter your name: ");
  fgets(n, sizeof(n), stdin);
  puts(n);
}
