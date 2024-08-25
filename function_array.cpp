#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl;
    cout << "Printing done";
    
}
int main()
{
    int first[5] = {2,4,6,8,10};
    int n;
    printarray(first,5);

return 0;
} 