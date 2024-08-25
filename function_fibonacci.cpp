#include <iostream>
using namespace std;
int fibonacci(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 1; i < n; i++)
    {
        int nextnumber = a + b;
        cout << nextnumber << " ";

        a = b;
        b = nextnumber;
    }
}
int main()
{
    int i;
    cin >> i;
    cout << "Fibonacci series till " << i << " is = ";
    cout << fibonacci(i);
    return 0;
}