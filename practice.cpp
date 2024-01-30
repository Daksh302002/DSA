#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>
using namespace std;

class ListNode
{
private:
    int data;
    ListNode *next;

public:
    string addbinary(string a, string b)
    {
        int alen = a.size();
        int blen = b.size();
        string s;
        if (alen > blen)
        {
            b = s.append(alen - blen, '0') + b;
        }
        if (alen < blen)
        {
            a = s.append(blen - alen, '0') + a;
        }
        int carry = 0;
        string ans;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            int sum;
            sum = (a[i] - '0') + (b[i] - '0') + carry;
            ans = to_string(sum % 2) + ans;
            carry = sum / 2;
        }
        if (carry != '0')
            ans = '1' + ans;
    }
};

int main()
{
    return 0;
}