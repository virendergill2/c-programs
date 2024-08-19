void main()
{
    int a[5],b[5],c[5],i;
    printf("ente the elements in array");

    for(i=0;i<5;i++)
    {
    printf("\nenter the elemets in array",(i+1));
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
    printf("\nenter the elemets in array",(i+1));
    scanf("%d",&b[i]);
    }

    for(i=0;i<5;i++)
    {

    c[i]=a[i]+b[i];
    }
      printf("the sum of two array");

     for(i=0;i<5;i++)
     {
       printf("%d \t " ,c[i]);


     }


    getch();
}
