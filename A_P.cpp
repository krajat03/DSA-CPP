#include<iostream>
using namespace std;
int AP(int n ){
    int ans = (3*n + 7);
    return ans;
}
int main()
{
    int n;
    cout << "Choose nth term - ";
    cin >> n;
    cout << endl;
    cout << "AP of " << n << "th term is = "<< AP(n);

return 0;
}