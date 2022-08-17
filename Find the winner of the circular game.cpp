#include <bits/stdc++.h>
using namespace std;

// Find the Winner of the circular game
int solve(int n, int k)
{
    if(n==1)
    {
        return 0;
    }
    int x = solve(n-1,k);
    int y = (x+k)%n;
    return y;
}
int main()
{
    int n = 5;
    int k = 2;

    cout << solve(n,k)+1;
}
