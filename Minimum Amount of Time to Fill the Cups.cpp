#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> amount = {5,4,4};

    sort(amount.begin(),amount.end()); 
    int x=amount[0];
    int y=amount[1];
    int z=amount[2];
    int sum=x+y+z;
    if(x+y>z)
    {
        cout << sum/2+sum%2;
    }
    if(x==0 && y==0)
    {
        cout << z;
    }
    else
    {
        cout << z;
    }
}
