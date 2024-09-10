/*
Name - Dhumal Aditya Sunil
KD3 batch
Roll no - 86697
*/

#include<iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;

    // Initializes date to 9/9/2024 and prints thedate
    void initDate()
    {
        this->day = 9;
        this->month = 9;
        this->year = 2024;
        cout << "date is initialized to " << this->day << "/" << this->month << "/" << this->year << "\n";
    }

    // Accepts date input from the console
    void acceptDateOnConsole()
    {
        cout << "Enter the day " << "\n";
        cin >> this->day;
        cout << "Enter the month " << "\n";
        cin >> this->month;
        cout << "Enter the year " << "\n";
        cin >> this->year;
    }

    //Prints the current date on the console
    void printDateOnConsole()
    {
        cout << "date is - " << this->day << "/" << this->month << "/" << this->year << "\n";
    }

    //function to check if the current year is a leap year or not
    bool isLeapYear()
    {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Date d1;
    
    d1.initDate();                // Initializes and prints the default date
    d1.acceptDateOnConsole();      // Accepts date input from the user
    d1.printDateOnConsole();       // Prints the user-provided date
    if (d1.isLeapYear())           // Checks if the entered year is a leap year
    {
        cout << "year is leap year " << "\n";
    }
    else
    {
        cout << "not a leap year " << "\n";
    }

    return 0;
}
