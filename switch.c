#include<stdio.h>
#include<conio.h>
void main()
{
int a; int x,y,z;
printf("Enter 1 to add and 2 to sub");
scanf("%d",&a);
switch(a)
{
case 1:
printf("\n enter x and y");
scanf("%d%d",&x,&y);
z=x+y;
printf("The sum (z)=\t%d",z);
break;
case 2:
printf("\n enter x and y");
scanf("%d%d",&x,&y);
z=x-y;
printf("The diff (z)=\t%d",z);
break;
}
getch();
}

