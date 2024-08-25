#include <iostream>
using namespace std;
void printCounting(int n)
{
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int a;
    printCounting(a);

    return 0;
}