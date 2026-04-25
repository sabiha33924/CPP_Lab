#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll_no;
    float cgpa;

public:
    Student() {}
    Student(string name, int roll_no, float cgpa);
    Student(Student &s2);
    void set_cgpa(float cg);
    void display();
};

int main()
{
    Student s1("Nishat", 101, 3.75);
    Student s2 = s1;
    s1.set_cgpa(3.50);
    cout << "Student No.1" << endl;
    s1.display();
    cout << endl;
    cout << "Student No.2" << endl;
    s2.display();
}

Student::Student(string name, int roll_no, float cgpa)
{
    this->name = name;
    this->roll_no = roll_no;
    this->cgpa = cgpa;
}

Student ::Student(Student &s2)
{
    this->name = s2.name;
    this->roll_no = s2.roll_no;
    this->cgpa = s2.cgpa;
}

void Student ::set_cgpa(float cg)
{
    this->cgpa=cg;
}
void Student ::display()
{
    cout << "Name: " << this->name << endl;
    cout << "Roll No: " << this->roll_no << endl;
    cout << "CGPA: " << this->cgpa << endl;
}