#include<iostream.h>
#include<conio.h>
class test
{
	private:
   int x,y,z;
   public:
   test()
   {
   	x=40;
      y=50;
   	cout<<"Constructor active"<<endl;
   }
   void check()
   {
   	cout<<" Hello"<<endl;
   }
   ~test()
   {
   	x=40;
      y=50;
      cout<<"Destructor active"<<endl;
   }
   test(int a)
   {
   	cout<<"a is"<<a<<endl;
   }
   test(int a,int b)
   {
   	int c =a+b;
      cout<<"sum is"<<c<<endl;
   }
   };
   void main()
   {
   	test t;
      t.check();
      test();
      test(10);
      test(50,100);
      getch();
}

