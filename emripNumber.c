#include <stdio.h>
int reverse(int x)
{
    int rem, ans = 0;
    while (x != 0)
    {
        rem = x % 10;
        ans = (ans * 10) + rem;
        x = x / 10;
    }
    return ans;
}
int prime(int x)
{
    int i = 2;
    int m = x / 2;
    while (i <= m)
    {
        if (x % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int erimpNumber(int x)
{
    int a, b, c;
    a = prime(x);
    if (a != 0)
    {
        b = reverse(x);
        c = prime(b);
        if (c != 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int x, t;
    printf("\nEnter the Number:");
    scanf("%d", &x);
    t = erimpNumber(x);
    (t != 0) ? printf("\nIt is a Erimp NUmber") : printf("\nIt is not a Erimp Number");
}