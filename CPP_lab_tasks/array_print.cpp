#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,8,1,7,9,2,0};

    int lenth = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<lenth; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
