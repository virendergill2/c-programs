#include<stdio.h>
int number (int n);

 int number (int n){
 if (n>100)
    return;
 else
      printf("%d",n);
     return number(n+1);

    }

 int main(){
  int num;
  printf("enter the num");
  scanf("%d",&num);
  printf("%d",num);
  return 0;

 }


