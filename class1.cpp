#include<iostream.h>
#include<conio.h>
class test
{
	private:
   int x,y,z;
   public:
   void add()
   {
   	cout<<"ENTER THE VALUE OF X AND Y";
      cin>>x>>y;
      z=x+y;
      cout<<"SUM IS"<<z;
   }
   };
   void main()
   {
   test t;
   cout<<"THIS IS FOR TEST"<<endl;
   t.add();
   getch();

   }
