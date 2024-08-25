#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter an integer = ";
    cin >> a;
    cout << endl;
    int count = 0;
    int bit = 0;
    int n;
    while (a != 0)
    {
        bit = a & 1;
        if (bit == 1)
        {
            count = count + 1;
        }
        a = a >> 1;
    }
    cout << count << endl;
}