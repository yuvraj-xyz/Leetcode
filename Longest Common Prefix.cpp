#include <bits/stdc++.h>
using namespace std;

// Longest Common Prefix
int main()
{
    vector<string> strs = {"flower","flow","flight"};

    int n = strs.size();
    string res;
    sort(strs.begin(), strs.end());
    string a = strs[0];
    string b = strs[n-1];               // We took first and last string after sorting because they are most unlike to each other!
    for(int i=0; i<strs[0].size(); i++)
    {
        if(a[i]==b[i])
        {
            res.push_back(a[i]);
        }
        else
        {
            break;
        }
    }
    cout << res;
}
