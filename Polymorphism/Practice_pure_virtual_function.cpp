#include<iostream>
using namespace std;
class Shape{
public:
  virtual void draw()= 0;
  virtual double area()= 0;
};

class Circle:public Shape{
  double radius;
public:
  Circle(double r):radius(r){}
  void draw()override{
    cout << "Drawing Circle" << endl;
  }
  double area()override{
    return 3.1416*radius*radius;
  }
};

class Rectangle:public Shape{
   double width,height;
public:
   Rectangle(double w, double h):width(w),height(h){}
   void draw()override{
    cout << "drawing Rectangle" << endl;
   }
   double area()override{
    return width*height;
   }
};

int main()
{
    Shape*s;
    Circle c(5.0);
    Rectangle r(4.0,6.0);
    s = &c;
    s->draw();
    cout << s-> area() << endl;

    s = &r;
    s->draw();
    cout << s-> area() << endl;
    return 0;
}