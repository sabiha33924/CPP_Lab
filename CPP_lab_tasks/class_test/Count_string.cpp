#include <iostream>
using namespace std;

int main()
{
    string text = "ABEFGHIJKLMNOPQRSTUVWXYZAAAAABB";
    int counter[26] = {0};

    /*
    A = 65 - 65 = counter[0] = count of A
    B = 66 - 65 = counter[1] = count of B
    C = 67 - 65 = counter[2] = count of C
    */
    for (int i = 0; text[i]; i++)
    {
        counter[text[i] - 65]++;
        //* counter[text[1]] = counter['B'] = counter[66 - 65] = counter[1]
    }

    cout << "Maximum occurance of a character: ";
    
    
    int highest_frequency = 0;
    int highest_frequency_index = 0;

    //* 50,60,20,30,40
    int largest = 50;
    a[i] > largest = largest = a[i]


    for (int i = 0; i < 26; i++)
    {
        if(counter[i] > highest_frequency) {

        }


        if (counter[i] == 0)
        {
            cout << (char)(i + 65) << " ";
            // cout << (char)(i + 65) << "=" << counter[i] << endl;
        }
    }

    return 0;
}