#include <stdio.h>
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
int poliDivisable(int x)
{
    int m = x;
    int a = digCount(m);
    int rem;
    int i, p, ans = 0, c = 0, j = 1;
    for (i = a; i >= 1; i++)
    {
        rem = m / i;
        p = p % i;
        ans = (ans * 10) + rem;
        if (ans % j == 0)
        {
            c++;
            j++;
        }
    }
    if (c == a)
    {
        return 1;
    }
}
int main()
{
    int x;
    printf("\nEnter a number:");
    scanf("%d", &x);
    int f = poliDivisable(x);
    if (f != 0)
    {
        printf("\nIt is a polidivisable Number");
    }
    else
    {
        printf("\nIt is a not polidivisable Number");
    }
    return 0;
}