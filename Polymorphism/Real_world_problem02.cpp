#include <iostream>
using namespace std;
class Recipient
{
public:
    virtual void notify(string message) = 0;
    virtual ~Recipient() {}
};
class Student : public Recipient
{
public:
    void notify(string message) override
    {
        cout << "[Student Notification] " << message << endl;
    }
};
class Teacher : public Recipient
{
public:
    void notify(string message) override
    {
        cout << "[Teacher Notification] " << message << endl;
    }
};
class Admin : public Recipient
{
public:
    void notify(string message) override
    {
        cout << "[Admin Notification] " << message << endl;
    }
};

int main()
{
    Recipient *r;
    Student s;
    r = &s;
    r->notify("Your exam schedule has been published.");
    Teacher t;
    r = &t;
    r->notify("Please submit grades by Friday.");
    Admin a;
    r = &a;
    r->notify("System maintenance scheduled for Sunday.");

    return 0;
}