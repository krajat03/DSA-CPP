#include <iostream>
using namespace std;
int main()
{
    int a, c;
    int b = 1;

    cout << "Table of - ";
    cin >> a;

    for (b = 1; b < 11; b++)
    {
        c = a * b;
        if (c == 16)
        {
            continue;
        }
        else
        {
            cout << a << " X " << b << " = " << c << endl;
        }
    }

    // return 0;
}