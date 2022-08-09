#include <bits/stdc++.h>
using namespace std;

// Combination Sum 2
void fun(int i, vector<int> &sub, vector<vector<int>> &res, vector<int> candidates, int target)
{
    if(target==0)
    {
        res.push_back(sub);
        return;
    }
    for(int j=i; j<candidates.size(); j++)
    {
        if(j>i && candidates[j]==candidates[j-1])
        {
            continue;
        }
        if(candidates[j]>target)
        {
            break;
        }
        sub.push_back(candidates[j]);
        fun(j+1, sub, res, candidates, target-candidates[j]);
        sub.pop_back();
    }
}
int main()
{
    vector<int> candidates = {2,5,2,1,2};
    int target = 5;

    sort(candidates.begin(), candidates.end());
    vector<int> sub;
    vector<vector<int>> res;
    fun(0, sub, res, candidates, target);
    for(int i=0; i<res.size(); i++)
    {
        for(int j=0; j<res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
