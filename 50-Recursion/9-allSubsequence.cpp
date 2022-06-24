#include <bits/stdc++.h>
using namespace std;
void allSubsequence(int index, int arr[], int n, vector<int> &ds)
{
    if (index == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    allSubsequence(index + 1, arr, n, ds);
    ds.push_back(arr[index]);

    allSubsequence(index + 1, arr, n, ds);
    ds.pop_back();
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    allSubsequence(0, arr, n, ds);
}