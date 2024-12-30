#include <iostream>
#include <stack>
using namespace std;
class MyQueue
{
    stack<int> input;
    stack<int> output;
    int peekElement = -1;

public:
    void push(int x)
    {
        if (input.empty())
        {
            peekElement = x;
        }
        input.push(x);
    }
    int pop()
    {
        if (output.empty())
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }
        int val = output.top();
        output.pop();
        return val;
    }
    int peek()
    {
        if (output.empty())
        {
            return peekElement;
        }
        return output.top();
    }
    bool empty()
    {
        if (input.empty() && output.empty())
        {
            return true;
        }
        return false;
    }
    void outputDisplay()
    {
        stack<int> temp = output; // Create a copy to preserve the original stack
        cout << "Queue is: ";
        while (!temp.empty())
        {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
};
int main()
{
    MyQueue q1;
    // Push elements --->
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);

    // Pop elements --->
    cout << "Pop element is: " << q1.pop() << endl;
    cout << "Pop element is: " << q1.pop() << endl;

    // Peek elements --->
    cout << "Peek element is: " << q1.peek() << endl;

    // Check empty or not --->
    cout << "Check empty--> " << q1.empty() << endl;

    // Display Output
    q1.outputDisplay();
    return 0;
}