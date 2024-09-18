// // Q2. Provide menu driven code for the functionalities:
// // 1. Accept Employee
// // a. Accept Manager
// // b. Accept Salesman
// // c. Accept SalesManager
// // 2. Display the count of all employees with respect to designation
// // 3. Display All Managers
// // 4. Display All Salesman
// // 5. Display All SalesManagers

#include <iostream>
using namespace std;

class Employee
{
    int id;
    double salary;

public:
    Employee() {}
    Employee(int id, double salary) : id(id), salary(salary) {}

    virtual void accept()
    {
        cout << "Enter Employee details:\n";
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
    }

    virtual void display()
    {
        cout << "Employee ID: " << id << "\n";
        cout << "Salary: " << salary << "\n";
    }

    virtual ~Employee() {}
};

class Manager : virtual public Employee
{
    double bonus;

public:
    Manager() {}

    void accept() override
    {
        Employee::accept();
        cout << "Enter bonus: ";
        cin >> bonus;
    }

    void display() override
    {
        Employee::display();
        cout << "Bonus: " << bonus << "\n";
    }
};

class Salesman : virtual public Employee
{
    double commission;

public:
    Salesman() {}

    void accept() override
    {
        Employee::accept();
        cout << "Enter commission: ";
        cin >> commission;
    }

    void display() override
    {
        Employee::display();
        cout << "Commission: " << commission << "\n";
    }
};

class Salesmanager : public Manager, public Salesman
{
public:
    Salesmanager() {}

    void accept() override
    {
        Manager::accept();
        cout << "Entering Salesman details...\n";
        Salesman::accept();
    }

    void display() override
    {
        Manager::display();
        Salesman::display();
    }
};

int menu()
{
    int choice;
    cout << "0. EXIT\n";
    cout << "1. Accept Employee\n";
    cout << "2. Display the count of all employees with respect to designation\n";
    cout << "3. Display All Managers\n";
    cout << "4. Display All Salesmen\n";
    cout << "5. Display All SalesManagers\n";
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

void countEmployees(Employee **arr, int index)
{
    int count_manager = 0, count_salesman = 0, count_salesmanager = 0;

    for (int i = 0; i < index; i++)
    {
        if (dynamic_cast<Manager *>(arr[i]) && !dynamic_cast<Salesmanager *>(arr[i]))
            count_manager++;
        else if (dynamic_cast<Salesman *>(arr[i]) && !dynamic_cast<Salesmanager *>(arr[i]))
            count_salesman++;
        else if (dynamic_cast<Salesmanager *>(arr[i]))
            count_salesmanager++;
    }

    cout << "Count of Managers: " << count_manager << "\n";
    cout << "Count of Salesmen: " << count_salesman << "\n";
    cout << "Count of SalesManagers: " << count_salesmanager << "\n";
}

int main()
{
    Employee *arr[5];
    int index = 0;

    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
        {
            char choice1;
            cout << "a) Accept Manager\n";
            cout << "b) Accept Salesman\n";
            cout << "c) Accept SalesManager\n";
            cout << "Select your choice: ";
            cin >> choice1;

            if (index < 5)
            {
                switch (choice1)
                {
                case 'a':
                    arr[index] = new Manager;
                    arr[index]->accept();
                    index++;
                    break;
                case 'b':
                    arr[index] = new Salesman;
                    arr[index]->accept();
                    index++;
                    break;
                case 'c':
                    arr[index] = new Salesmanager;
                    arr[index]->accept();
                    index++;
                    break;
                default:
                    cout << "Invalid choice!\n";
                }
            }
            else
            {
                cout << "Array is full (5 elements already inserted)\n";
            }
            break;
        }
        case 2:
            countEmployees(arr, index);
            break;
        case 3:
            cout << "Details of all Managers:\n";
            for (int i = 0; i < index; i++)
            {
                if (dynamic_cast<Manager *>(arr[i]) && !dynamic_cast<Salesmanager *>(arr[i]))
                    arr[i]->display();
            }
            break;
        case 4:
            cout << "Details of all Salesmen:\n";
            for (int i = 0; i < index; i++)
            {
                if (dynamic_cast<Salesman *>(arr[i]) && !dynamic_cast<Salesmanager *>(arr[i]))
                    arr[i]->display();
            }
            break;
        case 5:
            cout << "Details of all SalesManagers:\n";
            for (int i = 0; i < index; i++)
            {
                if (dynamic_cast<Salesmanager *>(arr[i]))
                    arr[i]->display();
            }
            break;
        default:
            cout << "Invalid choice!\n";
        }
    }

    for (int i = 0; i < index; i++)
        delete arr[i]; // Clean up dynamically allocated memory

    return 0;
}








// #include <iostream>
// #include <typeinfo>
// using namespace std;

// class Employee
// {

//     int id;
//     double salary;

// public:
//     Employee()
//     {
//     }

//     Employee(int id, double salary)
//     {
//         this->id = id;
//         this->salary = salary;
//     }

//     void setId(int id)
//     {
//         this->id = id;
//     }

//     int getid()
//     {
//         return this->id;
//     }

//     void setSalary(double salary)
//     {
//         this->salary = salary;
//     }

//  void accept()
//     {
//         cout << "Enter Employee details : \n";
//         cout << "Enter id : \n";
//         cin >> id;
//         cout << "Enter salary : \n";
//         cin >> salary;
//     }

