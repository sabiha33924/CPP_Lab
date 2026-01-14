#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,8,1,7,4,3,9};
    int sum = 0;
    int lenth = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<lenth; i++)
    {
        sum+=a[i];
    }
    cout << sum << endl;
    return 0;
}
