#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][3],b[2][3],c[2][3]; int i,j;

for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("\n Enter values\n");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("\nEnter the values\n");
scanf("%d",&b[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
c[i][j]=a[i][j]+b[i][j];
}
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("\n c[%d][%d] is %d",i,j,c[i][j]);
}
}
}
getch();
}

