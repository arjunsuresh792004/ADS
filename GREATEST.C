#include<stdio.h>
int main()
{
  int a[10],n,i,max;
  printf("Enter the limit of array (less than 11)");
  scanf("%d",&n);
  printf("Enter %d numbers:\n",n);
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]>max)
    {
      max=a[i];
   }
  }
  printf("The greatest value=%d\n",max);
  return 0;
  }
