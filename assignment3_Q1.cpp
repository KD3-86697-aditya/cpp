/*
Name - Dhumal Aditya Sunil
KD3 batch
Roll no - 86697
*/

#include<iostream>
using namespace std;

class Box
{

 // data members

    int length;
    int width;
    int height;

    public:

    Box()                       // parameter less constructor
    {
        this->height=1;
        this->length=1;
        this->width=1;

    }

    Box(int value)              // single parameter constructor
    {
        this->length=value;
        this->width=value;
        this->height=value;

    }

    Box(int length,int width,int height)                      // parameterized  constructor
    {
     this->length=length;
     this->width=width;
     this->height=height;
    }

    int volume()
    {

        return (this->length)*(this->width)*(this->height);
    }

};


int main()
{

Box b1;

Box b2(3);

Box b3(3,5,7);


int choice;

do
{
      cout << "\n*** Menu ***\n";
        cout << "1. Calculate Volume with default values \n";
        cout << "2. Calculate Volume with length,breadth and height with same value \n";
        cout << "3. Calculate Volume with length,breadth and height with same value \n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            cout<<"volume of box b1 is "<<b1.volume();
            break;

            case 2:
            cout<<"volume of box b2 is "<<b2.volume();
            break;
            case 3: 
            cout<<"volume of box b3 is "<<b3.volume();
            
            break;
            case 4:
            cout<<"Exiting ..."<<"\n";
            break;
            default:
                cout << "Invalid choice! Please try again.\n";

        }


} while (choice!=4);



}