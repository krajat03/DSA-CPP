#include <iostream>
#include <map>
using namespace std;
int main()
{
    cout << "Enter the size of array: ";
    int n;
    cin >> n;

    int arr[n];

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cout << "-> Enter element: ";
        cin >> arr[i];

        // pre-compute
        mpp[arr[i]]++;
    }

    cout << endl;
    for (auto pair : mpp)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }
}