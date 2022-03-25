main()
{
	int arr[20];
    int n;
    	int j;
    	int sum;
    	int avg=0;
	printf("Enter your number:-");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}
	
	printf("Enter your number:-");
	scanf("%d",&sum);
	for(j=0;j<n;j++)
	{
		 if(arr[j]==sum)
		 {
		 	//printf("%d\n",&sum);
		 	printf("Value:-%d\nAdress:-%d",arr[j],&arr[j]);
		 	avg=1;
			 break;	
			 
		 }
		 		
	}
	   if(avg==1)
	   {
	   	printf("\nSuccessful");
	   
	   }
	   else
	   {
	   	printf("No Element");
	   }
}
