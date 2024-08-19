void main()
{
  int i,j,k,l,space;

  space=8;
  for(i=1;i<=5;i++)
  {
   for(j=1;j<=i;j++)
    {
      printf("%d",j);
    }
    for(k=1;k<=space;k++)
    {
	printf(" ");
    }
    for(l=i;l>=1;l--)
    {
    printf("%d",l);
    }
    printf("\n");
    space=space-2;
  }
  getch();
}
