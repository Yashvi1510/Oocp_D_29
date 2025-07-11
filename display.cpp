#include <iostream.h>
#include <conio.h>

void displayMessage(int);

void main()
{
    int count;

    clrscr();
    cout << "Enter how many times to display 'Well Done': ";
    cin >> count;

    if (count > 0)
    {
        displayMessage(count);
    }
    else
    {
        cout << "Please enter a positive number." << endl;
    }

    getch();
}

void displayMessage(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "Well Done" << endl;
    }
}