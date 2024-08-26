#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};
    int length = sizeof(arr) / sizeof(int);
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 2)
        {
            cout << i << " ";
            break;
        }
        
    }
    
    return 0;
}