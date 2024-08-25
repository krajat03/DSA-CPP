#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlt(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int n;
    int even[8] = {2, 4, 6, 8, 10, 12, 0, 1};  // 4,2 8 6 12 10 1 0
    int odd[5] = {1, 3, 5, 7, 9}; // 3 1 7 5 9
    int x[7] = {-1,2,4,-1,2,3,4}; // 2 -1 -1 4 3 2 4 

    printArray(even,8);
    swapAlt(even, 8);
    printArray(even, 8);
    swapAlt(odd, 5);
    printArray(odd,5);
    swapAlt(x, 7);
    printArray(x,7);
    return 0;
}