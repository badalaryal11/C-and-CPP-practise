#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][3]; int i,j;
	for (i=0;i<2;i++)
	for (j=0;j<3;j++)
   {
   	printf("\nEnter the matrix:\t");
      scanf("%d",&a[i][j]);
   }
   for (i=0;i<2;i++)
   for (j=0;j<3;j++)
   {
   	printf("\n a[%d][%d] is %d",i,j,a[i][j]);
   }
   getch();
   }

