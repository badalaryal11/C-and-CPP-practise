#include<stdio.h>
#include<conio.h>
void main()
{
int y; int a;
printf("Enter the year you have joined here:\t");
scanf("%d",&y);
a=2014-y;
printf("The no of years you have worked here:\t%d",a);
if(a>=5&&a<10)
{
printf("\nYou will get 5% bonous for\"New year\"");
}
else if(a>=10&&a<=15)
{
printf("\nY0u will get 10% bonous for\"New year\"");
}
else if(a>15)
{
printf("\nYou are older than organisation so,no bonous for u and u do not belong here");
}
else if (a<5&& a>=0)
{
printf("Bonous is not for u");
}
else
{
printf("\n Bal matlab");
}

do
{
printf("\n Enjoy the bonous :)");
y=y+1;
}
while(y<2014&&y>1998);
getch();
}









