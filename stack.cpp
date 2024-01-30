#include <iostream>
using namespace std;
#define n 100

class stack
{
private:
    int top = -1;
    int arr[n];

public:
    void push(int val)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow " << endl;
        }
        top++;
        arr[top] = val;
        // cout << "Pushed: " << val << endl;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow";
            return;
        }
        top--;
    }

    int StackTop()
    {
        return arr[top];
    }
    bool Empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void print()
    {
        cout << "stack: ";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.print();
    st.pop();
    cout<<endl;
    st.print();
    return 0;
}