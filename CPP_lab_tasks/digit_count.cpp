
#include <iostream>
using namespace std;
int digit_count(int n)
{
    int count = 0;
    while(n)
    {
        n/=10;
        count++;
    }
    //cout << count <<endl;
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << digit_count(n) <<endl;
}
