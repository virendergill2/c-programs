void main()
{
    int a[10],i,j,k,temp;
    printf("enter the unsorted array");

    for(i=0;i<10;i++)
    {
     scanf("%d",&a[i]);
    }

    for(j=0;j<10-1-i;j++)
    {

     if(a[j]>a[j+1])
     {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;

    }
    printf("\n itretion %d",i+1);
    for(k=0;k<10;k++)
    {
    printf("%d",a[k]);

    }
    }
      printf("the sorted items in array");

    for(i=0;i<10;i++)
    {
     scanf("%d",&a[i]);
    }
    getch();
}
