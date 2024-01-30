#include <iostream>
#include <stack>
using namespace std;

void reverSring(string s, int n)
{
    stack<char> st;
    for (int i = 0; i <= n; i++)
    {
        st.push(s[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        s[i] = st.top();
        st.pop();
    }
}

int main()
{
    char s[50];
    cout << "enter the string ";
    cin >> s;
    reverSring(s, 50);

    return 0;
}