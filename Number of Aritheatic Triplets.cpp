#include <bits/stdc++.h>
using namespace std;

// Number of Arithmetic Tiplets
int main()
{
    vector<int> nums = {4,5,6,7,8,9};
    int diff = 2;

    int n = nums.size();
    int count = 0;
    sort(nums.begin(), nums.end());
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}
