#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a string: ";
    string s;
    cin >> s;

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    cout << "Enter the number of testcases: ";
    int q;
    cin >> q;

    while (q--)
    {
        cout << "\nEnter a character: ";
        char c;
        cin >> c;

        cout << "-> Freq: " << hash[c] << endl;
    }
}