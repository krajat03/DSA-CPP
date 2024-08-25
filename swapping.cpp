#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10, c;
    cout << "Before swapping :- " << " a = " << a << ", b = " << b << endl;

    // Now,

    c = a;
    a = b;
    b = c;

    cout << "After swapping :- " << " a = " << a << ", b = " << b << endl;

    return 0;
}