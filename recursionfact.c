#include<stdio.h>
int factorail(int n);

   int factorail(int n){
    if(n==0)
       return 1;
     else
       return n * factorail(n-1);

   }
int main(){
    int num;
    printf("enter the positiver integer");
    scanf("%d",&num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}



