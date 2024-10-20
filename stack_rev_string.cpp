#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str = "rajat";
    stack<int> st;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        st.push(ch);
    }

    string ans = "";

    while (!st.empty())
    {
        char ch = st.top();
        ans.push_back(ch);

        st.pop();
    }
    
    cout << "Reverse string is: " << ans << endl;
    

return 0;
}