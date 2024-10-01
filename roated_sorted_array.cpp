#include <iostream>
using namespace std;
int targetR_S(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[s] < arr[mid])
        {
            if (arr[s] <= key && key <= arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= key && key <= arr[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[8] = {6, 7, 0, 1, 2, 3, 4, 5};
    cout << targetR_S(arr, 8, 3) << endl;

    return 0;
}