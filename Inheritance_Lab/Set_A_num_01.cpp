#include <iostream>
using namespace std;

class Student{
    string name;
    int roll_no;
    float cgpa;

    public:
    Student(){}
    Student(string name, int roll_no, float cgpa);
    void display();
};

int main()
{
    Student stu1("Nishat",101,3.75);
    stu1.display();
}

Student::Student(string name, int roll_no, float cgpa)
{
    this->name=name;
    this->roll_no=roll_no;
    this->cgpa=cgpa;
}

void Student ::display()
{
     cout << "Name: " << this->name << endl;
     cout << "Roll No: " << this->roll_no << endl;
     cout << "CGPA: " << this->cgpa << endl;
     
}