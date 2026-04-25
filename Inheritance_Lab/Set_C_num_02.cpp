#include <iostream>
using namespace std;

class Vehicle{
    public :

    string brand;
    int speed;
    Vehicle(string brand, int speed)
    {
        this->brand=brand;
        this ->speed=speed;
    }
};

class Car: public Vehicle
{
    public:
    int numberOfDoors;
    Car(string brand, int speed , int numberOfDoors):Vehicle( brand,speed)
    {
        this->numberOfDoors=numberOfDoors;
    }

    void carDetails()
    {
        cout << "Brand: "<< this->brand<<endl;
         cout << "Speed: "<< this->speed<<endl;
         cout << "Number of doors: "<< this->numberOfDoors<<endl;
    }
};

class Bike: public Vehicle
{
    public:
    bool hasCarrier;
    Bike(string brand, int speed , bool hasCarrier):Vehicle( brand,speed)
    {
        this->hasCarrier=hasCarrier;
    }

    void bikeDetails()
    {
        cout << "Brand: "<< this->brand<<endl;
         cout << "Speed: "<< this->speed<<endl;
         if(hasCarrier)
         {
            cout << "Carrier: " << "Yes" << endl;
         }
         else{
            cout << "Carrier: " << "No" << endl;
         }
    }
};

int main()
{
    Car c1("BMW",250,6);
    c1.carDetails();
    cout << endl;
    Bike b1("Honda",150,0);
    b1.bikeDetails();
    cout << endl;
    Bike b2("Hero",250,1);
    b2.bikeDetails();
}
