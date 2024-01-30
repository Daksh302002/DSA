#include <iostream>
#include <stack>
using namespace std;

int EvalutionPreFix(string s)
{
    stack<int> stack;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            stack.push(s[i] - '0');
        }
        else
        {
            int op1 = stack.top();
            stack.pop();
            int op2 = stack.top();
            stack.pop();
            switch (s[i])
            {
            case '+':
                stack.push(op1 + op2);
                break;
            case '-':
                stack.push(op1 - op2);
                break;
            case '*':
                stack.push(op1 * op2);
                break;
            case '/':
                stack.push(op1 / op2);
                break;
            }
        }
    }
    return stack.top();
}

int main()
{
    cout << EvalutionPreFix("-+*23*549");
    return 0;
}