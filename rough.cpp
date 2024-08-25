#include<iostream>
using namespace std;
int main()
{
int a = 2;
int ans = 0;
for (int i = 1; i < 11; i++)
{
    ans = a * i;
    cout << a << "x" << i << "=" << ans << endl;
}


return 0;
}