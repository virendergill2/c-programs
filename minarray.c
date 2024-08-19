void main()
{
    int a[5],i,min;
    printf("enter the elements in array");

    for(i=0;i<5;i++)
    {
    printf("\nenter the elements in aaray",(i+1));
    scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<5;i++)

    {
    if(min>a[i])
    {

    min=a[i];
    }
    }

    printf("min value in the array %d",min);
    getch();



}
