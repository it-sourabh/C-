#include<iostream.h>
#include<conio.h>
class op
{
int a,b;
public:
void input()
{
cout << "Enter a: ";
cin >> a;
cout << "Enter b: ";
cin >> b;
}
friend sub(op&);   //Friend function Prototyping
};
sub(op &h)         //Friend Function Definition
{
return h.a-h.b;
}
void main()
{
op p;
clrscr();
p.input();
cout << "The difference is: " << sub(p);   //Friend Function called
getch();
}