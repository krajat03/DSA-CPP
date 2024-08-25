#include<iostream>
using namespace std;
void sum(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;

}
int main()
{
int arr[5] = {2,7,1,-4,11};
sum(arr,5);

return 0;
}