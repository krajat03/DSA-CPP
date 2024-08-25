#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cout << "Num - ";
    cin >> num;

    string s = "";

    while (num > 0)
    {
        int temp= num%2;
        s+=to_string(temp);
        num/=2;
    }
    reverse(s.begin(), s.end());

    cout << s;

    return 0;
    
}
