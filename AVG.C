#include<conio.h>
#include<stdio.h>
void main()
{
 int a,arr[20],i,next[20],sum=0;
 float avg;
 clrscr();
 printf("Enter your number:-");
 scanf("%d",&a);
 for(i=0;i<=a;i++)
 {
   scanf("%d",&arr[i]);
 }
 for(i=0;i<=a;i++)
 {
    next[i]=arr[i] * arr[i];
    sum=sum+next[i];
 }
 for(i=0;i<=a;i++)
 {
  printf("%d ",next[i]);
 }
  avg=sum/a;
 printf("\nsum:-%d\n%f",sum,avg);
 getch();
}