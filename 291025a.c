#include <stdio.h>
int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
}
int power(int n, int y)
{
    int i, p = 1;
    for (i = 1; i <= y; i++)
    {
        p *= n;
    }
    return p;
}

int main()
{
    int i, x, n;
    float sum = 0.0f;
    int p, q;
    printf("Enter value of x & n:");
    scanf("%d %d", &x, &n);
    for (i = 1; i <= n; i++)
    {
        q = fact(i);
        p = power(x, i);
        sum = sum + (float)p / q;
    }
    printf("%f", sum);
    return 0;
}