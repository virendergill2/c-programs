void fact(int n);


 int main(){
     int num;
    printf("enter fact num");
    scanf("%d",&num);

    fact(num);
    return 0;


 }

 void fact(int n)
 {
    int i;
    int fact=1;
   for(i=1;i<=n;i++){
    fact=fact*i;


 }
  printf("the factorial number is %d",fact);
 }
