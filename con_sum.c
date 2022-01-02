#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i;
for(i=0;i<10000;i++)
{
printf("\nEnter the value of a and b respectively\t");
scanf("%d%d",&a,&b);
c=a+b;
printf("The sum is%d",c);
}
getch();
}

