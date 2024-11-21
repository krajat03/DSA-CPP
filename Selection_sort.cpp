#include <iostream>
using namespace std;
class selectionSort
{
public:
    void get_input(int arr[], int size)
    {
        cout << "Enter elements: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << endl;
    }
    void sort(int arr[], int size)
    {
        for (int i = 0; i < size - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }
            swap(arr[minIndex], arr[i]);
        }
    }
    void get_output(int arr[], int size)
    {
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
    selectionSort array1;
    array1.get_input(arr, 5);
    array1.sort(arr, 5);
    array1.get_output(arr, 5);
}