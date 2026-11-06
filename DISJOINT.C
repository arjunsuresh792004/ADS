#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
 int arr1[30],arr2[30];
 int i,n,a,b,temp,ch;
 clrscr();
 while(1)
 {
   printf("\n1.CREATE");
   printf("\n2.UNION");
   printf("\n3.FIND");
   printf("\n4.EXIT");
   printf("\nEnter choice: ");
   scanf("%d", &ch);
   switch(ch)
   {
     case 1:
	  printf("Enter no. of elements: ");
	  scanf("%d", &n);
	  printf("Enter elements: ");
	  for(i=0;i<n;i++)
	  {
	    scanf("%d", &arr1[i]);
	    arr2[i]=i;
	  }
	  break;
     case 2:
	  printf("Enter two indices for UNION: ");
	  scanf("%d%d", &a, &b);
	  temp = arr2[a];
	  for(i=0;i<n;i++)
	  {
	     if(arr2[i]==temp)
		arr2[i]= arr2[b];
	  }
	  printf("\nElements and their sets:\n");
	  for(i=0;i<n;i++)
	      printf("%d\t%d\n", arr1[i],arr2[i]);
	  break;
     case 3:
	   printf("Enter two indices for FIND: ");
	   scanf("%d%d", &a,&b);
	   if(arr2[a]==arr2[b])
	      printf("Elements are connected.\n");
	   else
	      printf("Elements are not connected.\n");
	  break;
     case 4:
	   exit(0);
      default:
      printf("Wrong choice.Try again.\n");
     }
   }
 }




