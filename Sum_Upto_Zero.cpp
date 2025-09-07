#include <iostream>
using namespace std;
int *sumUptoZero(int n)
{
    int *ans = new int[n];

    int st = 0, e = n - 1;
    int posVal = 1, negVal = -1;

    while (st <= e)
    {
        if (st == e)
        {
            ans[st] = 0;
            return ans;
        }
        ans[st] = posVal++;
        ans[e] = negVal--;
        st++;
        e--;
    }
    return ans;
}

int main()
{
    int n;
    cout << "\n-> Enter number: ";
    cin >> n;

    int *ans = sumUptoZero(n);

    cout << "Array is:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
}