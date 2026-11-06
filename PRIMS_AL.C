#include<stdio.h>
#include<conio.h>
int a,b,n,i,j,ne =1;
int visited[10]={0};
int min,mincost=0;int cost[10][10];
void main()
{
clrscr();
printf("Enter the no.of nodes : ");
scanf("%d", &n);
printf("Enter the adjacency matrix:\n");
for(i=1;i<=n;i++)
{
   for(j=1;j<=n;j++)
   {
   scanf("%d", &cost[i][j]);
   if(cost[i][j]==0)
      cost[i][j] = 999;
   }
}
visited[1]=1;
while(ne<n)
{
  min=999;
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n;j++)
     {
       if(cost[i][j]< min)
       {
	 if(visited[i]!=0)
	 {
	   min = cost[i][j];
	   a=i;
	   b=j;
	 }
	}
      }
    }
    if(visited[a]==0||visited[b]==0)
    {   printed("\nEdge %d:  (%d,%d) cost: %d",ne++,a,b,min);
    mincost=mincost+min;
    visited[b]=1;
    }
    cost[a][b]=cost[b][a]=999;
  }
  printf("\nMinimum cost= %d",mincost);
  getch();
  }



