/*
Name - Dhumal Aditya Sunil
KD3 batch
Roll no - 86697
*/

#include <stdio.h>

// Structure to hold the date
struct Date {
    int day;
    int month;
    int year;
};

// Function to initialize the date to a default value
void initDate(struct Date *ptr) {
    ptr->day = 9;
    ptr->month = 9;
    ptr->year = 2024;
    printf("Date initialized to: %d/%d/%d\n", ptr->day, ptr->month, ptr->year);
}

// Function to accept date details from the console
void acceptDateFromConsole(struct Date *ptr) {
    printf("Enter the day: ");
    scanf("%d", &ptr->day);
    printf("Enter the month: ");
    scanf("%d", &ptr->month);
    printf("Enter the year: ");
    scanf("%d", &ptr->year);
}

// Function to print the date on the console
void printDateOnConsole(struct Date *ptr) {
    printf("Date is: %d/%d/%d\n", ptr->day, ptr->month, ptr->year);
}

// Main menu-driven program
int main() {
    struct Date d1;  // Declare a Date object
    int choice;

    do {
        // Display the menu options
        printf("\n*** Date Menu ***\n");
        printf("1. Initialize Date (Default Values)\n");
        printf("2. Accept Date from Console\n");
        printf("3. Print Date on Console\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // Perform actions based on the user choice
        switch (choice) {
            case 1:
                initDate(&d1);
                break;
            case 2:
                acceptDateFromConsole(&d1);
                break;
            case 3:
                printDateOnConsole(&d1);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
