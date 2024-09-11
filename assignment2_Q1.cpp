/*
Name - Dhumal Aditya Sunil
KD3 batch
Roll no - 86697
*/

#include<iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;

    // Initializes date to 9/9/2024 and prints the date
    void initDate() {
        this->day = 9;
        this->month = 9;
        this->year = 2024;
        cout << "Date initialized to " << this->day << "/" << this->month << "/" << this->year << "\n";
    }

    // Accepts date input from the console
    void acceptDateOnConsole() {
        cout << "Enter the day: ";
        cin >> this->day;
        cout << "Enter the month: ";
        cin >> this->month;
        cout << "Enter the year: ";
        cin >> this->year;
    }

    // Prints the current date on the console
    void printDateOnConsole() {
        cout << "Date is - " << this->day << "/" << this->month << "/" << this->year << "\n";
    }

    // Function to check if the current year is a leap year
    bool isLeapYear() {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            return true;
        }
        return false;
    }
};

// Main menu-driven program
int main() {
    Date d1;
    int choice;

    do {
        // Display the menu options
        cout << "\n*** Date Menu ***\n";
        cout << "1. Initialize Date (Default Values)\n";
        cout << "2. Accept Date from Console\n";
        cout << "3. Print Date on Console\n";
        cout << "4. Check if Year is a Leap Year\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Perform actions based on user choice
        switch (choice) {
            case 1:
                d1.initDate();
                break;
            case 2:
                d1.acceptDateOnConsole();
                break;
            case 3:
                d1.printDateOnConsole();
                break;
            case 4:
                if (d1.isLeapYear()) {
                    cout << "Year " << d1.year << " is a leap year.\n";
                } else {
                    cout << "Year " << d1.year << " is not a leap year.\n";
                }
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
