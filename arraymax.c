void main()
{
    int a[5],i,max;
    printf("enter thr elemrnts in array");

    for(i=0;i<5;i++)
    {

    printf("enter the elemts in array",(i+1));
    scanf("%d",&a[i]);

    }

    max=a[0];
    for(i=0;i<5;i++)
     {

     if(max<a[i])

     {

     max=a[i];
     }
     }

     printf(" the max value of array %d",max);

     getch();



}
