#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
void findCombinationSum(vector<int> &candidates, int n, int target, int s, int index, vector<int> &ds)
{
    if (index == n)
    {
        if (target == 0)
        {
            res.push_back(ds);
            return;
        }
        return;
    }

    if (candidates[index] <= target)
    {
        ds.push_back(candidates[index]);
        findCombinationSum(candidates, n, target - candidates[index], s, index, ds);
        ds.pop_back();
    }
    findCombinationSum(candidates, n, target, s, index + 1, ds);
}
int main()
{
}