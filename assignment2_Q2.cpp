/*
Name - Dhumal Aditya Sunil
KD3 batch
Roll no - 86697
*/

#include<iostream>
using namespace std;

class student {
private:
    // Data members
    int rollno;
    string name;
    int marks;

public:
    // Member functions

    // Function to initialize student details to default values
    void initStudent() {
        rollno = 0;
        name = "";
        marks = 0;
        cout << "Details are initialized to: \n";
        cout << "Roll no: " << rollno << " , Name: " << name << " , Marks: " << marks << "\n";
    }

    // Function to accept student details from console
    void acceptStudentFromConsole() {
        cout << "Enter the roll no of the student: ";
        cin >> rollno;
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the marks of the student: ";
        cin >> marks;
    }

    // Function to print student details on console
    void printStudentOnConsole() {
        cout << "Details of the student are: \n";
        cout << "Roll no: " << rollno << "\n";
        cout << "Student Name: " << name << "\n";
        cout << "Marks: " << marks << "\n";
    }
};

// Main menu-driven program
int main() {
    student s1;  // Object of class student
    int choice;

    do {
        // Display the menu options
        cout << "\n*** Student Menu ***\n";
        cout << "1. Initialize Student (Default Values)\n";
        cout << "2. Accept Student Details from Console\n";
        cout << "3. Print Student Details on Console\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Perform actions based on user choice
        switch (choice) {
            case 1:
                s1.initStudent();
                break;
            case 2:
                s1.acceptStudentFromConsole();
                break;
            case 3:
                s1.printStudentOnConsole();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
