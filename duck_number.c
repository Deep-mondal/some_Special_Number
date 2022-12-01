#include<stdio.h>
void duck(int x)
{
    int i,rem,ac;
    int flag=0;
    ac=x;
    while(x>0)
    {
        rem=x%10;
        if(rem==0)
        flag++;
        x=x/10;
    }
     if(flag!=0)
    printf("\nIt is a DUCK NUMBER");
    else
    printf("\nIt is not a DUCK NUMBER");
}
int main(int num)
{
   printf("\nEnter a number:");
   scanf("%d",&num);
   duck(num);
   return 0; 
}