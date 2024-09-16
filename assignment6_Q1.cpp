// Q1. Create a class Date with data memebrs day,month and year. 
// Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of 
// type Date. 
// Cretae a class Employee with data members id, sal, dept and joining date. The joining date should 
// be of type date. 
// Employee class should be inherited from Person. 
// Implement following classes. Test all functionalities in main(). 
// (Note - Perform the Association and Inheritance in the above case.)


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
    {  
        cout<<"enter day :\n";
        cin>>day;
        cout<<"enter month :\n";
        cin>>month;
        cout<<"enter year :\n";
        cin>>year;
    }

    void display()
    {
        cout<<this->day<<"/"<<this->month<<"/"<<this->year<<"\n";
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
      
    }
    
    void accept()
    {

        cout<<"enter details\n";
        cout<<"Enter name\n";
        cin>>name;
        cout<<"Enter address\n";
        cin>>address;
        cout<<"enter birthdatedate \n";
        birthdate.accept();
    }


    void display()
    {
        cout<<"Details are \n";
        cout<<"name : "<<name<<"\n";
        cout<<"address :"<<address<<"\n";
        cout<<"birthDate : ";
        birthdate.display();
    }

};

class Employee : public  person                     // Inheritance 
{
    int id;
    int salary;
    string dept;
    Date joiningDate;                             // association
    
    public:

    Employee()
    {
        this->id=0;
        this->salary=0;
        this->dept="";
        
    }

    Employee(int id,int salary,string dept,int day ,int month,int year):joiningDate(day,month,year)
    {

        this->id=id;
        this->salary=salary;
        this->dept=dept;
        
    }

    void acceptEmployee()
    {

        cout<<"Enter the details \n";
        person::accept();                   // calling function from person class
        cout<<"Enter id \n";
        cin>>id;
        cout<<"Enter salary\n";
        cin>>salary;
        cout<<"Enter department\n";
        cin>>dept;
        cout<<"Enter joining date\n";
        joiningDate.accept();

    }

    void displayEmployee()
    {

        cout<<"following are the details \n";
        person::display();
        cout<<"id : "<<id<<"\n";
        cout<<"salary : "<<salary<<"\n";
        cout<<"dept : "<<dept<<"\n";
        cout<<"joining date : ";
        joiningDate.display();
        
    }
 
};


int main()
{

Employee e1;
e1.acceptEmployee();
e1.displayEmployee();

return 0 ;
}



