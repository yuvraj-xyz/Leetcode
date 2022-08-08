class Solution {
public:
void fun(int i, int sum, vector<vector<int>> &res, vector<int> &sub, vector<int> &candidates, int target)
{
    if(sum==target)
    {
        res.push_back(sub);
    }
    else
    {
        for(int j=i; j<candidates.size(); j++)
        {
            if(sum+candidates[j] <= target)
            {
                sub.push_back(candidates[j]);
                fun(j, sum+candidates[j], res, sub, candidates, target);
                sub.pop_back();
            }
        }
    }
}
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        reverse(candidates.begin(), candidates.end());
        vector<int> sub;
        vector<vector<int>> res;
        fun(0, 0, res, sub, candidates, target);
        return res;
    }
};

