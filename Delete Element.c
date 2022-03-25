main()
{
  int arr[20];
  int n;
  int j;
   int num;
    int del;
   int l=0;
   int ar[20];
  printf("Enter your number:-");
  scanf("%d",&n);
  for(j=0;j<=n;j++)
  {
  	scanf("%d",&arr[j]);
  }
  printf("Enter your number:-");
  scanf("%d",&num);
  for(j=0;j<=n;j++)
  {
  	if(arr[j]==num)
  	{
  		del=arr[j];
	}
	else
	{
	 ar[l]=arr[j];
	 l++;	
	}
  }
  for(j=0;j<l;j++)
  {
  	 printf("%d ",ar[j]);
  }
  printf("\nThis number has been deleted:-%d ",del);
}
