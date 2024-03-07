#include <iostream>
#include <vector>
using namespace std;

string reverse(string str)
{
    if (str.size() == 0 || str.size() == 1)
        return str;
    return reverse(str.substr(1)) + str[0];
}

int main()
{
    cout << reverse("Daksh");
    cout << endl;
    cout << reverse("D");
    return 0;
}