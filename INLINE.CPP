#include<iostream.h>
#include<conio.h>
inline sqr(int a)  //Defining the inline function
{
  return a*a;
}

void main()
{
 int x;
 clrscr();
 cout << "Enter the number: ";
 cin >> x;  //Taking the number from user
 cout << "The square of the number is: " << sqr(x); //Calling the inline function and getting square of the number
 getch();
}