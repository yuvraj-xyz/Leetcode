#include <bits/stdc++.h>
using namespace std;

// Permutations 
void fun(int ind, vector<vector<int>> &res, vector<int> &nums)
{
    if(ind == nums.size())
    {
        res.push_back(nums);
        return;
    }
    for(int i=ind; i<nums.size(); i++)
    {
        swap(nums[ind], nums[i]);
        fun(ind+1, res, nums);
        swap(nums[ind], nums[i]);
    }
}
int main()
{
    vector<int> nums = {1,2,3};

    vector<vector<int>> res;
    fun(0, res, nums);
    for(int i=0; i<res.size(); i++)
    {
        for(int j=0; j<res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
