#include<stdio.h>
#include<conio.h>
void area();
void main()
{
printf("hello");
area();
printf("there");
area();
area();
getch();
}
void area()
{
int a,l,b;
printf("\n enter l and b");
scanf("%d%d",&l,&b);
a=l*b;
printf("\n area is %d",a);
}
