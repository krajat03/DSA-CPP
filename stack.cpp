#include <iostream>
using namespace std;
class stack
{
public:
    int top = -1;
    int size;
    int *arr;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is full" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            cout << "Pop element is = " << arr[top] << endl;
            top--;
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }
    void peek()
    {
        if (top >= 0)
        {
            cout << "Top element is =  " << arr[top] << endl;
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }
    bool isEmpty()
    {
        if (top >= 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    void display()
    {
        int i = top;
        cout << "Elemtnts are: ";
        while (i >= 0)
        {
            cout << arr[i] << ", ";
            i--;
        }
        cout << endl;
    }
};
int main()
{
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.display();

    s.pop();
    s.pop();

    s.display();

    s.peek();
    return 0;
}