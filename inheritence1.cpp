#include<iostream.h>
#include<conio.h>
class test
{
	public:
   void check ()
   {
   	cout<<"In the class test"<<endl;
   }
};
class rest:public test
{
	public:
   void check1()
   {
   cout<<"In the rest"<<endl;
   }
};
class nest:public test,public rest
{
	public:
   void info()
   {
   cout<<"Its multiple inheritance"<<endl;
   }
};
void main()
{
	test t;
   t.check();
   rest r;
   r.check();
   r.check1();
   nest n;
   n.info();
   n.check1();
   n.check();
   getch();
}


