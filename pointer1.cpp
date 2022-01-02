#include<iostream.h>
#include<conio.h>
class test
{
	public:
   virtual void info()=0
   {
   cout<<"Hello"<<endl;
   }
   };
   class rest:public test
   {
   	public:
      void info()
      {
      cout<<"there"<<endl;
      }
   };
   class nest:public rest
   {
   	public:
      void info()
      {
      cout<<"c ya"<<endl;
      }
   };
   void main()
   {
   test*p;
   rest r; nest n;
	p=&r;
   p->info();
   p= &n;
   p->info();
   getch();
}