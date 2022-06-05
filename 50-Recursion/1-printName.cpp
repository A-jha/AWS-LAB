#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "Avinash" << n << "\n";
    print(n - 1);
}
int main()
{
    print(5);
}
// Output
/*
Avinash5
Avinash4
Avinash3
Avinash2
Avinash1
*/