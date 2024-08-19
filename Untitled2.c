void main()
{
  int num[5],i,sum=0;
  float avrg;

  printf("enter the elements in array");
  scanf("%d",&num);


   for(i=0;i<5;i++)
   {

   printf("enter the elements in array",(i+1));
   scanf("%d",&num[i]);

   }

    for(i=0;i<5;i++){


    sum=sum+num[i];


    }

     printf("the sum of array %d",sum);


  getch();
}
