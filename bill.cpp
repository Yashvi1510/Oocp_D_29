#include <iostream.h>
#include <conio.h>

float calculateBill(int units);

void main()
{
    int units;
    float totalAmount;
    clrscr();
    cout << "Enter total units consumed: ";
    cin >> units;

    totalAmount = calculateBill(units);

    cout << "Total electricity bill: Rs. " << totalAmount << endl;

    getch();
}

float calculateBill(int units)
{
    float amount;

    if (units <= 100)
    {
        amount = units * 0.60;
    }
    else if (units <= 300)
    {
        amount = (100 * 0.60) + ((units - 100) * 0.80);
    }
    else
    {
        amount = (100 * 0.60) + (200 * 0.80) + ((units - 300) * 0.90);
    }

    /*
     // Minimum charge
    if (amount < 50) {
        amount = 50;
    }

    // 15% surcharge if amount > 300
    if (amount > 300) {
        amount = amount + (amount * 0.15);
    }
    */
    return amount;
}
