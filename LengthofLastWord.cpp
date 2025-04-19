#include <iostream>
using namespace std;
int countLength(string str)
{
    int i = str.length() - 1;
    int count = 0;
    while (i >= 0 && str[i] == ' ')
    {
        i--;
    }
    while (i >= 0 && str[i] != ' ')
    {
        i--;
        count++;
    }
    return count;
}

int main(void)
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    cout << "\n-> String is: " << str << endl;
    int ans = countLength(str);
    cout << "-> Length of last word is: " << ans << endl;
    
}