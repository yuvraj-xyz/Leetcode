class Solution {
public:
    
//     RECURSION
    // void solve(int ind, vector<char> &s, int n)
    // {
    //     if(ind>=n)
    //     {
    //         return;
    //     }
    //     swap(s[ind++], s[n--]);
    //     solve(ind, s, n);
    // }
    void reverseString(vector<char>& s) {
        int n = s.size();
        // solve(0, s, n-1);
        
//      2 POINTER
        int i=0; 
        int j = n-1;
        while(i<=j)
        {
            swap(s[i++], s[j--]);
        }
    }
};
