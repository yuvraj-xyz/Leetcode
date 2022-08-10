class Solution {
public:
    void fun(int i, int n, vector<int> &sub, vector<vector<int>> &res, vector<int> &nums)
{
    if(i==n)
    {
        res.push_back(sub);
        return;
    }
    sub.push_back(nums[i]);
    fun(i+1, n, sub, res, nums);
    sub.pop_back();
    fun(i+1, n, sub, res, nums);
}
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> sub;
        vector<vector<int>> res;
        fun(0, n, sub, res, nums);
        return res;
    }
};
