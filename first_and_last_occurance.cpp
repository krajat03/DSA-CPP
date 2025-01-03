#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}
int lastOcc(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    } 
    return ans;
}
int main()
{
    int even[7] = {1, 1, 1, 2, 2, 2, 4};
    cout << "First ocuurance of 1 at index: "<< firstOcc(even, 7, 1) << endl;
    cout << "Last ocuurance of 2 at index: "<< lastOcc(even, 7, 2);
    return 0;

}