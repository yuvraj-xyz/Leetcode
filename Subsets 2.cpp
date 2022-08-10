#include <bits/stdc++.h>
using namespace std;

// Subsets 2
void fun(int ind, vector<int> &sub, vector<vector<int>> &res, vector<int> &nums)
{
    res.push_back(sub);
    for(int i=ind; i<nums.size(); i++)
    {
        if(i!=ind && nums[i]==nums[i-1])
        {
            continue;
        }
        sub.push_back(nums[i]);
        fun(i+1, sub, res, nums);
        sub.pop_back();
    }
}
int main()
{
    vector<int> nums = {1,2,2};

    vector<int> sub;
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    fun(0, sub, res, nums);

    for(int i=0; i<res.size(); i++)
    {
        for(int j=0; j<res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
