
main()
{
  int n; 
  int *p;
  int i,sum=0;
  
  printf("Enter your number:-");
  scanf("%d",&n);
  p=(int*)malloc(n*sizeof(int));
  for(i=0;i<=n;i++)
   {
   	scanf("%d",p+i);
	sum=sum+ *(p+i);	
	}
	printf("%d",sum);
  	for(i=0;i<=n;i++)
   {
   	 printf("%d\n",*p+i);
   }
	
}
