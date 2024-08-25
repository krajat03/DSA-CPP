#include <iostream>
using namespace std;
bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int key;
    cout << "Enter an element searching for - ";
    cin >> key;
    cout << endl;

    int arr[] = {2, 8, 16, 5, 3, 4, 11, -54, 1};
    bool found = search(arr, 9, key);
    if (found)
    {
        cout << "Key is present" << endl;
    }
    else
        cout << "Key is absent";

    return 0;
}