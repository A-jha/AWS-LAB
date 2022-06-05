#include <bits/stdc++.h>
using namespace std;
void print1ToN(int n)
{
    if (n < 1)
    {
        return;
    }
    print1ToN(n - 1);
    /* after calling the function such that when
    function are poping from the stack at that
    time print function will execute and go from 1 to n*/
    cout << n << " ";
}
int main()
{
    print1ToN(5);
}