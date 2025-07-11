
#include <iostream.h>
#include <conio.h>
int findGreatest(int, int, int);

void main()
{
	int no1, no2, no3, result;
	clrscr();

	cout << "Enter three numbers: ";
	cin >> no1 >> no2 >> no3;

	result = findGreatest(no1, no2, no3);
	cout << "Greatest number is: " << result << endl;
	getch();
}

// Function to find the greatest number
int findGreatest(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	else if (b > c)
		return b;
	else
		return c;
}