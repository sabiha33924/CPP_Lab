#include <iostream>
using namespace std;

class Animal
{
public:
    string animalID;
    string name;
    int age;
    void setAnimalDetails(string animalID, string name, int age);
    void displayAnimalDetails();
};

class Dog : public Animal
{
public:
    string breed;
    bool isVaccinated;
    void setDogDetails(string animalID, string name, int age, string breed, bool isVaccinated);
    void displayDogDetails();
};

class Cat : public Animal
{
public:
    string furcolor;
    bool isIndoor;
    void setCatDetails(string animalID, string name, int age, string furcolor, bool isIndoor);
    void displayCatDetails();
};

class ServiceDog : public Dog
{
public:
    string badgeNumber;
    string assignedUnit;
    int yearOfService;
    void setServiceDetails(string animalID, string name, int age, string breed, bool isVaccinated, string badgeNumber, string assignedUnit, int yearOfService);
    void displayServiceDetails();
    void displayFullProfile();
};

int main()
{
    Cat c;
    cout << "CAT DETAILS : " << endl;
    c.setCatDetails("cat-4004", "Glorey", 6, "black", 1);
    c.displayCatDetails();
    cout << endl;
    cout <<"DOG DETAIL : " << endl;
    Dog d;
    d.setDogDetails("dog-1003", "Tommy", 12, "White", 0);
    d.displayDogDetails();
    cout << endl;
    ServiceDog s;
    s.setServiceDetails("sse-556", "Tommy", 6, "white", 0, "ssg-123", "B", 2025);
    cout << "FULL DETAILS : " << endl;
    s.displayFullProfile();
    return 0;
}

void Animal ::setAnimalDetails(string animalID, string name, int age)
{
    this->animalID = animalID;
    this->name = name;
    this->age = age;
}
void Animal ::displayAnimalDetails()
{
    cout << "Animal ID:" << this->animalID << endl;
    cout << "Name:" << this->name << endl;
    cout << "Age:" << this->age << endl;
}

void Dog::setDogDetails(string animalID, string name, int age, string breed, bool isVaccinated)
{
    this->animalID = animalID;
    this->name = name;
    this->age = age;
    this->breed = breed;
    this->isVaccinated = isVaccinated;
}
void Dog::displayDogDetails()
{
    displayAnimalDetails();
    cout << "Breed:" << this->breed << endl;
    cout << "Vaccinated:" << this->isVaccinated << endl;
}

void Cat::setCatDetails(string animalID, string name, int age, string furcolor, bool isIndoor)
{
    this->animalID = animalID;
    this->name = name;
    this->age = age;
    this->furcolor = furcolor;
    this->isIndoor = isIndoor;
}
void Cat::displayCatDetails()
{
    displayAnimalDetails();
    cout << "Far Color:" << this->furcolor << endl;
    cout << "Indoor:" << this->isIndoor << endl;
}

void ServiceDog ::setServiceDetails(string animalID, string name, int age, string breed, bool isVaccinated, string badgeNumber, string assignedUnit, int yearOfService)
{
    this->animalID = animalID;
    this->name = name;
    this->age = age;
    this->breed = breed;
    this->isVaccinated = isVaccinated;
    this->badgeNumber = badgeNumber;
    this->assignedUnit = assignedUnit;
    this->yearOfService = yearOfService;
}
void ServiceDog::displayServiceDetails()
{
    displayDogDetails();
    cout << "Badge Number:" << this->badgeNumber << endl; 
    cout << "Assigne Unit:" << this->assignedUnit << endl;
    cout << "Year of Service:" << this->yearOfService << endl;
}
void ServiceDog ::displayFullProfile()
{
   
    displayDogDetails();
    cout << endl;
    displayServiceDetails();
}