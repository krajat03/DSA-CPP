#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    int top = -1;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.pop();

    stack<int> temp = st;
    while (!temp.empty())
    {
        cout << temp.top() << endl;
        temp.pop();
    }

    cout << "Empty:- " << st.empty() << endl;
    cout << "Size:- " << st.size() << endl;

    return 0;
}