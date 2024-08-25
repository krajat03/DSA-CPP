#include <iostream>
using namespace std;

int main()
{
    int ans = 0;
    int n;
    cout << "N = ";
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            cout << "0";
            return 0;
        }

        ans = (ans * 10) + digit;
        n = n / 10;
    }

    cout << "Reversed number: " << ans << endl; 
    return ans;                                 
}