// void display()
//     {
//         cout << "Details of employee \n";
//         cout << "id : " << id << "\n";
//         cout << "salary : " << salary << "\n";
//     }
// };

// class Manager : virtual public Employee
// {
//     double bonus;

// public:
//     Manager()
//     {
//     }

//     Manager(int id, double salary, double bonus) : Employee(id, salary)
//     {
//         this->bonus = bonus;
//     }

//     void setBonus(double bonus)
//     {
//         this->bonus = bonus;
//     }

//     double getBonus()
//     {
//         return bonus;
//     }

//     void accept()
//     {

//         cout << "Enter Manager details \n";
//         Employee::accept();

//         cout << "Enter bonus : \n";
//         cin >> bonus;
//     }

//     void display()
//     {
//         Employee::display();
//         cout << "bonus : " << bonus;
//     }

//     void acceptManager()
//     {
//         accept();
//     }

//     void displayManager()
//     {
//         display();
//     }
// };

// class Salesman : virtual public Employee
// {
//     double commission;

// public:
//     Salesman()
//     {
//     }

//     Salesman(int id, double salary, double commission) : Employee(id, salary)
//     {
//         this->commission = commission;
//     }

//     void setcommission(double commission)
//     {
//         this->commission = commission;
//     }

//     double getcommission()
//     {
//         return commission;
//     }

//     void accept()
//     {
//         cout << "Enter salesman details : \n";
//         Employee::accept();

//         cout << "Enter commission : \n";
//         cin >> commission;
//     }

//     void display()
//     {
//         Employee::display();
//         cout << "commission : " << commission;
//     }

//     void acceptSalesman()
//     {
//         accept();
//     }

//     void displaysalesman()
//     {
//         display();
//     }
// };

// class Salesmanager : public Manager, Salesman
// {

// public:
//     Salesmanager()
//     {
//     }

//     Salesmanager(int id, double salary, double bonus, double commission) : Employee(id, salary), Manager(id, salary, bonus), Salesman(id, salary, commission)
//     {
//     }

//     void accept()
//     {
//         Manager::acceptManager();
//         Salesman::acceptSalesman();
//     }
//     void display()
//     {
//         Manager::displayManager();
//         Salesman::displaysalesman();
//     }
// };

// int menu()
// {

//     int choice;
//     cout << " 0. EXIT\n";
//     cout << "1. Accept Employee \n";
//     cout << "2. Display the count of all employees with respect to designation \n";
//     cout << "3. Display All Managers\n";
//     cout << "4. Display All Salesman\n";
//     cout << "5. Display All SalesManagers\n";
//     cout << "Enter your choice\n";
//     cin >> choice;

//     return choice;
// }

// void count(Employee **arr, int index)
// {

//     int count_manager;
//     int count_salesman;
//     int count_salesmanager;

//     for (int i = 0; i < index; i++)
//     {

//         if (typeid(*arr[i]) == typeid(Manager))
//         {
//             count_manager++;
//         }
//         else if (typeid(*arr[i]) == typeid(Salesman))
//         {
//             count_salesman++;
//         }
//         else if (typeid(*arr[i]) == typeid(Salesmanager))
//         {
//             count_salesmanager++;
//         }
//     }

//     cout << "count of managers : " << count_manager << "\n";
//     cout << "count of salesman : " << count_salesman << "\n";
//     cout << "count of salesmanager : " << count_salesmanager << "\n";
// }

// int main()
// {

//     Employee *arr[5];
//     int index = 0;

//     int choice;
//     while ((choice = menu()) != 0)
//     {

//        switch (choice)
//         {
//         case 1:
//         {
//             char choice1;
//             cout << "a) Accept Manager\n";
//             cout << "b) Accept Salesman\n";
//             cout << "c) Accept SalesManager\n";
//             cout << "Select your choice: ";
//             cin >> choice1;

//             if (index < 5)
//             {
//                 switch (choice1)
//                 {
//                 case 'a':
//                     arr[index] = new Manager;
//                     arr[index]->accept();
//                     index++;
//                     break;
//                 case 'b':
//                     arr[index] = new Salesman;
//                     arr[index]->accept();
//                     index++;
//                     break;
//                 case 'c':
//                     arr[index] = new Salesmanager;
//                     arr[index]->accept();
//                     index++;
//                     break;
//                 default:
//                     cout << "Invalid choice!\n";
//                 }
//             }
//             else
//             {
//                 cout << "Array is full (5 elements already inserted)\n";
//             }
//             break;
//         }
//         case 2:

//             count(arr, index);

//             break;
//         case 3:

//             cout << "all the details of all managers : \n";

//             for (int i = 0; i < index; i++)
//             {
//                 if (typeid(*arr[i]) == typeid(Manager))
//                 {
//                     arr[i]->display();
//                 }
//             }
//             break;
//         case 4:
//             cout << "all the details of all salesman : \n";

//             for (int i = 0; i < index; i++)
//             {
//                 if (typeid(*arr[i]) == typeid(Salesman))
//                 {
//                     arr[i]->display();
//                 }
//             }
//             break;
//         case 5:
//             cout << "all the details of all salesmanagers : \n";

//             for (int i = 0; i < index; i++)
//             {
//                 if (typeid(*arr[i]) == typeid(Salesmanager))
//                 {
//                     arr[i]->display();
//                 }
//             }
//             break;
//         default:

//         cout<<"Invalid choice \n";
//             break;
//         }
//     }
// }

