#include<stdio.h>
#include<conio.h>
void add(inta, intb)
void main()
{
int a=50 b=60;
add(&a,&b);
printf("\n a is %d and b is %d in main",a,b);
getch();
}
void check(int*a, int*b)
{
printf("\n a is %d and b is %d",*a,*b);
*a=100 *b=200;
printf("\n new a is %d b is %d",*a,*b);
}


