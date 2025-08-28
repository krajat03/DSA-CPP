#include <iostream>
using namespace std;

int count = 0;
void print()
{
    if (count == 3) // base case
    {
        return;
    }

    cout << count << endl;
    count++;
    print(); // recursive call
    
}

int main()
{
    print();
}