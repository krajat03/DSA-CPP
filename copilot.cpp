#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int n;
    cin >> a >> b;
    char const *arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = a - 1; i = a - 1;)
    {
        if (a <= 9 || b <= 9)
        {
            cout << arr[i] << endl;
            // break;
        }
        else
        {
            for (int j = 10; j <=a; j++)
            {
                if (a % 2 == 0)
                {
                    cout << "even";
                }
                else if (b % 2 == 0)
                {
                    cout << "even";
                }
                else
                {
                    cout << "odd";
                }
            }
        }
    }
    if (a <= 9 || b <= 9)
    {

        for (int j = b; j = b;)
        {
            cout << arr[j-1] << endl;
            // break;
        }
    }
    else
    {
        for (int j = 10; j <= b; j++)
        {
            if (a % 2 == 0)
            {
                cout << "even";
            }
            else if (b % 2 == 0)
            {
                cout << "even";
            }
            else
            {
                cout << "odd";
            }
        }
    }

    return 0;
}