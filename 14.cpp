#include <iostream.h>
#include <conio.h>

void main()
{
    char name;
    int units;
    double charge;
    clrscr();
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    if (units <= 100)
    {
        charge = units * 1.5;
    }
    else if (units <= 300)
    {
        charge = (100 * 1.5) + ((units - 100) * 2.0);
    }
    else
    {
        charge = (100 * 1.5) + (200 * 2.0) + ((units - 300) * 3.0);
    }

    cout << "User => " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Total Charges: " << charge << " rupees." << endl;

    getch();
}
