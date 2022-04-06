#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,a[20],num;
   clrscr();
   printf("Enter your number:-");
   scanf("%d",&n);
   printf("Enter %d number:-",n);
   for(i=0;i<n;i++)
   {
    lable:
    scanf("%d",&num);
     if(i==num)
     {
	a[i]=num;
     }
     else
     {
      printf("ss:-%d",i);
      goto lable;
     }
   }
   for(i=0;i<n;i++)
   {
   printf("%d ",a[i]);
   }
   getch();
}