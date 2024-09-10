/*
Name - Dhumal Aditya Sunil
KD3 batch
Roll no - 86697
*/

#include<iostream>
using namespace std;

namespace Nstudent              // namespace Nstudent creation of student
{

    
class student                    // class student 
{  
private:

// data members
    int rollno;             
    string name;
    int marks;

public:


// member functions

void acceptstudent()                                
{
    cout<<"enter the roll no of student : "<<"\n";
    cin>>rollno;
    cout<<"enter the name no of student : "<<"\n";
    cin>>name;
    cout<<"enter the  marks  of student : "<<"\n";
    cin>>marks;

}

void displaystudent()
{
 cout<<"Details of the student are "<<"\n";

    cout<<"Roll no : "<<rollno<<"\n";
    cout<<"Student Name : "<<name<<"\n";
    cout<<"marks : "<<marks<<"\n";

}


};


}

using namespace Nstudent;        //use of namespace Nstudent (No need to use scope resolution now )

int main()
{

    student s1;            // object of student class (class in namespace Nstudent)
s1.acceptstudent();
s1.displaystudent();



return 0 ;
}