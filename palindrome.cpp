#include <iostream>
using namespace std;
int main()
{
    int reverse = 0;
    int a;
    cin >> a;
    int originalNumber = a;
    while (a != 0)
    {
        reverse = reverse * 10 + a % 10;
        a = a / 10;
    }
    cout << reverse << endl;
    if (originalNumber == reverse)
    {
        cout << "Palindrome";
    
    }
    else
    cout << "Not palindrome";
    return 0;
}