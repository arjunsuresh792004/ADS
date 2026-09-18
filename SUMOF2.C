#include<stdio.h>
int main()
{
int a[10],n,i,sum=0;
printf("Enter the limit of array less than 11:");
scanf("%d",&n);
printf("Enter %d numbers:\n",n);
for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
  {
  sum=sum+a[i];
  }
  printf("the sum of the digit=%d\n",sum);
  return 0;
  }
