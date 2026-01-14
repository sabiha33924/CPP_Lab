#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a>0)
    {
        cout << "positive number" << endl;

    }
    else if(a<0)
    {
        cout << "negative number" << endl;
    }
    else
    {
        cout << "zero" << endl;
    }
    return 0;
}
