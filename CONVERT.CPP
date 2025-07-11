#include <iostream.h>
#include <conio.h>

float convertToFahrenheit(float celsius);

void main()
{

	float celsius, fahrenheit;
	clrscr();

	cout << "Enter temperature in Celsius: ";
	cin >> celsius;
	fahrenheit = convertToFahrenheit(celsius);
	cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
	getch();
}

float convertToFahrenheit(float celsius)
{
	return (celsius * 9.0 / 5.0) + 32;
}