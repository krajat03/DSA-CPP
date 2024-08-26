#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;                          // Give the index of first occurance
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}
int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;                           // Give the index of last occurance
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

int main()
{
    int array[7] = {0, 1, 2, 2, 2, 2, 5};
    // Number of Occurance
    cout << "Total number of occurance of key 2 is: "<< (lastOcc(array,7,2) - firstOcc(array,7,2))+1;

    return 0;
}
