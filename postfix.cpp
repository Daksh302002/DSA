#include <iostream>
#include <stack>
using namespace std;

int EvalutionPostfix(string s)
{
    stack<int> stack;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            stack.push(s[i] - '0');
        }
        else
        {
            int op2 = stack.top();
            stack.pop();
            int op1 = stack.top();
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
    cout << EvalutionPostfix("23*54*+9-");
    return 0;
}