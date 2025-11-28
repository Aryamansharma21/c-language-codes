#include <stdio.h>
int sum(int x, int y)
{
    int t;
    t = x + y;
    return t;
}
int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = sum(a, b);
    printf("Sum: %d", c);
    return 0;
}