#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],b[5],c[10];
  int n,m,i,k;
  clrscr();
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter the elements of first array:\n");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   c[i]=a[i];
  }
   k=i;
   printf("Enter the size of the second array:");
   scanf("%d",&m);
   printf("Enter the elements of the second araay:\n");
   for(i=0;i<m;i++)
   {
    scanf("%d",&b[i]);
    c[k]=b[i];
    k++;
   }
   printf("Enter in the merged array:\n");
   for(i=0;i<n+m;i++)
   {
     printf("%d\n",c[i]);
   }
   getch();
   }
