#include <iostream>
#include <stack>
using namespace std;
class check
{
public:
    bool isValidParenthesis(const string &expression)
    {
        stack<char> st;

        for (int i = 0; i < expression.length(); i++)
        {
            char ch = expression[i];

            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else
            {
                if (!st.empty())
                {
                    char top = st.top();
                    if (ch == ')' && top == '(' || ch == '}' && top == '{' || ch == ']' && top == '[')
                    {
                        st.pop();
                    }

                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};
int main()
{
    check checker;
    string expression;

    cout << "Enter an expression with parentheses: ";
    cin >> expression;

    if (checker.isValidParenthesis(expression))
    {
        cout << "The expression is valid." << endl;
    }
    else
    {
        cout << "The expression is invalid." << endl;
    }

    return 0;
}