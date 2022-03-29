#include<stdio.h>
#include<conio.h>
#include<string.h>
int s,i;
struct Stu
{
  int Roll_no;
  char Name[20];
  char clas[20];
  char phone[20];
  char sub[20];
}b;
struct Stu insert()
{

   printf("Enter your Roll no:-");
   scanf("%d",&b.Roll_no);
   fflush(stdin);
   printf("Enter your Name:-");
   gets(b.Name);
   printf("Enter your class:-");
   gets(b.clas);
   printf("Enter your Phone Number:-");
   gets(b.phone);
   printf("Enter your number:-");
   scanf("%d",&s);
   for(i=0;i<=s;i++)
   {
    scanf("%s",&b.sub[i]);
   }
  // return b;
}
struct Stu Display()
{

 printf("\nRoll No:- %d",b.Roll_no);
 printf("\nName:- %s",b.Name);
 printf("\nClass:- %s",b.clas);
 printf("\nPhone:- %s",b.phone);

 for(i=0;i<=s;i++)
 {
  printf("\n%c",b.sub[i]);
 }

}



void main()
{
 struct Stu b1;
    clrscr();
    b1=insert();
    b1=Display();

    getch();
}