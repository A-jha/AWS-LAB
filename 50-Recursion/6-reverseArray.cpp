#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int n)
{
    if (n < 1)
    {
        return;
    }
    cout << arr[n - 1] << " ";
    reverseArray(arr, n - 1);
}

int *reverseArrayReturn(int arr[], int n, int l, int r)
{
    if (l >= r)
    {
        return arr;
    }
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    reverseArrayReturn(arr, n, l + 1, r - 1);
    return arr;
}
int main()
{
    int n = 6;
    int arr[n] = {1, 2, 3, 4, 5, 6};

    int *arr1 = reverseArrayReturn(arr, n, 0, 5);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
}