#include <iostream.h>
#include<conio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int modulus(int a, int b);

int main() {
    int no1, no2;
    clrscr();
    cout << "Enter Two Numbers: ";
    cin >> no1 >> no2;

   
    cout << "\n=== Arithmetic Operations ===" << endl;
    cout << "Addition: " << no1 << " + " << no2 << " = " << add(no1, no2) << endl;
    cout << "Subtraction: " << no1 << " - " << no2 << " = " << subtract(no1, no2) << endl;
    cout << "Multiplication: " << no1 << " * " << no2 << " = " << multiply(no1, no2) << endl;

    if (no2 != 0) {
        cout << "Division: " << no1 << " / " << no2 << " = " << divide(no1, no2) << endl;
        cout << "Remainder: " << no1 << " % " << no2 << " = " << modulus(no1, no2) << endl;
    } else {
        cout << "Division: Cannot divide by zero." << endl;
        cout << "Remainder: Cannot find remainder when dividing by zero." << endl;
    }
    getch();
    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}
