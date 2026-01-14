#include <iostream>
using namespace std;
int eligibility (int age)
{
    if (age>=18)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int age;
    cin >> age;
    int is_eligible = eligibility(age);
    if(is_eligible)
    {
        cout << "Eligible" <<endl;
    }
    else
    {
        cout << "Not Eligible" <<endl;
    }
}
