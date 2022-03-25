#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
// clrscr();
 char arr[]="ABA";
 char next[20];
 int a;
 clrscr();
 strcpy(next,arr);
 strrev(arr);
 a=strcmp(arr,next);
 if(a==0)
 {
  printf("Yes is a same string");
 }
 else
 {
  printf("No is a not same string");
 }
 getch();
}