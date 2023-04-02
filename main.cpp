#include <iostream>
using namespace std;

int main()
{
    int choice;
    double distance;
    cout << "_  ___ _               _                  __  __  __ _ _         \n"
            " | |/ (_) |___ _ __  ___| |_ ___ _ _ ___   / / |  \\/  (_) |___ ___ \n"
            " | ' <| | / _ \\ '  \\/ -_)  _/ -_) '_(_-<  / /  | |\\/| | | / -_|_-< \n"
            " |_|\\_\\_|_\\___/_|_|_\\___|\\__\\___|_| /__/ /_/   |_|  |_|_|_\\___/__/\n"
            "  / __|___ _ ___ _____ _ _| |_ ___ _ _  | |__ _  _  |_   _|__ _  _ \n"
            " | (__/ _ \\ ' \\ V / -_) '_|  _/ -_) '_| | '_ \\ || |   | |/ _ \\ || |\n"
            "  \\___\\___/_||_\\_/\\___|_|  \\__\\___|_|   |_.__/\\_, |   |_|\\___/\\_,_|\n"
            "                                              |__/                \n\n";
    cout << "Choose an option:\n1. Convert miles to kilometers\n2. Convert kilometers to miles\n";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Please Enter Kilometers: ";
        cin >> distance;
        cout << "You Entered: " << distance << " Kilometers";

        cout << "Miles: " << distance * 0.621371;
    }

    else if(choice ==2)
    {
        cout << "Please Enter Miles:";
        cin >> distance;
        cout << "You Entered: " << distance << " Miles";

        cout << "Kilometers: " << distance * 1.60934;
    }

    else {
        cout << "Invalid Choice";
    }
}
