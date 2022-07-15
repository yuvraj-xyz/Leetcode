#include <bits/stdc++.h>
using namespace std;

// Roman to Integer
int main()
{
    string s;
    cin >> s;

    int n = s.size();
    int res = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='I')
        {
            if(s[i+1]=='V')
            {
                res+=4;
                i++;
            }
            else if(s[i+1]=='X')
            {
                res+=9;
                i++;
            }
            else
            {
                res+=1;
            }
        }
        else if(s[i]=='V')
        {
            res+=5;
        }
        else if(s[i]=='X')
        {
            if(s[i+1]=='L')
            {
                res+=40;
                i++;
            }
            else if(s[i+1]=='C')
            {
                res+=90;
                i++;
            }
            else
            {
                res+=10;
            }
        }
        else if(s[i]=='L')
        {
            res+=50;
        }
        else if(s[i]=='C')
        {
            if(s[i+1]=='D')
            {
                res+=400;
                i++;
            }
            else if(s[i+1]=='M')
            {
                res+=900;
                i++;
            }
            else
            {
                res+=100;
            }
        }
        else if(s[i]=='D')
        {
            res+=500;
        }
        else if(s[i]=='M')
        {
            res+=1000;
        }
    }
    cout << res;
}
