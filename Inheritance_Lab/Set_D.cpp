#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int id;
    Person(string name, int id)
    {
        this->name = name;
        this->id = id;
    }

    void persondetails()
    {
        cout << "Name: " << this->name << endl;
        cout << "ID: " << this->id << endl;
    }
};

    class Teacher : public Person
    {
    public:
        string subject;
        Teacher(string name, int id, string subject) : Person(name, id)
        {
            this->subject = subject;
        }

        void teachersdetails()
        {
            cout << "Name: " << this->name << endl;
            cout << "ID: " << this->id << endl;
            cout << "Subject: " << this->subject << endl;
        }
    };

    class Student : public Person
    {
    public:
        float cgpa;
        Student(string name, int id, float cgpa) : Person(name, id)
        {
            this->cgpa = cgpa;
        }

        void getStatus()
        {
            cout << "Student Status" << endl;
            if (cgpa >= 2.0)
            {
                cout << "Pass" << endl;
            }
            else
            {
                cout << "Fail" << endl;
            }
        }

        void getStatus(double threshold)
        {
            if (cgpa >= threshold)
            {
                cout << "Is Threshold" << endl;
            }
            else
            {
                cout << "Is Not Threshold" << endl;
            }
        }

        void studentDetails()
        {
            void persondetails();
            cout << "CGPA: " << this->cgpa << endl;
        }
    };

    int main()
    {
        Teacher t("Sweet",1009,"OOP");
        t.teachersdetails();

        Student s1("Prerona",1007,2.45);
        s1.studentDetails();
        s1.getStatus();
        s1.getStatus(2.50);

        return 0;
    }