#include<stdio.h>
#include<conio.h>
void main()
{
int marks[11]; int i,j,t;
for(i=0;i<4;i++)
{
printf("\n Enter Marks:\t");
scanf("%d",&marks[i]);
}
for(i=0;i<4;i++)
{
for(j=0;j<3;j++)
{
if (marks[j]<marks[j+1])
{
t=marks[j];
marks[j]=marks[j+1];
marks[j+1]=t;
}
}
}
for(i=0;i<4;i++)
{
printf("\n Mark is %d",marks[i]);
}
getch();
}