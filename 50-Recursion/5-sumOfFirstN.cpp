#include <bits/stdc++.h>
using namespace std;
int sumOfFirstN(int n)
{
    int sum = 0;
    if (n < 1)
    {
        return sum;
    }
    sum = n + sumOfFirstN(n - 1);
    return sum;
}
int main()
{
    cout << sumOfFirstN(10) << "\n";
}