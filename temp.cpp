#include <iostream>
using namespace std;

int main() 
{
    int choice;
    double temp;
    cout << "  ___     _                 _    _     _       __   ___      _    _         " << endl;
    cout << " | __|_ _| |_  _ _ ___ _ _ | |_ (_)___| |_    / /  / __|__ _| |__(_)_  _ ___" << endl;
    cout << " | _/ _` | ' \\| '_/ -_) ' \\| ' \\| / -_)  _|  / /  | (__/ _` | (_-< | || (_-<" << endl;
    cout << " |_|\\__,_|_||_|_| \\___|_||_|_||_|_\\___|\\__| /_/    \\___\\__,_|_/__/_|\\_,_/__/" << endl;
    cout << "  __  __         _       ___        _____                                  " << endl;
    cout << " |  \\/  |__ _ __| |___  | _ )_  _  |_   _|__ _  _                         " << endl;
    cout << " | |\\/| / _` / _` / -_) | _ \\ || |   | |/ _ \\ || |                        " << endl;
    cout << " |_|  |_\\__,_\\__,_\\___| |___/\\_, |   |_|\___/\\_,_|                        " << endl;
    cout << "            " << endl;
    cout << " Choose an option:\n1. Convert Celsius to Fahrenheit\n2. Convert Fahrenheit to Celsius\n";
    cin >> choice;

    if (choice ==1) {
        cout << "Please enter the temperature in Celsius: ";
        cin >> temp;
        cout << "The temperature in Fahrenheit is: " << (temp * 9/5) + 32;
    }
    else if (choice == 2) {
        cout << "Please enter the temperature in Fahrenheit: ";
        cin >> temp;
        cout << "The temperature in Celsius is: " << (temp - 32) * 5/9;
    }
    else {
        cout << "Invalid choice";
    }
}
