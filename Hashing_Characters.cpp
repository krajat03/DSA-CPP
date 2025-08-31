#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    // pre compute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    cout << "Enter the number of testcases: ";
    int q;
    cin >> q;

    while (q--)
    {
        cout << "\n-> Enter character: ";
        char c;
        cin >> c;

        // fetch
        cout << "-> Freq: " << hash[c - 'a'] << endl;
    }
}