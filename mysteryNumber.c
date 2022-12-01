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
int mysteryNumber(int x)
{
    int i = 0, p;
    while (i <= (x / 2))
    {
        p = reverse(i);
        if (i + p == x)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
int main()
{
    int x, t;
    printf("\nEnter the Number:");
    scanf("%d", &x);
    t = mysteryNumber(x);
    (t != 0) ? printf("\nIt is a Mystery Number") : printf("\nIt is not a Mystery Number");
}