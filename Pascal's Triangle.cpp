class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> res;
        for(int i=0; i<numRows; i++)
        {
            vector<int> temp;
            for(int j=0; j<=i; j++)
            {
                int tmp;
                if(j==0 || j==i)
                {
                    temp.push_back(1);
                }
                else
                {
                    tmp = res[i-1][j]+res[i-1][j-1];
                    temp.push_back(tmp);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};
