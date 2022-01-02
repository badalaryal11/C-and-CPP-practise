#include<iostream.h>
#include<conio.h>
class test
{
	private:
   int x,y,z;
   public:
   void in()
   {
   	cout<<"Enter x and y"<<endl;
      cin>>x>>y;
   }
   friend class sum;
   };
   class sum
   {
   public:
   void inf(test t)
   {
   int z=t.x+t.y;
   cout<<"Sum is"<<z<<endl;
   }
   void info(test t)
   {
   int z=t.x*t.y;
   cout<<"product is"<<z;
   }
   };
   void main()
   {
   test t;
   sum s;
   t.in();
   s.inf(t);
   s.info(t);
   getch();
}


