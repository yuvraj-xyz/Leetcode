// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n==0)
//         {
//             return false;
//         }
//         if(n==1)
//         {
//             return true;
//         }
//         while(n%2==0)
//         {
//             n/=2;
//             if(n==1)
//             {
//                 return true;
//                 break;
//             }
//         }
//         return false;
//     }
// };

// RECURSION
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1 || n==2)
        {
            return true;
        }
        else if(n%2==1 || n==0)
        {
            return false;
        }
        else
        {
            return isPowerOfTwo(n/2);
        }
        return false;
    }
};


