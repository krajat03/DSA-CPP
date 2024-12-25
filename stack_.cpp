#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    int size;
    cout << "Enter the size of stack: ";
    cin >> size;
    int n;
    int choice;
    int top = -1;
    int element;
    while (true)
    {
        cout << "1) Push \n2) Pop \n3) Display \n4) Exit \n->Enter Your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            if (top == size - 1)
            {
                cout << "**** Stack overflow ****" << endl;
                exit(0);
            }
            else
            {
                top++;
                cout << "Enter element: ";
                cin >> element;
                st.push(element);
            }
            break;
        }
        case 2:
        {
            if (top < 0)
            {
                cout << "**** Stack underflow ****" << endl;
            }
            else
            {
                cout << "--> Pop element is: " << st.top() << endl;
                st.pop();
                top--;
            }
            break;
        }
        case 3:
        {
            if (st.empty())
            {
                cout << "Stack is empty." << endl;
            }
            else
            {
                stack<int> temp = st;
                cout << "Size of stack: " << st.size() << endl;
                cout << "--> Stack elements are: ";
                while (!temp.empty())
                {
                    cout << temp.top() << " ";
                    temp.pop();
                }
                cout << endl;
            }
            break;
        }
        case 4:
        {
            cout << "Exiting the program. Goodbye!" << endl;
            exit(0);
        }
        default:
        {
            cout << "Invalid choice. Please try again." << endl;
        }
        }
    }
    return 0;
}