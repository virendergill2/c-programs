void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("enter an elememts in array");

    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
      printf("elemets at a [%d][%d]",i,j);
      scanf("%d",&a[i][j]);
     }

    }
     for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
      printf("elemets at b [%d][%d]",i,j);
      scanf("%d",&b[i][j]);
     }

    }

    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
     c[i][j]=a[i][j]-b[i][j];
     }
     printf("%d ",c[i][j]);
     printf("\n");
    }

    getch();
}
