/*
Name - Dhumal Aditya Sunil
KD3 batch
Roll no - 86697
*/

#include<iostream>
using namespace std;

class student
{
private:

//data members

    int rollno;
    string name;
    int marks;

public:

// member functions

void initStudent()
{
    rollno=0;
    name="";
    marks=0;

    cout<<"Details are initialized to :"<<"\n";
    cout<<"rollno : "<<rollno<<" , "<<"name : "<<name<<"  ,"<<"marks : "<<marks<<"\n";

}


void acceptStudentFromConsole()
{
    cout<<"enter the roll no of student : "<<"\n";
    cin>>rollno;
    cout<<"enter the name no of student : "<<"\n";
    cin>>name;
    cout<<"enter the  marks  of student : "<<"\n";
    cin>>marks;

}

void printStudentOnConsole()
{
 cout<<"Details of the student are "<<"\n";

    cout<<"Roll no : "<<rollno<<"\n";
    cout<<"Student Name : "<<name<<"\n";
    cout<<"marks : "<<marks<<"\n";

}


};

int main()
{

    student s1;                     // object of class student
    s1.initStudent();
    s1.acceptStudentFromConsole();
    s1.printStudentOnConsole();

return 0 ;
}