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

    if (choice == 1)
    {
        cout << "Please Enter Celsius: ";
        cin >> temp;

        cout << "Fahrenheit: " << temp * 1.8 + 32;
    }

    else if(choice ==2)
    {
        cout << "Please Enter Fahrenheit:";
        cin >> temp;

        cout << "Celsius: " << (temp - 32) / 1.8;
    }

    else {
        cout << "Invalid Choice";
    }
}
