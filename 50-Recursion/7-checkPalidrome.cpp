#include <bits/stdc++.h>
using namespace std;
void checkPal(string s, int i)
{
    if (i == s.length())
    {
        cout << "Yes its a Palindrome\n";
        return;
    }
    else if (s[i] != s[s.length() - 1 - i])
    {
        cout << "No Not a Palindrome\n";
        return;
    }
    checkPal(s, i + 1);
}

int main()
{
    string pal = "ABBA";
    string notPal = "ABAB";
    checkPal(notPal, 0);
    cout << "\n";
    checkPal(pal, 0);
}