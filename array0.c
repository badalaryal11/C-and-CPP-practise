#include<stdio.h>
#include<conio.h>
void main()
{
	int marks[11]; int i,j,t;
	for(i=0;i<12;i++)
   {
   	printf("\nEnter the marks:");
      scanf("%d",&marks[i]);
   }
   for(i=0;i<12;i++)
   for(j=i;j<12;j++)
   {
   if (marks[i]>marks[j])
   	{
      t=marks[i];
      marks[i]=marks[j];
      marks[j]=t;
   }
   	}
   for(i=0;i<12;i++)
   {
   	printf("\n%d",marks[i]);
   }
   getch();
   }

