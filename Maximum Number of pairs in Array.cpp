#include <bits/stdc++.h>
using namespace std;

// Maximum Number of Pairs in Array
int main()
{
    vector<int> nums = {1,3,2,1,3,2,2};

    int n = nums.size();
    sort(nums.begin(), nums.end());
    int max_count = 0;
    for(int i=0; i<n; i++)
    {
        int cnt = count(nums.begin(), nums.end(), nums[i]);
        max_count+=cnt/2;
        i+=(cnt-1);
    }
    int leftover = n-(2*max_count);
    vector<int> ans;
    ans.push_back(max_count);
    ans.push_back(leftover);
    
    for(int i=0; i<ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
