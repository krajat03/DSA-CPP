#include <iostream>
using namespace std;
void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
    }
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "\nEnter the size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "-> Enter element: ";
        cin >> arr[i];
    }

    cout << "\nArray is:- ";
    print_array(arr, n);

    selection_sort(arr, n);

    cout << "Sorted array is:- ";
    print_array(arr, n);
}