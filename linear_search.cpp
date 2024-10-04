#include <bits/stdc++.h>
using namespace std;

int main()
{

    int key = 0;
    cout << "Key: ";
    cin >> key;
    cout << endl;

    int index = -1;
    vector<int> array = {1, 2, 8, 10, 16};

    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] == key)
        {
            index = i;
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
