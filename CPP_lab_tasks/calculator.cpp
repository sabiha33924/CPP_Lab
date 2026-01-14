#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a;
    cin >> b;
    char ope;
    cin >> ope;
    switch(ope)
    {
    case '+':
        cout << a+b << endl;
        break;
    case '-':
        cout << a-b << endl;
        break;
    case '*':
        cout << a*b << endl;
        break;
    case '/':
        cout << a/b << endl;
        break;
    default:
        cout << "wrong input" << endl;

    }
    return 0;
}
