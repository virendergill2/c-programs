void main()
{
int a[10],num,i;
    printf("enter the elements in array");
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
        printf("\nthe elements is found");

     break;
     }

     else {
     printf("\nthe elements is not found");

    }
    }
    peintf("\t %d",a[i]);
    getch();
}
