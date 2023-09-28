/*Q2. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
given, allocate stack of size 5.
Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().*/
#include <iostream>
using namespace std;
#define SIZE 5
class Stack
{
private:
    int top;
    int size;
    int *arr;
    int element;

public:
    Stack()
    {
        this->top = -1;
        this->size = 5;
        this->arr = new int[this->size];
    }

    void peek()
    {
        if (top == -1)
            cout << "stack is empty";
        else
            cout <<" element at"<<"[ "<<top<< " ] top is="<<arr[top];
    }
    int isEmpty()
    {
        if (this->top == -1)
            return 1;
        else
            return 0;
    }
    void push()
    {
        if (isFull())
        {
        }
        else
            this->top++;
        cout << "enter elements ";
        cin >> element;
        this->arr[top] = this->element;
    }
    int isFull()
    {
        if (this->top == size - 1)
            return 1;
        else
            return 0;
    }
    void pop()
    {
        if (top == -1)
            cout << "stack is empty";
        else
        cout<<"element is pop="<<arr[top]<<endl;
            arr[top] = 0;
        top--;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
        cout << "Elements are " << arr[i];
        }
    }
};

int main()
{
    Stack s;
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.pop();
    s.push();
    s.peek();

    return 0;
}