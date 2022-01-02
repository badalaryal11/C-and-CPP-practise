#include<stdio.h>
#include<conio.h>
void main()
{
int y; int z;
printf("Enter the year joined=\t");
scanf("%d",&y);
z=2014-y;
printf("The years spend here=\t%d",z);
if(z>2&&z<5)
{
printf("\n You will get 5% bonous");
}
else if(z>=5&&z<10)
{
printf("\nYou will get 10% bonus");
}
else if(z>10)
{
printf("\nYou will get 15% bonus");
}
else if(z<2)
{
printf("\nYou are not eligibile to ask for bonus");
}
else
{
printf("\nBal matlab");
}                                                                        
while(y<2014)
{
printf("\nYou are the staff here,so you deserve it!!!");
y=y+1;
}
getch();
}




