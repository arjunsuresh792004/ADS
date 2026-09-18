#include<stdio.h>
void main()
{
int a[10],n,i,min;
printf("Enter the limit of array less than 11:");
scanf("%d",&n);
printf("Enter %d numbers:\n",n);
for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  min=a[0];
  for(i=1;i<n;i++)
   {
    if(a[i]<min)
    {
    min=a[i];
    }
   }
   printf("The smallest number %d\n",min);
   getch();
   }