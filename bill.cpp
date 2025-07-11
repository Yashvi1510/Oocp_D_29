#include <iostream.h>
#include <conio.h>
void main()
{
    int units;
    float amount = 0, surcharge = 0, total = 0;
    clrscr();
    cout << "Enter the number of units consumed:";
    cin >> units;

    if (units <= 100)
    {
        amount = units * 0.60;
    }
    else if (units <= 300)
    {
        amount = 100 * 0.60 + 200 * 0.80 + (units - 300) * 0.90;
    }
    else
    {
        amount = 100 * 0.60 + 200 * 0.80 + (units - 300) * 0.90;
    }

    if (amount < 50)
        amount = 50;
    if (amount > 300)
    {
        surcharge = amount * 0.15;
    }
    total = amount + surcharge;

    cout << "\nElectricity Bill Summary:";
    cout << "--------------------------\n";
    cout << "Units Consumed:" << units << endl;
    cout << "Base Amount:" << amount << endl;
    cout << "Surcharge:" << surcharge << endl;
    cout << "Total Amount: " << total << endl;

    getch();
}
