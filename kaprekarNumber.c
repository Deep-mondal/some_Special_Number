#include <stdio.h>
#include <math.h>
#include <conio.h>

int count(int x)
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
int kaprekarNumber(int k)
{
    int s = k * k;
    int c = count(s);
    int i, a, rem, q, sum;
    int m = s;
    for (i = 1; i <= c; i++)
    {
        a = pow(10, i);
        rem = m % a;
        q = m / a;
        sum = rem + q;
        if (sum == k)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int x;
    printf("\nEnter a number");
    scanf("%d", &x);
    int ch = kaprekarNumber(x);
    (ch != 0) ? printf("\nIt is a Kaprekar Number") : printf("\nIt is not a Kaprekar Number");
    return 0;
}
