#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;
    double salary;

public:
    // Base constructor
    Employee(int id, string name, double salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void get_employee()
    {
        cout << "ID : " << this->id << endl;
        cout << "Name : " << this->name << endl;
        cout << "Salary : " << this->salary << endl;
    }
};

class Manager : public Employee
{
    double bonus;

public:
    // Derived constructor
    Manager(int id, string name, double salary, double bonus) : Employee(id, name, salary)
    {
        this->bonus = bonus;
    }

    double calculateSalary()
    {
        return salary + bonus;
    }

    void get_manager()
    {
        cout << "Manager ID : " << this->id << endl;
        cout << "Manager Name : " << this->name << endl;
        cout << "Manager Salary : " << this->salary << endl;
        cout << "Manager Bonus : " << this->bonus << endl;
        cout << "Total Salary : " << calculateSalary() << endl;
        cout << endl;
    }
};

class Engineer : public Employee
{
    double overtime;
    double overtimeRate;

public:
    // Derived constructor
    Engineer(int id, string name, double salary, double overtime, double overtimeRate): Employee(id, name, salary)
    {
        this->overtime = overtime;
        this->overtimeRate = overtimeRate;
    }

    double calculateSalary()
    {
        return salary + (overtime * overtimeRate);
    }

    void get_engineer()
    {
        cout << "Engineer ID : " << this->id << endl;
        cout << "Engineer Name : " << this->name << endl;
        cout << "Engineer Salary : " << this->salary << endl;
        cout << "Engineer Overtime : " << this->overtime << endl;
        cout << "Engineer Overtime Rate : " << this->overtimeRate << endl;
        cout << "Total Salary : " << calculateSalary() << endl;
    }
};

int main()
{
    Manager m(101, "Sara", 50000, 10000);
    Engineer n(102, "Sabiha", 54000, 2.0, 5000);

    m.get_manager();
    n.get_engineer();

    return 0;
}