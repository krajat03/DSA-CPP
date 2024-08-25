#include<iostream>
using namespace std;
int main()
{
long int n;
long int m = n;

cout << "n = ";
cin >> n;
cout << endl;
long int mask = 0;
if (n==0)
{
    cout << 1 << endl;
    // return 1;
}

while (m!=0)
{
    mask = (mask << 1) | 1;
    m = m >> 1;
}
long int ans = (~n) & mask;
cout << ans;
// return ans;
}