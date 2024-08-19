void main()
{
  int a[10],i,odd_count=0,even_count=0;

  printf("enter the elements in array");
  for(i=0;i<10;i++)
  {
  printf("\nenter the %d element in array ",(i+1));
    scanf("%d",&a[i]);
  }

   for(i=0;i<10;i++)
  {
      if(a[i]%2==0)
      {
      even_count++;
      }
      else
      {
      odd_count++;
      }
  }
  printf("\nThe count of even array element is %d",even_count);
  printf("\nThe count of Odd array elements is %d",odd_count);

  getch();
}
