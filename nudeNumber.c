#include <stdio.h>
int nudeNumber(int x)
{
    int rem, m, c = 0;
    m = x;
    while (m != 0)
    {
        rem = m % 10;
        if (x % rem == 0)
        {
            c++;
        }
        m = m / 10;
    }
    return c;
}
int digCount(int x)
{
    int m = x, rem, c = 0;
    while (m != 0)
    {
        rem = m % 10;
        c++;
        m = m / 10;
    }
    return c;
}
int main()
{
    int a, b, x;
    printf("\nEnter a number:");
    scanf("%d", &x);
    a = nudeNumber(x);
    b = digCount(x);
    if (a == b)
    {
        printf("\nIt is a Nude number");
    }
    else
    {
        printf("\nIt is not a Nude number");
    }
    return 0;
}