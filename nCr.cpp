#include <iostream>
using namespace std;
int main()
{
    int n;
    int r;
    int q;
    int fact1 = 1;
    int fact2 = 1;
    int fact3 = 1;
    cout << "n = ";
    cin >> n;
    cout << endl;
    cout << "r = ";
    cin >> r;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        fact1 = fact1 * i;
    }
    cout << "# n ! = " << fact1;
    cout << endl;

    for (int j = 1; j <= r; j++)
    {
        fact2 = fact2 * j;
    }
    cout << "# r ! = " << fact2;
    cout << endl;

    q = (n - r);
    for (int k = 1; k <= q; k++)
    {
        fact3 = fact3 * k;
    }
    cout << "# (n-r)! = " << fact3 << endl;
    cout << "# nCr = " << fact1 / (fact2 * fact3);
}