# Recursion

Function calling itself, until a specific condition is meet.

### Basic Recursion Problems

- Print Name N times

- Print Linearly from 1 to N

- Print Linearly from N to 1

- Reverse A string using recursion

- Sum of First N Numbers

- Reverse An Array

## Intermediate Recursion Problems<sup>\*\*\*</sup>

1. Print all Sequences

   a contiguous / non contiguous sequences, which follows the order

```
arr = [3,1,2]
{}    ✅ ---> empty is subsequence
3     ✅
1     ✅
2     ✅
3 1   ✅
1 2   ✅
3 2   ✅
3 1 2 ✅ -> contiguous and follow the order
3 2 1 ❌-> not follow the order
```

Code:

```C++
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
```

2. Print Subsequences with given sum

3. Print Any Subsequence with given sum

4. Count the subsequences with given sum

5. Combination Sum (leet code)
