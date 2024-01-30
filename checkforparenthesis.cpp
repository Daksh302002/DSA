#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> stack;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stack.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (stack.empty())
                return false;
            else if (s[i] == ')' && stack.top() != '(')
                return false;
            else if (s[i] == '}' && stack.top() != '{')
                return false;
            else if (s[i] == ']' && stack.top() != '[')
                return false;
            else
                stack.pop();
        }
    }
    if (stack.empty())
        return true;
    else
        return false;
}
int main()
{
    isValid("()");
    return 0;
}