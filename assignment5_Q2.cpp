
/*
Name:Aditya dhumal
batch-KD3
Rollno: 86697

*/
#include<iostream>
using namespace std;


class student
{
    string name;
    const int rollNumber;
    string gender;
    static int generatenumber;
    int *marks;

public:

    student():rollNumber(++generatenumber)
    {
        name="";
        gender="";
        marks=new int[3];
        marks[0]=0;
        marks[1]=0;
        marks[2]=0;

       
    }
    student(string name,string gender,int marks1,int marks2,int marks3):rollNumber(++generatenumber)
    {
        this->name=name;
        this->gender=gender;
        marks=new int[3];
        marks[0]=marks1;
        marks[1]=marks2;
        marks[2]=marks3;

    }

    void setname(string name)
    {
        this->name=name;
    }

    void setgender(string gender)
    {
        this->gender=gender;
    }

    void setMarkforsubject1(int marks1)
    {
        marks[0]=marks1;
    }

    void setMarkforsubject2(int marks2)
    {
        marks[1]=marks2;
    }

    void setMarkforsubject3(int marks3)
    {
        marks[2]=marks3;
    }

    int getrollno() const
    {
        return this->rollNumber;
    }

    void accept()
    {
        cout<<"Enter details\n ";
        cout<<"Enter name : \n";
        cin>>name;
        cout<<"Enter gender \n";
        cin>>gender;
 
        cout<<"Enter marks for subject 1\n";
        cin>>marks[0];
        cout<<"Enter marks for subject 2\n";
        cin>>marks[1];
        cout<<"Enter marks for subject 3\n";
        cin>>marks[2];

    }

 void display()
{
    cout<<"Details are :\n ";
    cout<<"Student name : "<<name<<"\n";
    cout<<"RollNo : "<<rollNumber<<"\n";
    cout<<"Gender : "<<gender<<"\n";

    // Correct calculation of percentage with floating-point division
    float total=300;
    float percentage = ((marks[0] + marks[1] + marks[2]) / total) * 100;
    cout<<"Percentage obtained : "<<percentage<<"\n";
}


static int search(student *arr[], int rolltosearch)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]->getrollno() == rolltosearch)
        {
            return i;  
        }
    }
    return -1;  
}


~student()
{
    delete[] marks;
    marks=NULL;
}

};

int student::generatenumber=1000;              // declaration  of static variable outside the class
           

int main()
{

   student *arr[5];
    int choice;
    int rollnotosearch;
    int index;
    
    while(true)
    {
        cout<<"******MENU******"<<"\n";
        cout<<"0) Exit \n";
        cout<<"1) Accept student details \n";
        cout<<"2) Display Student Details \n";
        cout<<"3) Search student rollno \n";
        cout<<" Select the opration u want to perform  \n";
        cin>>choice;


switch(choice)

{

    case 0:
    cout<<"Exiting ....\n";

       for (int i =0;i<5;i++)
        {
        if (arr[i] != nullptr)
        {
            delete arr[i];  // Deleting student objects
          arr[i] = nullptr;
         }
        }
    return 0;

    case 1:
     
     for(int i=0;i<5;i++)
     {
        arr[i]=new student;
        cout<<"Enter detail of student "<<(i+1)<<"\n";
        arr[i]->accept();

     }

     break;

     case 2:
     for(int i=0;i<5;i++)
     {
        arr[i]->display();
     }
     break;

     case 3:

     cout<<"Enter the roono to be searched \n";
     cin>>rollnotosearch;

     index=student::search(arr,rollnotosearch);

     if(index!=-1)
     {
        cout<<"roll no found at index "<<index<<"\n";
        arr[index]->display();
     }
     else{
        cout<<"roll no not found\n";
     }

     break;

     default:

     cout<<"Invalid Option chosen\n";

}

}




}


//non menu function

// int main()
// {

// student *arr[5];

// arr[0]=new student;

// arr[0]->accept();
// arr[1]=new student;
// arr[1]->accept();
// arr[2]=new student;
// arr[2]->setname("mukya");
// arr[2]->setgender("Male");

// arr[2]->setMarkforsubject3(67);
// arr[2]->setMarkforsubject1(75);
// arr[2]->setMarkforsubject3(83);

// arr[3]=new student("arya","Female",79,86,91);
// arr[4]=new student("manya","male",100,94,90);


// cout<<"Student details \n";
// arr[0]->display();
// arr[1]->display();
// arr[2]->display();
// arr[3]->display();
// arr[4]->display();

// int rollNoToSearch;
// cout<<"Enter the roll no to be searched \n";
// cin>>rollNoToSearch;



// int index = student::search(arr,rollNoToSearch);
//     if (index != -1)
//     {
//         cout << "Student found at index " << index << ":\n";
//         arr[index]->display();
//     }
//     else
//     {
//         cout << "Student with roll number " << rollNoToSearch << " not found.\n";
//     }


// return 0 ;

// }