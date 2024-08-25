#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a= "Hello World";
    // Print ASCII values of each character in the string
    cout << "ASCII values: ";
    for (char c : a) {
        cout << c << " : " << static_cast<int>(c) << ", ";
    }
    cout << endl;

}