#include<iostream.h>
#include<conio.h>
class abc
{
public:
	int add(int a, int b, int c=5)
	{
	 return a+b+c;
	}
};
void main()
{
abc x;
clrscr();
cout<< "The addition is: " << x.add(5,6,7);
getch();
}