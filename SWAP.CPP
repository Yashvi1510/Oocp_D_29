#include<iostream.h>
#include<conio.h>

void main()
{
	int a, b;
	clrscr();
	cout<< "Enter two numbers: ";
	cin>>a>>b;
	cout<<"\nbefore swapping: a="<<a<<" "<<"b="<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nafter swapping: a="<<a<<" "<<"b="<<b;

	getch();
}