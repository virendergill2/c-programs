void main()
{
int a[10],num,i;
    printf("enter the elements in array");
    printf("enter the num");
    scanf("%d",&num);

    for(i=0;i<10;i++)
    {
    printf("\nenter the elements in array",(i+1));
    scanf("%d",&a[i]);

    }

    for(i=0;i<10;i++)
    {
     if(num==a[i])
     {
        printf("\n %d is found at %d",a[i],i+1);

     break;
     }
     }

     if(i==10)
        {
     printf("\nthe elements is not found");

    }


    getch();
}
