/*
Name - Dhumal Aditya Sunil
KD3 batch
Roll no - 86697
*/

#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;

};

void initDate(struct Date * ptr)
{
  ptr->day=9;
  ptr->month=9;
  ptr->year=2024;

  printf("date is initialized to : %d/%d/%d",ptr->day,ptr->month,ptr->year);
}

void acceptDateOnConsole(struct Date * ptr)
{
    printf("Enter the day ");
    scanf("%d",&ptr->day);
    printf("Enter the month ");
    scanf("%d",&ptr->month);
    printf("Enter the year ");
    scanf("%d",&ptr->year);
}

void printDateOnConsole(struct Date *ptr)
{
    printf("date is - %d/%d/%d",ptr->day,ptr->month,ptr->year);


}

int main()
{
    struct Date d1;
    // initDate(&d1);
    acceptDateOnConsole(&d1);
   printDateOnConsole(&d1);

}