#include<iostream.h>
#include<conio.h>
class test
{
	public:
   virtual void info()
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
   test t; rest r; nest n;
   p=&t;
   p->info();
   p=&r;
   p->info();
   p= &n;
   p->info();
   getch();
}
