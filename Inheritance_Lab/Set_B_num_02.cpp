#include <iostream>
using namespace std;

class Shape{
    public:
    void area(double r)
    {
        cout << "Area of a Circle:"<< 2*3.1416*r << endl;
    }

    void area (double l, double w)
    {
        cout << "Area of a Rectangle:"<< l*w << endl;
    }
    void area(double b , double h, bool isTriangle)
    {
        if(isTriangle)
        {
            cout << "Area of a Triangle:"<< 0.5*b*h << endl;
        }
        else{
            cout << "Triangle is not possible" << endl;
        }
    }

};


int main()
{
    Shape ob;
    ob.area(2.7);
    ob.area(5.6,8.9);
    ob.area(3.5,6.1,1);
    ob.area(4.6,8.3,0); 
}