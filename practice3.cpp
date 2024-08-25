#include <iostream>
using namespace std;
void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    } 
}
int main()
{
    int arr[6] = {2, 4, 6, 8, 10, 12};

    reverseArray(arr, 6);
    printArray(arr, 6);
}