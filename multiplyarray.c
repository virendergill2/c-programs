void main()
{
    int a[5],b[5],c[5],i;

    printf("enter the elemetns in array");

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
    printf("the multiply of array");
    for(i=0;i<5;i++)
    {
    c[i]=a[i]*b[i];
     printf("%d \t",c[i]);
    }


    getch();

}
