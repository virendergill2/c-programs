void main()
{
int arr[]={13,20,12,10,15,2,9};
int i,j,temp,min;
/// selection sort algo swap first element with smallest element

	for(i=0;i<7;i++)
	{
	   min=i;
	   for(j=i+1;j<7;j++)
	   {
		if(arr[min]>arr[j])
		{
		   min=j;
		}
	   }
	   temp=arr[i];
	   arr[i]=arr[min];
	   arr[min]=temp;
	}
	for(i=0;i<7;i++)
	{
	 printf("%d  ",arr[i]);
	 }
}
