#include <stdio.h>
int triangularNumber(int x)
{
    int m = x / 2;
    int sum = 0;
    int i = 0;
    while (i <= m)
    {
        sum = sum + i;
        if (sum == x)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
int main()
{
    int t, x;
    printf("\nEnter the number");
    scanf("%d", &x);
    t = triangularNumber(x);
    (t != 0) ? printf("\nIt is a Triangular Number") : printf("\nIt is not a triangular Number");
    return 0;
}