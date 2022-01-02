#include<stdio.h>
#include<conio.h>
void main()
{
int x[10]; int i;
for(i=0;i<3;i++)
{
printf("Enter the value of x");
scanf("%d",&x[i]);
for(i=0;i<3;i++)
{
printf("\n x[%d] is %d",x[i]);
}
getch();
}

