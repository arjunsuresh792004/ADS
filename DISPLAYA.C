#include<stdio.h>
#include<conio.h>
int main()
{
 int a[5];
 int i;
 clrscr();
 printf("Enter 5 integer numbers:\n");
 for(i=0;i<=4;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("\nThe  entered array elements are:\n");
 for(i=0;i<=4;i++)
 {
  printf("%d",a[i]);
 }
 getch();
 return 0;
 }