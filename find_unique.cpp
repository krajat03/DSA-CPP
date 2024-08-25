#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
    return ans;
}
int main()
{
        int arr[7] = {1, 3, 1, 3, 2, 7, 2};
        findUnique(arr, 7);
        return 0;
  
}
