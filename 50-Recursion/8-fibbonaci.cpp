#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if (n < 2)
    {
        // cout << n << " ";
        return n;
    }

    int first = fib(n - 1);
    int second = fib(n - 2);
    return first + second;
}
int main()
{
    cout << fib(10);
}