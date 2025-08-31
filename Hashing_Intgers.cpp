#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "-> Enter element: ";
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    cout << "\nEnter the number of testcases: ";
    int q;
    cin >> q;

    while (q--)
    {
        int number;
        cout << "\nEnter number: ";
        cin >> number;

        cout << "-> Occurance: " << hash[number] << endl;
    }
}