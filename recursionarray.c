#include<stdio.h>
int array (int n);

int array (int n){
 if (n>5)
  return 0;
 else
    return;
}

int main(){
int a[10],b[6],c[5],i;

  for(i=0;i<5;i++)
    {
    printf("\nenter the elements in array",(i+1));
    scanf("%d",&a[i]);

    }

     for(i=0;i<5;i++)
    {
    printf("\nenter the elements in array",(i+1));
    scanf("%d",&b[i]);
    }
    printf("the sum of array");
    for(i=0;i<5;i++)
    {
    c[i]=a[i]+b[i];
     printf("%d \t",c[i]);
    }
      printf("\n");
   return 0;
}

