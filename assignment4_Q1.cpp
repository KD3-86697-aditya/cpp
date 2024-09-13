
/*
Assignment 4 
  
 
Q1. Write a class for Time and provide the functionality 
Time() 
Time(int h,int m,int s) 
getHour() 
getMinute() 
getSeconds() 
printTime() 
setHour() 
setMinute() 
setSeconds() 
In main create an array dynamically of Time * of size 5. 
Accept the values and display. 
 

*/

#include<iostream>
using namespace std;

class Time
{
    int hrs;
    int min;
    int sec;

    public:
 
    Time():Time(0,0,0){}     

    Time(int hrs,int min,int sec)
    {
      this->hrs=hrs;
      this->min=min;
      this->sec=sec;  
    }

    void sethrs(int hrs)
    {
        this->hrs=hrs;
    }
    void setmin(int min)
    {
        this->min=min;
    }
    void setsec(int sec)
    {
        this->sec=sec;
    }

    int gethrs()
    {
        return this->hrs;
    }
    int getmin()
    {
        return this->min;
    }
    int getsec()
    {
        return this->sec;
    }


    void printTime()
    {
        cout<<"Time is : "<<this->hrs<<":"<<this->min<<":"<<this->sec<<"\n";
    }



};
int main()
{

    Time**ptr=new Time*[5];

    ptr[0]=new Time();
    ptr[1]=new Time(12,48,17);
    ptr[2]=new Time();
    ptr[2]->sethrs(9);
    ptr[2]->setmin(55);
    ptr[2]->setsec(44);
    ptr[3]=new Time(4,12,47);
    ptr[4]=new Time();
    ptr[4]->sethrs(22);
    ptr[4]->setmin(12);
    ptr[4]->sethrs(35);

    for(int i=0;i<5;i++)
    {
        ptr[i]->printTime();
    }

    for(int i=0;i<5;i++)
    {

        delete ptr[i];
    }

    delete []ptr;
    ptr=NULL;




return 0 ;
}