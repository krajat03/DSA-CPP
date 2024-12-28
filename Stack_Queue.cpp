#include <iostream>
#include <queue>
using namespace std;
class MyStack
{
    queue<int> q1, q2;

public:
    void push(int x)
    {
        q2.push(x);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    int pop()
    {
        if (q1.empty())
        {
            cout << "**** Stack is empty ****" << endl;
        }
        int popElement = q1.front();
        q1.pop();
        return popElement;
    }
    void top()
    {
        if (q1.empty())
        {
            cout << "**** Stack is empty ****" << endl;
        }
        else
            cout << "--> Top: " << q1.front() << endl;
    }
    bool empty()
    {
        return q1.empty();
    }
    void display()
    {
        if (q1.empty())
        {
            cout << "NULL" << endl;
        }
        else
        {

            queue<int> mask = q1;
            while (!mask.empty())
            {
                cout << mask.front() << " ";
                mask.pop();
            }
            cout << endl;
        }
    }
};
int main()
{
    MyStack s;
    int opt;
    while (true)
    {
        cout << "1) Push \n2) Pop \n3) Display \n4) Top \n5) Exit \nEnter your choice: ";
        cin >> opt;
        switch (opt)
        {
        case 1:
            int value;
            cout << "--> Enter value: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout << "--> Elements are: ";
            s.display();
            break;
        case 4:
            s.top();
            break;
        case 5:
            cout << "Exiting..." << endl;
            exit(0);
        default:
            if (opt > 5)
            {
                cout << "// Invalid input, try again " << endl;
            }
            break;
        }
    }
}