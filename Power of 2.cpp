class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
        {
            return false;
        }
        if(n==1)
        {
            return true;
        }
        while(n%2==0)
        {
            n/=2;
            if(n==1)
            {
                return true;
                break;
            }
        }
        return false;
    }
};
