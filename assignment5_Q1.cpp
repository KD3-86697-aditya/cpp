
// Q1. Create a class Date with data memebrs day,month and year. 
// Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of 
// type Date. 
// Implement above classes. Test all functionalities in main(). 
#include<iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

    public:

    Date():Date(0,0,0){}

    Date(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;

    }

    void setDay(int day)
    {
        this->day=day;
    }
    void setmonth(int month)
    {
        this->month=month;
    }
    void setyear(int year)
    {
        this->year=year;
    }
  
    void accept()
    {   cout<<"enter birthdate\n";
        cout<<"enter day :\n";
        cin>>day;
        cout<<"enter month :\n";
        cin>>month;
        cout<<"enter year :\n";
        cin>>year;
    }

    void display()
    {
        cout<<"Date is : "<<this->day<<"/"<<this->month<<"/"<<this->year<<"\n";
    }


};

class person
{

    string name;
    string address;
    Date birthdate;

public:

    person()
    {
        this->name="";
        this->address="";
    }

    person(string name,string address,int day,int month,int year):birthdate(day,month,year)
    {
       this->name=name;
       this->birthdate.setDay(day);
       this->birthdate.setmonth(month);
       this->birthdate.setyear(year);

    }


    void accept()
    {
        cout<<"enter details\n";
        cout<<"Enter name\n";
        cin>>name;
        cout<<"Enter address\n";
        cin>>address;
        cout<<"enter date \n";
        birthdate.accept();
    }

    void display()
    {
        cout<<"Details are \n";
        cout<<"Employee name : "<<name<<"\n";
        cout<<"Employee address :"<<address<<"\n";
        birthdate.display();
    }

};


int main()
{

person p1;
cout<<"following is initialized through  default constructor: \n";
p1.display();

cout<<"following  is initialized through parameterized costructor  : \n";
person p2("Aniket","Mumbai",24,01,2002);
p2.display();
person p3;
cout<<"following  is initialized through accept function  : \n";
p3.accept();
p3.display();


return 0 ;
}