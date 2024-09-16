#include<iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;
public:
    Date()
    {
        day = 0;
        month = 0;
        year = 0;
    }

    Date(int d, int m, int y)
    {
        this->day=d;
        this->month=m;
        this->day=y;
    }

    void setday(int d){
        day =d;

    }
    void setmonth(int s)
    {
        month=s;
    }
    void setyear(int y)
    {
        year=y;
    }
    void getday()
    {
        cout<<"Day : "<<day;
    }
    void getmonth()
    {
        cout<<"Month : "<<month;
    }
    void getyear()
    {
        cout<<"Year : "<<year;
    }

    void acceptdate()
    {
        cout<<"Enter Day : ";
        cin>>day;
        cout<<"Enter Month : ";
        cin>>month;
        cout<<"Enter Year :";
        cin>>year;
    }
    void displayDate()
    {
        cout<<"Day : "<<day<<"Month "<<month<<"Year "<<year;
    }
};
class Person
{
    string name;
    string address;
    Date birthdate;
public:
    Person()
    {
        this->name = " ";
        this->address = " ";
    
    }
    Person(string n, string a, int  day,int month,int year):birthdate(day,month,year)
    {
        this->name=n;
        this->address=a;
       
    }
    void acceptPerson()
    {
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Address : \n";
        cin>>address;
        cout<<"Enter Birthdate :\n";
        birthdate.acceptdate();
    }
    void displayPerson()
    {
        cout<<"Name : "<<" "<<name<<"Address "<<" "<<address<<"BirthDate ";
        birthdate.displayDate();
    }
};
int main()
{
   Person p1;
   p1.acceptPerson();
   p1.displayPerson(); 
}
