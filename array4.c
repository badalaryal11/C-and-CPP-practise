#include<stdio.h>
#include<conio.h>
void main()
{
int x[2][3]; int i,j;
for(i=0;i<2;i++);
for(j=0;j<3;j++);
{
printf("\n Enter the values:\t");
scanf("%d",&x[i][j]);
}
for(i=0;i<2;i++);
for(j=0;j<3;j++);
{
printf("\n x[%d][%d] is %d",i,j,x[i][j]);
}
getch();
}

