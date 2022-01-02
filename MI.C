#include<stdio.h>                                                                                                            #include<stdio.h>

#include<conio.h>
void add(int a,int b);
void main()
{
int a=10,b=20;
add(a,b);
printf("\n a is %d and b is %d in main",a,b);
getch();
}
void add(int a,int b)
{
printf("\n a is %d b is %d in called function",a,b);
a=50, b=60;
printf("\n new a is %d b is %din called function",a,b);
}

