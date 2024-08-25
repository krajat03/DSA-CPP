#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int num = 3;
    while (a != b)
    {
        switch (num)
        {
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;

        default:
            cout << "Don't know" << endl;
            break;
        }
        break;
    }

    return 0;
}