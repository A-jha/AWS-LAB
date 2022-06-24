#include <bits/stdc++.h>
using namespace std;
int countSubsequenceWithGivenSum(int n, int arr[], int sum, int s, int index, vector<int> &ds)
{
    if (index == n)
    {
        if (s == sum)
        {
            return 1;
        }
        return 0;
    }
    ds.push_back(arr[index]);
    s += arr[index];
    int l = countSubsequenceWithGivenSum(n, arr, sum, s, index + 1, ds);

    ds.pop_back();
    s -= arr[index];
    int r = countSubsequenceWithGivenSum(n, arr, sum, s, index + 1, ds);

    return l + r;
}
int main()
{
    int n = 3;
    int arr[] = {3, 1, 2};
    int sum = 3;
    int s = 0;
    int index = 0;
    vector<int> ds;
    cout << countSubsequenceWithGivenSum(n, arr, sum, s, index, ds) << "\n";
}