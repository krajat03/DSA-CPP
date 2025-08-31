#include <iostream>
#include <map>
using namespace std;
int main()
{
    cout << "Enter a string: ";
    string s;
    cin >> s;

    // pre-compute
    map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    cout << "Frequencies:- " << endl;
    for (auto pair : mpp)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }
}