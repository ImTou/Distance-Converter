#include <iostream>
using namespace std;

int main() {

    int choice;
    double number1, number2;
    cout << "Please enter a number: \n1. Plus\n2. Minus\n3. Multiply\n4. Divide\n5. Remainder\nEnter your choice:";
    cin >> choice;

    if (choice == 1) {
        cout << "You choose plus to calculate.\n";
        cout << "Please enter the first number: ";
        cin >> number1;
        cout << "Please enter the second number: ";
        cin >> number2;
        cout << "The result is: " << number1 + number2;
    }
    else if (choice == 2) {
        cout << "You choose minus to calculate.\n";
        cout << "Please enter the first number: ";
        cin >> number1;
        cout << "Please enter the second number: ";
        cin >> number2;
        cout << "The result is: " << number1 - number2;
    }
    else if (choice == 3) {
        cout << "You choose multiply to calculate.\n";
        cout << "Please enter the first number: ";
        cin >> number1;
        cout << "Please enter the second number: ";
        cin >> number2;
        cout << "The result is: " << number1 * number2;
    }
    else if (choice == 4) {
        cout << "You choose divide to calculate.\n";
        cout << "Please enter the first number: ";
        cin >> number1;
        cout << "Please enter the second number: ";
        cin >> number2;
        cout << "The result is: " << number1 / number2;
    }
    else if (choice == 5) {
        cout << "You choose remainder to calculate.\n";
        cout << "Please enter the first number: ";
        cin >> number1;
        cout << "Please enter the second number: ";
        cin >> number2;
        cout << "The result is: " << (int)number1 % (int)number2;
    }
    else {
        cout << "Invalid choice";
    }
    return 0;
}
