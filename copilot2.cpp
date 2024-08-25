#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    const char* arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (a >= 1 && a <= 9)
    {
        cout << arr[a - 1] << endl;
    }
    else
    {
        if (a % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }

    if (b >= 1 && b <= 9)
    {
        cout << arr[b - 1] << endl;
    }
    else
    {
        if (b % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }

    return 0;
}
