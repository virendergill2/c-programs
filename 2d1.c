void main()
{
    int arr [3][4],i,j;
    printf("enter the elements in array");

    for(i=0;i<3;i++)
    {
     for(j=0;j<4;j++)
     {

     printf("elemets at  arr [%d] [%d]",i,j);
     scanf("%d",&arr [i][j]);

     }
    }

      for(i=0;i<3;i++)
    {
     for(j=0;j<4;j++)
     {

     printf("%d  ",arr [i][j]);
     }
      printf("\n");
     }

     getch();

}
