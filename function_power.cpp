#include <iostream>
using namespace std;

int power(int num1, int num2)
{
    cin >> num1 >> num2;
    int ans = 1;
    for (int i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }
    return ans;
}

int main()
{
    int a, b;
    int answer = power(a, b);
    cout << answer << endl;
  
    int c,d;
    cout << power(c,d);


    return 0;
}