#include<iostream.h>
#include<conio.h>
class Sample
{
	private :
	  int a,b,c;
	public :
	  Sample()
	  {
	    a=b=c=0;

	  }
	  Sample(int x,int y,int z)
	  {
	    a=x;
	    b=y;
	    c=z;
	  }
	  void Showdata()
	  {
	    cout<<"\n A="<<a;
	    cout<<"\n B="<<b;
	    cout<<"\n C="<<c;
	  }
   /*   void operator -()
	{
	   a=-a;
	   b=-b;
	   c=-c;
	}*/
	friend void operator -(Sample &T);

};
void operator -(Sample &T)
{
	T.a=-T.a;
	T.b=-T.b;
	T.c=-T.c;
}
void main()
{
	clrscr();
	Sample S1(10,20,-30);
	S1.Showdata();
	-S1;
	S1.Showdata();

	getch();
}