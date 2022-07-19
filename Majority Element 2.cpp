#include <bits/stdc++.h>
using namespace std;

// Majority Element II 
int main()
{
    vector<int> nums = {3,2,3};

    int n = nums.size();
    double m = n/3;
    sort(nums.begin(),nums.end());
    vector<int> res;
    for(int i=0; i<n; i++)
    {
        int cnt = count(nums.begin(), nums.end(), nums[i]);
        if(cnt>m)
        {
            res.push_back(nums[i]);
            i+=cnt-1;
        }
    }
    for(int i=0; i<res.size(); i++)
    {
        cout << res[i] << " ";
    }
}
