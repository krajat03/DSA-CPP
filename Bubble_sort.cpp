#include <iostream>
using namespace std;
class bubbleSort{
public:
    void get_input(int arr[], int size)
    {
        cout << "Enter element: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << endl;
    }
    void sort(int arr[], int size)
    {
        for (int i = 1; i < size; i++)
        {
            for (int j = 0; j < size - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
    void get_output(int arr[], int size)
    {
        cout << "Sorted array is: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    int arr[5];
    bubbleSort array1;
    array1.get_input(arr, 5);
    array1.sort(arr, 5);
    array1.get_output(arr, 5);
}