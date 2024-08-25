#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter an integer: ";
    cin >> a;
    cout << endl;

    int count = 0;
    while (a != 0)
    {
        int bit = a & 1;
        if (bit == 1)
        {
            count++;
        }
        a = a >> 1;
    }

    cout << "Number of set bits: " << count << endl;
    return 0;
}
