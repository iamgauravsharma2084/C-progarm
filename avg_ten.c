main()
{
	int arr[20];
    int n;
    	int j;
    	int sum=0;
    	float avg;
	printf("Enter your number:-");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}
	for(j=0;j<n;j++)
	{
		sum=sum+arr[j];
	}

	printf("sum:-%d",sum);
	avg=sum/n;
	printf("\nAvg:-%f",avg);
	
	
	
}
