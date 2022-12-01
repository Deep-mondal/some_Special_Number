#include <stdio.h>
int fact(int x)
{
    int f = 1, i;
    for (i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}
int petersonNumber(int x)
{
    int i;
    int rem, a, res = 0;
    while (x != 0)
    {
        rem = x % 10;
        a = fact(rem);
        res = res + a;
        x = x / 10;
    }
    return res;
}
int main()
{
    int n, x;
    printf("\nEnter the Number:");
    scanf("%d", &x);
    n = petersonNumber(x);
    if (x == n)
    {
        printf("\nIt is a peterson Number");
    }
    else
    {
        printf("\nIt is a not peterson Number");
    }
    return 0;
}