#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "bob";
    int length = a.length();

    string rev;
    for (int i = length - 1; i >= 0; i--)
    {
        rev += a[i];
    }
    cout << "Reversed string: " << rev << endl;
    if (a == rev)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    

    return 0;
}