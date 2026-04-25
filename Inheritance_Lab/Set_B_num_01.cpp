#include <iostream>
using namespace std;

class Calculator
{
public:
    void add(int a, int b)
    {
        cout << "Case 01:" << a + b << endl;
    }
    void add(double a, double b)
    {
        cout << "Case 02:" << a + b << endl;
    }

    void add(int a, int b, int c)
    {
        cout << "Case 03:" << a + b + c << endl;
    }
};

int main()
{
    Calculator ob;
    ob.add(3,5);
    ob.add(3.7,6.9);
    ob.add(3,12,45);
}