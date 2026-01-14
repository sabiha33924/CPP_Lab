#include <iostream>
using namespace std;

int main()
{
    int num1,num2,num3;
    cin >>num1;
    cin >>num2;
    cin >>num3;
    if (num1>=num2&&num1>=num3)
    {
        cout << "the largest number:"<< num1 << endl;

    }
    else if(num2>=num1&&num2>=num3)
    {
        cout << "the largest number:"<< num2 << endl;
    }
    else
    {
        cout << "the largest number:"<< num3 << endl;
    }
    return 0;
}

