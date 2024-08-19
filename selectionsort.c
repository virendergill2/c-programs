void main()
{
    int a[]={4,8,12,10,9,15,3};
    int i,j,temp,min;

    for(i=0;i<7;i++)
    {
     min=i;
     for(j=i+1;j<7;j++)
      {
       if(a[min]>a[j])
        {
        min=j;

        }

      }
       temp=a[i];
       a[i]=a[min];
       a[min]=temp;
    }
     for(i=0;i<7;i++)
       {
        printf("%d  ",a[i]);
       }
    getch();

}
