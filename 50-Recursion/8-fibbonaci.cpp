#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if (n < 2)
    {
        // cout << n << " ";
        return n;
    }

    int last = fib(n - 1);
    int secondLast = fib(n - 2);
    return last + secondLast;
}
int main()
{
    cout << fib(7);
}