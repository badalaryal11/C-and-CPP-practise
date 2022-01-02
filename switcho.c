#include<stdio.h>
#include<conio.h>
void main()
{
int a; int x,y,z;
printf("enter 1 to add and 2 to subtract");
scanf("%d",&a);
switch(a)
{
case 1:
printf("\n Enter x and y");
scanf("%d%d",&x,&y);
z=x+y;
printf("The sum (z)=%d",z);
case 2:
printf("\n Enter x and y");
scanf("%d%d",&x,&y);
z=x-y;
printf("The diff (z)=%d",z);
}
getch();
}
