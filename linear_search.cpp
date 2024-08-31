#include <iostream>
using namespace std;

int main()
{
    
    int key;
    cout << "Key: ";
    cin >> key;
    cout << endl;

    int index = -1;
    int array[5] = {1, 2, 8, 10, 16};
    int length = sizeof(array) / sizeof(int);

    for (int i = 0; i < length; i++)
    {
        if (array[i] == key)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        cout << "The index is: " << index;
    }
    else
    {
        cout << "Invalid Key";
    }

    return 0;
}
