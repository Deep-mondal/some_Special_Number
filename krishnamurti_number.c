#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int fact(int n);
void krishnamurti(int x);
int main()
{
    int num;
    printf("Enter the number to be checked:");
    scanf("%d",&num);
    krishnamurti(num);
    return 0;
}
int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
     fact=fact*i;
    }
    return fact;
}
void krishnamurti(int x)
{
    int i,rem,p,ac,f_rem,count=0,sum=0;
    int b;
    ac=x;
    while(x>0)
    {
        rem=x%10;
        count++;
        x/=10;
    }
    for(i=count;i>0;i--)
    {
        p=pow(10,(count-1));
        f_rem=x/p;
        b=fact(f_rem);
        sum+=b;
        x=x%p;
    }
    if(sum==ac)
    printf("\nIt is a KRISHNAMURTI NUMBER");
    else
    printf("\nIt is not a KRISHNAMURTI NUMBER");
   // printf("%d",b);
}