#include <bits/stdc++.h>
using namespace std;
bool anySubsequenceWithGivenSum(int index, int arr[], int n, vector<int> &ds, int sum, int s)
{
    if (index == n)
    {
        if (sum == s)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << "\n";
            return true;
        }
        else
        {
            return false;
        }
    }

    ds.push_back(arr[index]);
    s += arr[index];
    if (anySubsequenceWithGivenSum(index + 1, arr, n, ds, sum, s) == true)
    {
        return true;
    }

    s -= arr[index];
    ds.pop_back();
    if (anySubsequenceWithGivenSum(index + 1, arr, n, ds, sum, s) == true)
    {
        return true;
    }

    return false;
}
int main()
{
    int index = 0;
    int n = 3;
    int arr[] = {3, 1, 2};
    int sum = 3;
    vector<int> ds;
    int s = 0;
    anySubsequenceWithGivenSum(index, arr, n, ds, sum, s);
}