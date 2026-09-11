#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
  int a=0,b=0,sum=0;
  clrscr();
  printf("Enter two numbers:");
  scanf("%d%d",&a,&b);
  sum=add(a,b);
  printf("The sum is %d",sum);
  getch();
  }
  int add(int x,int y)
  {
   return(x+y);
  }