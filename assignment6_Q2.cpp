#include <iostream>
using namespace std;

class Employee // Inheritance
{
    int id;
    double salary;

public:
    Employee()
    {
        this->id = 0;
        this->salary = 0;
    }

    Employee(int id, double salary)
    {
        this->id = id;
        this->salary = salary;
    }

    void setId(int id)
    {
        this->id = id;
    }

    int getId()
    {
        return id;
    }

    void setsalary(int salary)
    {
        this->salary = salary;
    }

    int getsalary()
    {
        return salary;
    }

    void accept()
    {
        cout << "Enter the details \n";
        cout << "Enter id \n";
        cin >> id;
        cout << "Enter salary\n";
        cin >> salary;
    }

    void display()
    {
        cout << "following are the details \n";
        cout << "id : " << id << "\n";
        cout << "salary : " << salary << "\n";
    }
                            
};

class Manager : virtual public Employee
{

    double bonus;

public:
    Manager()
    {
        bonus = 0;
    }

    Manager(int id, double salary, double bonus) : Employee(id, salary)
    {
        this->bonus = bonus;
    }

    void setbonus(double bonus)
    {
        this->bonus = bonus;
    }

    double getbonus()
    {
        return this->bonus;
    }

    void accept()
    {
        cout << "Enter the details of manager\n";
        Employee::accept();
        cout << "Enter bonus : \n";
        cin >> bonus;
    }

    void display()
    {
        cout << "Following are hte details of manager \n";
        Employee::display();
        cout << "bonus : " << bonus << "\n";
    }

    void acceptManager()
    {
        accept();
    }

    void displayManager()
    {
        display();
    }
};

class salesman : virtual public Employee
{

    double commission;

public:
    salesman()
    {

        commission = 0;
    }

    salesman(int id, double salary, double commission) : Employee(id, salary)
    {
        this->commission = commission;
    }

    void setcommission(double commission)
    {
        this->commission = commission;
    }

    double getcommission()
    {
        return this->commission;
    }

    void accept()
    {
        cout << "Enter salesman details : \n";
        Employee::accept();
        cout << "Enter commission : \n";
        cin >> commission;
    }

    void display()
    {
        cout << "Details of salesman \n";
        Employee::display();
        cout << "commission : " << commission;
        cout << "\n";
    }

    void acceptsalesman()
    {
        accept();
    }

    void displaysalesman()
    {
        display();
    }
};

class salesmanager : public Manager, salesman
{

public:
    salesmanager()
    {
    }

    salesmanager(int id, double salary, double bonus, double commission) : Employee(id, salary), Manager(id, salary, bonus), salesman(id, salary, commission)
    {
    }

    void accept()
    {
        Manager::acceptManager();
        salesman::acceptsalesman();
    }

    void display()
    {
        Manager::displayManager();
        salesman::displaysalesman();
    }
};

int main()
{
    salesmanager sm1;
    sm1.accept();
    sm1.display();
    return 0;
}
