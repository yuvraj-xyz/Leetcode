class Solution {
public:
    
    bool isPalindrome(string &s, int start, int end)
    {
        while(start<=end)
        {
            if(s[start++] != s[end--])
            {
                return false;
            }
        }
        return true;
    }
    void solve(int ind, vector<string> &sub, vector<vector<string>> &res, string &s, int n)
    {
        if(ind==n)
        {
            res.push_back(sub);
            return;
        }
        for(int i=ind; i<n; i++)
        {
            if(isPalindrome(s, ind, i)==true)
            {
                sub.push_back(s.substr(ind, i - ind + 1));
                solve(i+1, sub, res, s, n);
                sub.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<vector<string>> res;
        vector<string> sub;
        solve(0, sub, res, s, n);
        return res;
    }
};
