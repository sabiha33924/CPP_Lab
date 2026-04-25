#include <iostream>
using namespace std;

class Person {
    public :

    string name;
    int age;
    Person(string name, int age)
    {
        this->name=name;
        this ->age=age;
    }
};

class Employee : public Person
{
    public:
    int employeeID;
    double salary;
    Employee(string name, int age , int employeeID,double salary):Person( name,age)
    {
        this->employeeID=employeeID;
        this->salary=salary;
    }

    void showDetails()
    {
        cout << "Name: "<< this->name<<endl;
         cout << "Age: "<< this->age<<endl;
         cout << "Employee ID: "<< this->employeeID<<endl;
         cout << "Salary: "<< this->salary<<endl;
    }
};

int main()
{
    Employee e1("Rohim",26,188,29000);
    e1.showDetails();
}