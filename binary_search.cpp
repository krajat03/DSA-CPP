#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        if (key < arr[mid])
        {
            end = end - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {1, 7, 9, 11, 16, 17};
    int odd[5] = {2, 6, 9, 13, 14};

    int evenIndex = binarySearch(even, 6, 16);
    cout << "Index of 16 is: " << evenIndex << endl;
    int oddIndex = binarySearch(odd, 5, 6);
    cout << "Index of 6 is: " << oddIndex;
}