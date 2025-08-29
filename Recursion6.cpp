#include <iostream>
using namespace std;

bool checkPl(int i, string s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return checkPl(i + 1, s);
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (checkPl(0, s))
        cout << s << " is a palindrome." << endl;
    else
        cout << s << " is not a palindrome." << endl;
}
