#include <bits/stdc++.h>
using namespace std;
void allSubsequenceWithGivenSum(int index, int arr[], int n, int sum, vector<int> &ds, int s)
{
    if (index == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }

        return;
    }
    ds.push_back(arr[index]);
    s += arr[index];
    allSubsequenceWithGivenSum(index + 1, arr, n, sum, ds, s);

    ds.pop_back();
    s -= arr[index];
    allSubsequenceWithGivenSum(index + 1, arr, n, sum, ds, s);
}
int main()
{
    int n = 3;
    int arr[] = {3, 1, 2};
    vector<int> ds;
    int sum = 3;
    int index = 0;
    allSubsequenceWithGivenSum(index, arr, n, sum, ds, 0);
}