#include<stdio.h>
int main()
{
    int n,i,fact;
    fact=1;

    printf("enter the number to find factorail");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

     fact=fact*i;


    }
     printf("the factorial number is %d",fact);
   getch();
}
