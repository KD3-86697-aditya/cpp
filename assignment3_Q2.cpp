/*
Name - Dhumal Aditya Sunil
KD3 batch
Roll no - 86697
*/

#include<iostream>
using namespace std;

class Toolbooth
{

  unsigned int pay_car;
  unsigned int no_pay_car;
  double cash_total;

  public:

  Toolbooth()
  {
    pay_car=0;
    no_pay_car=0;
    cash_total=0;
    

  }

  void payingcar()
  {
   pay_car++;
   cash_total=cash_total+0.50;
  }

  void nopaycard()
  {
    no_pay_car++;
    cash_total=cash_total+0;

  }

  void printOnConsole()
  {
    cout<<"Total number of paying cars "<<pay_car<<"\n";
    cout<<"Total number of no paying cars "<<no_pay_car<<"\n";
    cout<<"cash total : "<<cash_total<<"\n";

  }

};

int main()
{

cout<<"Toolbooth t1 details \n";
    Toolbooth t1;
    t1.payingcar();
    t1.payingcar();
    t1.payingcar();
    t1.payingcar();
    
    t1.nopaycard();
    t1.nopaycard();
    t1.nopaycard();
    t1.printOnConsole();

cout<<"\n";

cout<<"Toolbooth t2 details \n";

    Toolbooth t2;
    t2.payingcar();
    t2.nopaycard();
    t2.payingcar();
    t2.payingcar();
    t2.payingcar();
    t2.nopaycard();
    t2.payingcar();
    t2.payingcar();
    t2.nopaycard();
    t2.payingcar();
    t2.nopaycard();
    t2.printOnConsole();


return 0 ;
}