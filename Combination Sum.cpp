class Solution {
private:
    void fun(int i, vector<vector<int>> & res, vector<int> &sub, vector<int> &candidates, int target)
{
    if(i==candidates.size())
    {
        if(target==0)
        {
            res.push_back(sub);
        }
        return;
    }
    if(candidates[i]<=target)
    {
        sub.push_back(candidates[i]);
        fun(i, res, sub, candidates, target-candidates[i]);
        sub.pop_back();
    }

    fun(i+1, res, sub, candidates, target);
}
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> res;
        vector<int> sub;
        fun(0, res, sub, candidates, target);
        return res;
    }
};
