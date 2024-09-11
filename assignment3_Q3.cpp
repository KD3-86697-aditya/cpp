/*
Name - Dhumal Aditya Sunil
KD3 batch
Roll no - 86697
*/

#include<iostream>
using namespace std;

class Address
{
    string building;
    string street;
    string city;
    int pin;

    
public:

// default constructor
    Address()
    {
        this->building="";
        this->street="";
        this->city="";
        this->pin=0;

    }

// parametrized constructor
    Address(string building,string street,string city,int pin)
    {

        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;

    }


//setters

  void setBuilding(string building)
  {
    
    this->building=building;
  }

  void setStreet(string street)
  {
    this->street=street;
  }

  void setCity(string city)
  {
    this->city=city;
  }

  void setPin(int pin)
  {
    this->pin=pin;

  }
 
// getters

    string getBuilding(string Building)
    {
        return this->building;
    }
    string getstreet(string street)
    {
        return this->street;
    }

    string getcity(string city)
    {
        
     return this->city;
    }
    
    int getPin()
    {
        return this->pin;
    }

    void accept()
    {
        cout<<"Enter the details :\n";
        cout<<"Enter the building name \n";
        getline(cin,building);
        cout<<"Enter the street name \n";
        getline(cin,street);
        cout<<"Enter the city name \n";
        getline(cin,city);
        cout<<"Enter the pincode \n";
        cin>>pin;
    }

    void display()
    {
        cout<<"Building : "<<building<<"\n";
        cout<<"street : "<<street<<"\n";
        cout<<"city : "<<city<<"\n";
        cout<<"pin : "<<pin<<"\n";
    }
};

int main()
{
    Address a1;
   cout<<"Address for a1 (default constructor)\n";
   a1.display();


cout<<"\n";
   cout<<"Address for a2 (parametrized constructor)\n";
    Address a2("A","JM road","pune",411044);
   a2.display();


cout<<"\n";


    Address a3;
   cout<<"Address for a3\n";
    a3.setBuilding("B apartment");
    a3.setStreet("Bhigwan Road ");
    a3.setCity("Baramati");
    a3.setPin(413102);

    a3.display();
 
cout<<"\n";

 Address a4;
cout<<"Address for a4\n";
 a4.accept();
 a4.display();

    
   
return 0 ;
}