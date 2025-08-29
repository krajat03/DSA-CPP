#include <iostream>
using namespace std;

void reverse(int arr[], int i, int n)
{
    if (i > n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    reverse(arr, i + 1, n);
}

int main()
{
    cout << "Enter size of array: ";
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "-> Enter element: ";
        cin >> arr[i];
    }

    reverse(arr, 0, n);

    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}