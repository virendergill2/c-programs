void main()
{
    int a[5],i;
    printf("enter the elements in array");

    for(i=4;i>=0;i--)
    {
    printf("\nenter the elements in array",(i+1));
    scanf("%d",&a[i]);
    }
    for(i=4;i>=0;i--)
    {
     printf("\t %d",a[i]);
    }
    getch();


}
