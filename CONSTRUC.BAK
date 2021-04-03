#include<iostream.h>
#include<conio.h>
class abc
{
public:
	int a,b;
	abc(int x, int y)   //This is a parameterized constructor
	{
	a = x;
	b = y;
	}
	abc()
	{
	a=1;
	b=2;
	}
	abc(abc& d)    //This is a copy constructor
	{
	a = d.a;
	b = d.b;
	}
};
void main()
{
abc q(5,6);   //While creating objects, we have to give the arguments
abc w(q); //Calling the copy constructor.     //to initialize the values of member variables: a and b.
abc e;
clrscr();
cout << q.a << ", " << q.b << "\n";
cout << w.a << ", " << w.b << "\n";
cout << e.a << ", " << e.b;
getch();
}