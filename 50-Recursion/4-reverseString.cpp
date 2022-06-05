#include <bits/stdc++.h>
using namespace std;
void reverseString(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    cout << s[s.length() - 1];
    s.pop_back();
    reverseString(s);
}
int main()
{
    string s = "Avinash";
    reverseString(s);
}